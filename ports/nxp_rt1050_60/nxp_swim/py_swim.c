#define _PY_SWIM_C_
#include <stdio.h>
#include <string.h>

#include "py/nlr.h"
#include "py/runtime.h"
#include "py/mphal.h"
#include "pin.h"
#include "genhdr/pins.h"
#include "bufhelper.h"
#include "oled_128128.h"
#include "mpconfigboard.h"
#include "py_swim.h"

pyb_swim_obj_t pyb_swim_obj[1] = {
	{&pyb_swim_type, swim_disp_oled128128, 0, {0}}, 
};


void pyb_swim_print(const mp_print_t *print, mp_obj_t self_in, mp_print_kind_t kind) {
    pyb_swim_obj_t *self = self_in;
	if (self->disp == swim_disp_oled128128) {
    	mp_printf(print, "SWIM on OLED 128x128, MONO");
	} else if (self->disp == swim_disp_tft480272) {
		mp_printf(print, "SWIM on TFT 480x272, RGB565");
	}
}

STATIC mp_obj_t pyb_swim_init_helper(pyb_swim_obj_t *self, mp_uint_t n_args, const mp_obj_t *pos_args, mp_map_t *kw_args) {
    static const mp_arg_t allowed_args[] = {
        { MP_QSTR_mode,     MP_ARG_REQUIRED | MP_ARG_INT, {.u_int = 0} },	// 0 = OLED128128, 1=TFT480272
        { MP_QSTR_baudrate, MP_ARG_KW_ONLY | MP_ARG_INT, {.u_int = 3000000} },
		// <<<
    };
	
    // parse args
    mp_arg_val_t args[MP_ARRAY_SIZE(allowed_args)];
    mp_arg_parse_all(n_args, pos_args, kw_args, MP_ARRAY_SIZE(allowed_args), allowed_args, args);

	if (args[0].u_int == 0) {
		self->disp = (enum_swim_disp_t) args[0].u_int;
		OLED_init(args[1].u_int);
		self->pfnUpdtDisp = OLED_update_swim_fb;
	}
	
    return mp_const_none;
}

STATIC mp_obj_t pyb_swim_make_new(const mp_obj_type_t *type, size_t n_args, size_t n_kw, const mp_obj_t *args) 
{
    // check arguments
    mp_arg_check_num(n_args, n_kw, 1, MP_OBJ_FUN_ARGS_MAX, true);
	
    if (n_args > 1 || n_kw > 0) {
        // start the peripheral
        mp_map_t kw_args;
        mp_map_init_fixed_table(&kw_args, n_kw, args + n_args);
        pyb_swim_init_helper(&pyb_swim_obj[0], n_args - 1, args + 1, &kw_args);
    }

    return (mp_obj_t)&pyb_swim_obj[0];	
}

STATIC mp_obj_t pyb_swim_init(mp_uint_t n_args, const mp_obj_t *args, mp_map_t *kw_args) {
    return pyb_swim_init_helper(args[0], n_args - 1, args + 1, kw_args);
}


STATIC mp_obj_t pyb_swim_deinit(mp_obj_t self_in) {
    pyb_swim_obj_t *self = self_in;
    if (self->disp == swim_disp_oled128128) {
		OLED_off();
		swim_window_close(&self->win);
		m_free(self->win.fb);
		MP_STATE_PORT(pvPortRoots[rootptr_oledfb]) = 0;
    }
	self->win.fb = 0;
	
    return mp_const_none;
}

/*
BOOL_32 swim_window_open(
						 int32_t xsize,
						 int32_t ysize,
						 int32_t xwin_min,
						 int32_t ywin_min,
						 int32_t xwin_max,
						 int32_t ywin_max,
						 int32_t border_width,
						 COLOR_T pcolor,
						 COLOR_T bkcolor,
						 COLOR_T fcolor);

*/

