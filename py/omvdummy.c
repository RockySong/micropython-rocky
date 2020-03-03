/*
 * omvdummy.c
 */

/*
 * This function is doesn't to do anything.
 * It stay here to prevent the error when compiling 
 * a frozen module on openmv platform.
 * It declared as weak function and when all compiled 
 * objects have been linked, it will override by 
 * the real 'fb_alloc_free_till_mark' function 
 * which in 'fb_alloc.c' files
 */
void __attribute__((weak)) fb_alloc_free_till_mark()
{
}