STATIC mp_obj_t pyb_swim_oled128128_window_open(pyb_swim_obj_t *self, mp_uint_t n_args, const mp_obj_t *pos_args, mp_map_t *kw_args)
{
	BOOL_32 ret;
	// static uint8_t vbuf[128 * 128 / 8];
	static const mp_arg_t allowed_args[] = {
        { MP_QSTR_xwin_min,    	MP_ARG_KW_ONLY  | MP_ARG_INT, {.u_int = 0} },
        { MP_QSTR_ywin_min,    	MP_ARG_KW_ONLY  | MP_ARG_INT, {.u_int = 0} },
        { MP_QSTR_xwin_max,    	MP_ARG_KW_ONLY  | MP_ARG_INT, {.u_int = 127} },	
        { MP_QSTR_ywin_max,    	MP_ARG_KW_ONLY  | MP_ARG_INT, {.u_int = 127} },	
        { MP_QSTR_border_width, MP_ARG_KW_ONLY  | MP_ARG_INT, {.u_int = 1} },			
        { MP_QSTR_pcolor, 		MP_ARG_KW_ONLY  | MP_ARG_INT, {.u_int = WHITE} },
        { MP_QSTR_bkcolor, 		MP_ARG_KW_ONLY  | MP_ARG_INT, {.u_int = BLACK} },
        { MP_QSTR_fcolor, 		MP_ARG_KW_ONLY  | MP_ARG_INT, {.u_int = WHITE} },
        { MP_QSTR_font, 		MP_ARG_KW_ONLY  | MP_ARG_INT, {.u_int = 0x0507} },

	};
    mp_arg_val_t args[MP_ARRAY_SIZE(allowed_args)];
    mp_arg_parse_all(n_args, pos_args, kw_args, MP_ARRAY_SIZE(allowed_args), allowed_args, args);	
	COLOR_T *fb;
	if (self->win.fb) {
		// free the fb in case it is after an ctrl-D soft reset that fool this driver to think it is not free'ed
		m_free(self->win.fb);
		self->win.fb = 0;
	}
	MP_STATE_PORT(pvPortRoots[rootptr_oledfb]) = fb = (COLOR_T*) m_malloc(128 * 128 / 8);
	
	ret = swim_window_open(&self->win, 128, 128, fb, 
		args[0].u_int, args[1].u_int, args[2].u_int, args[3].u_int, args[4].u_int, 
		(COLOR_T)args[5].u_int, (COLOR_T)args[6].u_int, (COLOR_T)args[7].u_int);
	if (ret)
	{
		if (args[8].u_int == 0x0507) {
			swim_set_font(&self->win, (FONT_T *)&font_x5x7);
		} else if (args[8].u_int == 0x0613) {
			swim_set_font(&self->win, (FONT_T *)&font_x6x13);
		}
	}
	return MP_OBJ_NEW_SMALL_INT(ret);
}

STATIC mp_obj_t pyb_swim_window_open(mp_uint_t n_args, const mp_obj_t *pos_args, mp_map_t *kw_args) {
	pyb_swim_obj_t *self = pos_args[0];
	if (self->disp == swim_disp_oled128128)
		pyb_swim_oled128128_window_open(self, n_args - 1, pos_args + 1, kw_args);
	else
		;
	return mp_const_none;
}

STATIC mp_obj_t pyb_swim_put_pixel(mp_obj_t self_in, mp_obj_t x_in, mp_obj_t y_in) {
    pyb_swim_obj_t *self = MP_OBJ_TO_PTR(self_in);
    mp_int_t x = mp_obj_get_int(x_in);
    mp_int_t y = mp_obj_get_int(y_in);
	swim_put_pixel(&self->win, x, y);
	return mp_const_none;
}

STATIC mp_obj_t pyb_swim_put_pixel_physical(size_t n_args, const mp_obj_t *args) {
	pyb_swim_obj_t *self = MP_OBJ_TO_PTR(args[0]);
	mp_int_t x = mp_obj_get_int(args[1]);
	mp_int_t y = mp_obj_get_int(args[2]);
	COLOR_T col = (COLOR_T) mp_obj_get_int(args[3]);
	swim_put_pixel_physical(&self->win, x, y, col);
	return mp_const_none;
}

STATIC mp_obj_t pyb_swim_get_pixel_physical(size_t n_args, const mp_obj_t *args) {
	pyb_swim_obj_t *self = MP_OBJ_TO_PTR(args[0]);
	mp_int_t x = mp_obj_get_int(args[1]);
	mp_int_t y = mp_obj_get_int(args[2]);
	COLOR_T col;
	col = swim_get_pixel_physical(&self->win, x, y);
	return MP_OBJ_NEW_SMALL_INT(col);
}

STATIC mp_obj_t pyb_swim_put_line(size_t n_args, const mp_obj_t *args) {
	pyb_swim_obj_t *self = MP_OBJ_TO_PTR(args[0]);
	mp_int_t x1 = mp_obj_get_int(args[1]);
	mp_int_t y1 = mp_obj_get_int(args[2]);
	mp_int_t x2 = mp_obj_get_int(args[3]);
	mp_int_t y2 = mp_obj_get_int(args[4]);
	swim_put_line(&self->win, x1, y1, x2, y2);
	return mp_const_none;
}

STATIC mp_obj_t pyb_swim_put_circle(size_t n_args, const mp_obj_t *args) {
	pyb_swim_obj_t *self = MP_OBJ_TO_PTR(args[0]);
	mp_int_t cx = mp_obj_get_int(args[1]);
	mp_int_t cy = mp_obj_get_int(args[2]);
	mp_int_t radius = mp_obj_get_int(args[3]);
	mp_int_t filled = mp_obj_get_int(args[4]);
	swim_put_line(&self->win, cx, cy, radius, filled);

	return mp_const_none;
}

STATIC mp_obj_t pyb_swim_put_diamond(size_t n_args, const mp_obj_t *args) {
	pyb_swim_obj_t *self = MP_OBJ_TO_PTR(args[0]);
	mp_int_t x = mp_obj_get_int(args[1]);
	mp_int_t y = mp_obj_get_int(args[2]);
	mp_int_t rx = mp_obj_get_int(args[3]);
	mp_int_t ry = mp_obj_get_int(args[4]);
	swim_put_diamond(&self->win, x, y, rx, ry);
	return mp_const_none;
}

STATIC mp_obj_t pyb_swim_clear_screen(size_t n_args, const mp_obj_t *args) {
	pyb_swim_obj_t *self = MP_OBJ_TO_PTR(args[0]);
	COLOR_T col = BLACK;
	if (n_args == 2)
		col = (COLOR_T) mp_obj_get_int(args[1]);
	swim_clear_screen(&self->win, col);
	return mp_const_none;
}

STATIC mp_obj_t pyb_swim_put_box(size_t n_args, const mp_obj_t *args) {
	pyb_swim_obj_t *self = MP_OBJ_TO_PTR(args[0]);
	mp_int_t x1 = mp_obj_get_int(args[1]);
	mp_int_t y1 = mp_obj_get_int(args[2]);
	mp_int_t x2 = mp_obj_get_int(args[3]);
	mp_int_t y2 = mp_obj_get_int(args[4]);
	swim_put_box(&self->win, x1, y1, x2, y2);
	return mp_const_none;

}

STATIC mp_obj_t pyb_swim_window_close(size_t n_args, const mp_obj_t *args) {
	pyb_swim_obj_t *self = MP_OBJ_TO_PTR(args[0]);
	swim_window_close(&self->win);
	return mp_const_none;
}

STATIC mp_obj_t pyb_swim_set_pen_color(size_t n_args, const mp_obj_t *args) {
	pyb_swim_obj_t *self = MP_OBJ_TO_PTR(args[0]);
	COLOR_T col = (COLOR_T) mp_obj_get_int(args[1]);
	swim_set_pen_color(&self->win, col);
	return mp_const_none;
}

STATIC mp_obj_t pyb_swim_set_fill_color(size_t n_args, const mp_obj_t *args) {
	pyb_swim_obj_t *self = MP_OBJ_TO_PTR(args[0]);
	COLOR_T col = (COLOR_T) mp_obj_get_int(args[1]);
	swim_set_fill_color(&self->win, col);
	return mp_const_none;
}

STATIC mp_obj_t pyb_swim_set_bkg_color(size_t n_args, const mp_obj_t *args) {
	pyb_swim_obj_t *self = MP_OBJ_TO_PTR(args[0]);
	COLOR_T col = (COLOR_T) mp_obj_get_int(args[1]);
	swim_set_bkg_color(&self->win, col);
	return mp_const_none;
}

STATIC mp_obj_t pyb_swim_clear_fb(size_t n_args, const mp_obj_t *args) {
	pyb_swim_obj_t *self = MP_OBJ_TO_PTR(args[0]);
	COLOR_T col = (COLOR_T) mp_obj_get_int(args[1]);
	swim_clear_fb(&self->win, col);
	return mp_const_none;
}


STATIC mp_obj_t pyb_swim_update_display(mp_obj_t self_in) {
	pyb_swim_obj_t *self = self_in;
	if (self->pfnUpdtDisp) {
		self->pfnUpdtDisp(self->win.fb);
	}
	return mp_const_none;
}

STATIC mp_obj_t pyb_swim_put_text_xy(size_t n_args, const mp_obj_t *args) {
	pyb_swim_obj_t *self = MP_OBJ_TO_PTR(args[0]);
	const char *str = mp_obj_str_get_str(args[1]);
    mp_int_t x = mp_obj_get_int(args[2]);
    mp_int_t y = mp_obj_get_int(args[3]);
	swim_put_text_xy(&self->win, str, x, y);
	return mp_const_none;
}

STATIC mp_obj_t pyb_swim_set_xy(size_t n_args, const mp_obj_t *args) {
	pyb_swim_obj_t *self = MP_OBJ_TO_PTR(args[0]);
    mp_int_t x = mp_obj_get_int(args[1]);
    mp_int_t y = mp_obj_get_int(args[2]);
	swim_set_xy(&self->win, x, y);
	return mp_const_none;
}


STATIC mp_obj_t pyb_swim_get_xy(size_t n_args, const mp_obj_t *args) {
	pyb_swim_obj_t *self = MP_OBJ_TO_PTR(args[0]);
	mp_int_t x, y;
	swim_get_xy(&self->win, &x, &y);
	mp_obj_tuple_t *o = m_new_obj_var(mp_obj_tuple_t, mp_obj_t, 2);
	o->base.type = &mp_type_tuple;
	o->len = 2;
	o->items[0] = MP_OBJ_NEW_SMALL_INT(x);
	o->items[1] = MP_OBJ_NEW_SMALL_INT(y);
	return MP_OBJ_FROM_PTR(o);
}

STATIC mp_obj_t pyb_swim_put_text(size_t n_args, const mp_obj_t *args) {
	pyb_swim_obj_t *self = MP_OBJ_TO_PTR(args[0]);
	const char *str = mp_obj_str_get_str(args[1]);
	swim_put_text(&self->win, str);
	return mp_const_none;
}

STATIC mp_obj_t pyb_swim_put_ltext(size_t n_args, const mp_obj_t *args) {
	pyb_swim_obj_t *self = MP_OBJ_TO_PTR(args[0]);
	const char *str = mp_obj_str_get_str(args[1]);
	swim_put_ltext(&self->win, str);
	return mp_const_none;
}

STATIC mp_obj_t pyb_swim_window_scroll(size_t n_args, const mp_obj_t *args) {
	pyb_swim_obj_t *self = MP_OBJ_TO_PTR(args[0]);
	mp_int_t nLines = mp_obj_get_int(args[1]);
	swim_window_scroll(&self->win, nLines);
	return mp_const_none;
}

STATIC mp_obj_t pyb_swim_put_char(size_t n_args, const mp_obj_t *args) {
	pyb_swim_obj_t *self = MP_OBJ_TO_PTR(args[0]);
	const char *str = mp_obj_str_get_str(args[1]);
	char c = str[0];
	swim_put_char(&self->win, c);
	return mp_const_none;
}

STATIC mp_obj_t pyb_swim_put_newline(mp_obj_t self_in) {
    pyb_swim_obj_t *self = self_in;
    swim_put_newline(&self->win);
    return mp_const_none;
}

STATIC mp_obj_t pyb_swim_set_font(size_t n_args, const mp_obj_t *args) {
	pyb_swim_obj_t *self = MP_OBJ_TO_PTR(args[0]);
    mp_int_t fntNdx = mp_obj_get_int(args[1]);
	if (fntNdx == 0x0507)
		swim_set_font(&self->win, (FONT_T *)&font_x5x7);
	else if (fntNdx == 0x0613)
		swim_set_font(&self->win, (FONT_T *)&font_x6x13);
	else {
		nlr_raise(mp_obj_new_exception_msg_varg(&mp_type_ValueError,
			"invalid font %d !", fntNdx));
	}
	return mp_const_none;
}

STATIC mp_obj_t pyb_swim_get_font_height(mp_obj_t self_in) {
    pyb_swim_obj_t *self = self_in;
    mp_int_t h = swim_get_font_height(&self->win);
    return MP_OBJ_NEW_SMALL_INT(h);
}

STATIC mp_obj_t pyb_swim_set_title(size_t n_args, const mp_obj_t *args) {
	pyb_swim_obj_t *self = MP_OBJ_TO_PTR(args[0]);
	const char *str = mp_obj_str_get_str(args[1]);
	COLOR_T col = (COLOR_T) mp_obj_get_int(args[2]);
	swim_set_title(&self->win, str, col);
	return mp_const_none;
}

STATIC mp_obj_t pyb_swim_set_font_trasparency(size_t n_args, const mp_obj_t *args) {
	pyb_swim_obj_t *self = MP_OBJ_TO_PTR(args[0]);
	int trans = mp_obj_get_int(args[2]);
	swim_set_font_trasparency(&self->win, trans);
	return mp_const_none;
}


// -----------------------------------------------------------------------------------------
STATIC MP_DEFINE_CONST_FUN_OBJ_KW(pyb_swim_init_obj, 1, pyb_swim_init);
STATIC MP_DEFINE_CONST_FUN_OBJ_KW(pyb_swim_window_open_obj, 1, pyb_swim_window_open);
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pyb_swim_deinit_obj, pyb_swim_deinit);
STATIC MP_DEFINE_CONST_FUN_OBJ_3(pyb_swim_put_pixel_obj, pyb_swim_put_pixel);
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_swim_put_pixel_physical_obj, 4, 4, pyb_swim_put_pixel_physical); 
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_swim_get_pixel_physical_obj, 3, 3, pyb_swim_get_pixel_physical); 
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_swim_put_line_obj, 5, 5, pyb_swim_put_line); 
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_swim_put_circle_obj, 5, 5, pyb_swim_put_circle); 
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_swim_put_diamond_obj, 5, 5, pyb_swim_put_diamond); 
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_swim_put_box_obj, 5, 5, pyb_swim_put_box); 
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pyb_swim_update_display_obj, pyb_swim_update_display);
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_swim_clear_screen_obj, 1, 2, pyb_swim_clear_screen); 
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_swim_window_close_obj, 1, 1, pyb_swim_window_close); 
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_swim_set_pen_color_obj, 2, 2, pyb_swim_set_pen_color); 
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_swim_set_fill_color_obj, 2, 2, pyb_swim_set_fill_color); 
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_swim_set_bkg_color_obj, 2, 2, pyb_swim_set_bkg_color); 
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_swim_clear_fb_obj, 2, 2, pyb_swim_clear_fb); 

STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_swim_put_text_xy_obj, 4, 4, pyb_swim_put_text_xy);
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_swim_set_xy_obj, 3, 3, pyb_swim_set_xy);
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_swim_get_xy_obj, 1, 1, pyb_swim_get_xy);
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_swim_put_text_obj, 2, 2, pyb_swim_put_text);
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_swim_put_ltext_obj, 2, 2, pyb_swim_put_ltext);
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_swim_window_scroll_obj, 2, 2, pyb_swim_window_scroll);
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_swim_put_char_obj, 2, 2, pyb_swim_put_char);
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pyb_swim_put_newline_obj, pyb_swim_put_newline);
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_swim_set_font_obj, 2, 2, pyb_swim_set_font);
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pyb_swim_get_font_height_obj, pyb_swim_get_font_height);
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_swim_set_title_obj, 3, 3, pyb_swim_set_title);
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pyb_swim_set_font_trasparency_obj, 2, 2, pyb_swim_set_font_trasparency);



STATIC const mp_rom_map_elem_t swim_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_init), MP_ROM_PTR(&pyb_swim_init_obj) },
    { MP_ROM_QSTR(MP_QSTR_deinit), MP_ROM_PTR(&pyb_swim_deinit_obj) },
	{ MP_ROM_QSTR(MP_QSTR_window_open), MP_ROM_PTR(&pyb_swim_window_open_obj) },
	{ MP_ROM_QSTR(MP_QSTR_put_pixel), MP_ROM_PTR(&pyb_swim_put_pixel_obj) },
	{ MP_ROM_QSTR(MP_QSTR_put_pixel_physical), MP_ROM_PTR(&pyb_swim_put_pixel_physical_obj) },
	{ MP_ROM_QSTR(MP_QSTR_get_pixel_physical), MP_ROM_PTR(&pyb_swim_get_pixel_physical_obj) },
	{ MP_ROM_QSTR(MP_QSTR_put_line), MP_ROM_PTR(&pyb_swim_put_line_obj) },
	{ MP_ROM_QSTR(MP_QSTR_put_circle), MP_ROM_PTR(&pyb_swim_put_circle_obj) },
	{ MP_ROM_QSTR(MP_QSTR_put_diamond), MP_ROM_PTR(&pyb_swim_put_diamond_obj) },
	{ MP_ROM_QSTR(MP_QSTR_put_box), MP_ROM_PTR(&pyb_swim_put_box_obj) },
	{ MP_ROM_QSTR(MP_QSTR_clear_screen), MP_ROM_PTR(&pyb_swim_clear_screen_obj) },
	{ MP_ROM_QSTR(MP_QSTR_window_close), MP_ROM_PTR(&pyb_swim_window_close_obj) },
	{ MP_ROM_QSTR(MP_QSTR_set_pen_color), MP_ROM_PTR(&pyb_swim_set_pen_color_obj) },
	{ MP_ROM_QSTR(MP_QSTR_set_fill_color), MP_ROM_PTR(&pyb_swim_set_fill_color_obj) },
	{ MP_ROM_QSTR(MP_QSTR_set_bkg_color), MP_ROM_PTR(&pyb_swim_set_bkg_color_obj) },
	{ MP_ROM_QSTR(MP_QSTR_update_display), MP_ROM_PTR(&pyb_swim_update_display_obj) },
	{ MP_ROM_QSTR(MP_QSTR_clear_fb), MP_ROM_PTR(&pyb_swim_clear_fb_obj) },

	{ MP_ROM_QSTR(MP_QSTR_put_text_xy), MP_ROM_PTR(&pyb_swim_put_text_xy_obj) },
	{ MP_ROM_QSTR(MP_QSTR_set_xy), MP_ROM_PTR(&pyb_swim_set_xy_obj) },
	{ MP_ROM_QSTR(MP_QSTR_get_xy), MP_ROM_PTR(&pyb_swim_get_xy_obj) },
	{ MP_ROM_QSTR(MP_QSTR_put_text), MP_ROM_PTR(&pyb_swim_put_text_obj) },
	{ MP_ROM_QSTR(MP_QSTR_put_ltext), MP_ROM_PTR(&pyb_swim_put_ltext_obj) },
	{ MP_ROM_QSTR(MP_QSTR_window_scroll), MP_ROM_PTR(&pyb_swim_window_scroll_obj) },
	{ MP_ROM_QSTR(MP_QSTR_put_char), MP_ROM_PTR(&pyb_swim_put_char_obj) },
	{ MP_ROM_QSTR(MP_QSTR_put_newline), MP_ROM_PTR(&pyb_swim_put_newline_obj) },
	{ MP_ROM_QSTR(MP_QSTR_set_font), MP_ROM_PTR(&pyb_swim_set_font_obj) },
	{ MP_ROM_QSTR(MP_QSTR_get_font_height), MP_ROM_PTR(&pyb_swim_get_font_height_obj) },
	{ MP_ROM_QSTR(MP_QSTR_set_title), MP_ROM_PTR(&pyb_swim_set_title_obj) },
	{ MP_ROM_QSTR(MP_QSTR_set_font_trasparency), MP_ROM_PTR(&pyb_swim_set_font_trasparency_obj) },


	{ MP_ROM_QSTR(MP_QSTR_WHITE), MP_ROM_INT(WHITE) },
	{ MP_ROM_QSTR(MP_QSTR_BLACK), MP_ROM_INT(BLACK) },
	{ MP_ROM_QSTR(MP_QSTR_FONT5x7), MP_ROM_INT(0x0507) },
	{ MP_ROM_QSTR(MP_QSTR_FONT6x13), MP_ROM_INT(0x0613) },

};

STATIC MP_DEFINE_CONST_DICT(swim_locals_dict, swim_locals_dict_table);

const mp_obj_type_t pyb_swim_type = {
    { &mp_type_type },
    .name = MP_QSTR_SWIM,
    .print = pyb_swim_print,
    .make_new = pyb_swim_make_new,
    .locals_dict = (mp_obj_dict_t*)&swim_locals_dict,
};

