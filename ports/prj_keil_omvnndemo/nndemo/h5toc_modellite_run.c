
#include <stdint.h>
#include <stdlib.h>
#define ACT_RELU           1
#define ACT_SOFTMAX        2
#define ACT_RELU6          6
#define QUANTIZE_WORD_LEN  8
// --------------------------------------------------------------------------------
// Block 0: InputLayer - input
#define INPUT0_IC                     3
#define INPUT0_IX                     64
#define INPUT0_IY                     64
#define INPUT0_OC                     3
#define INPUT0_OX                     64
#define INPUT0_OY                     64
#define INPUT0_zzdbg_1_ampShfIn       7
// --------------------------------------------------------------------------------
// Block 1: Conv2D - conv2d_1
#define CONV1_IC                      3
#define CONV1_IX                      64
#define CONV1_IY                      64
#define CONV1_KX                      3
#define CONV1_KY                      3
#define CONV1_OC                      32
#define CONV1_OX                      32
#define CONV1_OY                      32
#define CONV1_PX                      1
#define CONV1_PY                      1
#define CONV1_SB                      7
#define CONV1_SO                      9
#define CONV1_SX                      2
#define CONV1_SY                      2
#define CONV1_zzdbg_1_ampShfIn        7
#define CONV1_zzdbg_2_SH_WT           6
#define CONV1_zzdbg_3_productShf      13
#define CONV1_zzdbg_4_SB_AMP          6
#define CONV1_zzdbg_5_ampShfOut       4
// --------------------------------------------------------------------------------
// Block 1: Activation - re_lu_1
#define ACT1_ACT                      ACT_RELU6
#define ACT1_IC                       32
#define ACT1_IX                       32
#define ACT1_IY                       32
#define ACT1_OC                       32
#define ACT1_OX                       32
#define ACT1_OY                       32
#define ACT1_zzdbg_1_ampShfIn         4
// --------------------------------------------------------------------------------
// Block 2: DepthwiseConv2D - depthwise_conv2d_1
#define DSCONV2_IC                    32
#define DSCONV2_IX                    32
#define DSCONV2_IY                    32
#define DSCONV2_KX                    3
#define DSCONV2_KY                    3
#define DSCONV2_OC                    32
#define DSCONV2_OX                    32
#define DSCONV2_OY                    32
#define DSCONV2_PX                    1
#define DSCONV2_PY                    1
#define DSCONV2_SB                    3
#define DSCONV2_SO                    4
#define DSCONV2_SX                    1
#define DSCONV2_SY                    1
#define DSCONV2_zzdbg_1_ampShfIn      4
#define DSCONV2_zzdbg_2_SH_WT         4
#define DSCONV2_zzdbg_3_productShf    8
#define DSCONV2_zzdbg_4_SB_AMP        5
#define DSCONV2_zzdbg_5_ampShfOut     4
// --------------------------------------------------------------------------------
// Block 2: Activation - re_lu_2
#define ACT2_ACT                      ACT_RELU6
#define ACT2_IC                       32
#define ACT2_IX                       32
#define ACT2_IY                       32
#define ACT2_OC                       32
#define ACT2_OX                       32
#define ACT2_OY                       32
#define ACT2_zzdbg_1_ampShfIn         4
// --------------------------------------------------------------------------------
// Block 3: Conv2D - conv2d_2
#define CONV3_IC                      32
#define CONV3_IX                      32
#define CONV3_IY                      32
#define CONV3_KX                      1
#define CONV3_KY                      1
#define CONV3_OC                      64
#define CONV3_OX                      32
#define CONV3_OY                      32
#define CONV3_PX                      0
#define CONV3_PY                      0
#define CONV3_SB                      6
#define CONV3_SO                      7
#define CONV3_SX                      1
#define CONV3_SY                      1
#define CONV3_zzdbg_1_ampShfIn        4
#define CONV3_zzdbg_2_SH_WT           7
#define CONV3_zzdbg_3_productShf      11
#define CONV3_zzdbg_4_SB_AMP          5
#define CONV3_zzdbg_5_ampShfOut       4
// --------------------------------------------------------------------------------
// Block 3: Activation - re_lu_3
#define ACT3_ACT                      ACT_RELU6
#define ACT3_IC                       64
#define ACT3_IX                       32
#define ACT3_IY                       32
#define ACT3_OC                       64
#define ACT3_OX                       32
#define ACT3_OY                       32
#define ACT3_zzdbg_1_ampShfIn         4
// --------------------------------------------------------------------------------
// Block 4: DepthwiseConv2D - depthwise_conv2d_2
#define DSCONV4_IC                    64
#define DSCONV4_IX                    32
#define DSCONV4_IY                    32
#define DSCONV4_KX                    3
#define DSCONV4_KY                    3
#define DSCONV4_OC                    64
#define DSCONV4_OX                    32
#define DSCONV4_OY                    32
#define DSCONV4_PX                    1
#define DSCONV4_PY                    1
#define DSCONV4_SB                    3
#define DSCONV4_SO                    5
#define DSCONV4_SX                    1
#define DSCONV4_SY                    1
#define DSCONV4_zzdbg_1_ampShfIn      4
#define DSCONV4_zzdbg_2_SH_WT         5
#define DSCONV4_zzdbg_3_productShf    9
#define DSCONV4_zzdbg_4_SB_AMP        6
#define DSCONV4_zzdbg_5_ampShfOut     4
// --------------------------------------------------------------------------------
// Block 4: Activation - re_lu_4
#define ACT4_ACT                      ACT_RELU6
#define ACT4_IC                       64
#define ACT4_IX                       32
#define ACT4_IY                       32
#define ACT4_OC                       64
#define ACT4_OX                       32
#define ACT4_OY                       32
#define ACT4_zzdbg_1_ampShfIn         4
// --------------------------------------------------------------------------------
// Block 4: MaxPooling2D - max_pooling2d_1
#define MAXP4_IC                      64
#define MAXP4_IX                      32
#define MAXP4_IY                      32
#define MAXP4_KX                      2
#define MAXP4_KY                      2
#define MAXP4_OC                      64
#define MAXP4_OX                      16
#define MAXP4_OY                      16
#define MAXP4_SX                      2
#define MAXP4_SY                      2
#define MAXP4_zzdbg_1_ampShfIn        4
// --------------------------------------------------------------------------------
// Block 5: Conv2D - conv2d_3
#define CONV5_IC                      64
#define CONV5_IX                      16
#define CONV5_IY                      16
#define CONV5_KX                      1
#define CONV5_KY                      1
#define CONV5_OC                      32
#define CONV5_OX                      16
#define CONV5_OY                      16
#define CONV5_PX                      0
#define CONV5_PY                      0
#define CONV5_SB                      6
#define CONV5_SO                      7
#define CONV5_SX                      1
#define CONV5_SY                      1
#define CONV5_zzdbg_1_ampShfIn        4
#define CONV5_zzdbg_2_SH_WT           7
#define CONV5_zzdbg_3_productShf      11
#define CONV5_zzdbg_4_SB_AMP          5
#define CONV5_zzdbg_5_ampShfOut       4
// --------------------------------------------------------------------------------
// Block 6: Conv2D - conv2d_4
#define CONV6_IC                      32
#define CONV6_IX                      16
#define CONV6_IY                      16
#define CONV6_KX                      1
#define CONV6_KY                      1
#define CONV6_OC                      64
#define CONV6_OX                      16
#define CONV6_OY                      16
#define CONV6_PX                      0
#define CONV6_PY                      0
#define CONV6_SB                      5
#define CONV6_SO                      8
#define CONV6_SX                      1
#define CONV6_SY                      1
#define CONV6_zzdbg_1_ampShfIn        4
#define CONV6_zzdbg_2_SH_WT           8
#define CONV6_zzdbg_3_productShf      12
#define CONV6_zzdbg_4_SB_AMP          7
#define CONV6_zzdbg_5_ampShfOut       4
// --------------------------------------------------------------------------------
// Block 6: Activation - re_lu_5
#define ACT6_ACT                      ACT_RELU6
#define ACT6_IC                       64
#define ACT6_IX                       16
#define ACT6_IY                       16
#define ACT6_OC                       64
#define ACT6_OX                       16
#define ACT6_OY                       16
#define ACT6_zzdbg_1_ampShfIn         4
// --------------------------------------------------------------------------------
// Block 7: DepthwiseConv2D - depthwise_conv2d_3
#define DSCONV7_IC                    64
#define DSCONV7_IX                    16
#define DSCONV7_IY                    16
#define DSCONV7_KX                    3
#define DSCONV7_KY                    3
#define DSCONV7_OC                    64
#define DSCONV7_OX                    16
#define DSCONV7_OY                    16
#define DSCONV7_PX                    1
#define DSCONV7_PY                    1
#define DSCONV7_SB                    4
#define DSCONV7_SO                    6
#define DSCONV7_SX                    1
#define DSCONV7_SY                    1
#define DSCONV7_zzdbg_1_ampShfIn      4
#define DSCONV7_zzdbg_2_SH_WT         6
#define DSCONV7_zzdbg_3_productShf    10
#define DSCONV7_zzdbg_4_SB_AMP        6
#define DSCONV7_zzdbg_5_ampShfOut     4
// --------------------------------------------------------------------------------
// Block 7: Activation - re_lu_6
#define ACT7_ACT                      ACT_RELU6
#define ACT7_IC                       64
#define ACT7_IX                       16
#define ACT7_IY                       16
#define ACT7_OC                       64
#define ACT7_OX                       16
#define ACT7_OY                       16
#define ACT7_zzdbg_1_ampShfIn         4
// --------------------------------------------------------------------------------
// Block 8: Conv2D - conv2d_5
#define CONV8_IC                      64
#define CONV8_IX                      16
#define CONV8_IY                      16
#define CONV8_KX                      1
#define CONV8_KY                      1
#define CONV8_OC                      32
#define CONV8_OX                      16
#define CONV8_OY                      16
#define CONV8_PX                      0
#define CONV8_PY                      0
#define CONV8_SB                      5
#define CONV8_SO                      7
#define CONV8_SX                      1
#define CONV8_SY                      1
#define CONV8_zzdbg_1_ampShfIn        4
#define CONV8_zzdbg_2_SH_WT           7
#define CONV8_zzdbg_3_productShf      11
#define CONV8_zzdbg_4_SB_AMP          6
#define CONV8_zzdbg_5_ampShfOut       4
// --------------------------------------------------------------------------------
// Block 8: Add - add_1
#define ADD8_IC                       32
#define ADD8_IX                       16
#define ADD8_IY                       16
#define ADD8_OC                       32
#define ADD8_OX                       16
#define ADD8_OY                       16
#define ADD8_SI0                      4
#define ADD8_SI1                      4
#define ADD8_SO                       4
#define ADD8_zzdbg_1_ampShfIn         4
#define ADD8_zzdbg_5_ampShfOut        4
// --------------------------------------------------------------------------------
// Block 9: Conv2D - conv2d_6
#define CONV9_IC                      32
#define CONV9_IX                      16
#define CONV9_IY                      16
#define CONV9_KX                      1
#define CONV9_KY                      1
#define CONV9_OC                      64
#define CONV9_OX                      16
#define CONV9_OY                      16
#define CONV9_PX                      0
#define CONV9_PY                      0
#define CONV9_SB                      4
#define CONV9_SO                      8
#define CONV9_SX                      1
#define CONV9_SY                      1
#define CONV9_zzdbg_1_ampShfIn        4
#define CONV9_zzdbg_2_SH_WT           8
#define CONV9_zzdbg_3_productShf      12
#define CONV9_zzdbg_4_SB_AMP          8
#define CONV9_zzdbg_5_ampShfOut       4
// --------------------------------------------------------------------------------
// Block 9: Activation - re_lu_7
#define ACT9_ACT                      ACT_RELU6
#define ACT9_IC                       64
#define ACT9_IX                       16
#define ACT9_IY                       16
#define ACT9_OC                       64
#define ACT9_OX                       16
#define ACT9_OY                       16
#define ACT9_zzdbg_1_ampShfIn         4
// --------------------------------------------------------------------------------
// Block 10: DepthwiseConv2D - depthwise_conv2d_4
#define DSCONV10_IC                   64
#define DSCONV10_IX                   16
#define DSCONV10_IY                   16
#define DSCONV10_KX                   3
#define DSCONV10_KY                   3
#define DSCONV10_OC                   64
#define DSCONV10_OX                   16
#define DSCONV10_OY                   16
#define DSCONV10_PX                   1
#define DSCONV10_PY                   1
#define DSCONV10_SB                   4
#define DSCONV10_SO                   6
#define DSCONV10_SX                   1
#define DSCONV10_SY                   1
#define DSCONV10_zzdbg_1_ampShfIn     4
#define DSCONV10_zzdbg_2_SH_WT        6
#define DSCONV10_zzdbg_3_productShf   10
#define DSCONV10_zzdbg_4_SB_AMP       6
#define DSCONV10_zzdbg_5_ampShfOut    4
// --------------------------------------------------------------------------------
// Block 10: Activation - re_lu_8
#define ACT10_ACT                     ACT_RELU6
#define ACT10_IC                      64
#define ACT10_IX                      16
#define ACT10_IY                      16
#define ACT10_OC                      64
#define ACT10_OX                      16
#define ACT10_OY                      16
#define ACT10_zzdbg_1_ampShfIn        4
// --------------------------------------------------------------------------------
// Block 11: Conv2D - conv2d_7
#define CONV11_IC                     64
#define CONV11_IX                     16
#define CONV11_IY                     16
#define CONV11_KX                     1
#define CONV11_KY                     1
#define CONV11_OC                     32
#define CONV11_OX                     16
#define CONV11_OY                     16
#define CONV11_PX                     0
#define CONV11_PY                     0
#define CONV11_SB                     5
#define CONV11_SO                     7
#define CONV11_SX                     1
#define CONV11_SY                     1
#define CONV11_zzdbg_1_ampShfIn       4
#define CONV11_zzdbg_2_SH_WT          7
#define CONV11_zzdbg_3_productShf     11
#define CONV11_zzdbg_4_SB_AMP         6
#define CONV11_zzdbg_5_ampShfOut      4
// --------------------------------------------------------------------------------
// Block 11: Add - add_2
#define ADD11_IC                      32
#define ADD11_IX                      16
#define ADD11_IY                      16
#define ADD11_OC                      32
#define ADD11_OX                      16
#define ADD11_OY                      16
#define ADD11_SI0                     4
#define ADD11_SI1                     4
#define ADD11_SO                      4
#define ADD11_zzdbg_1_ampShfIn        4
#define ADD11_zzdbg_5_ampShfOut       4
// --------------------------------------------------------------------------------
// Block 12: Conv2D - conv2d_8
#define CONV12_IC                     32
#define CONV12_IX                     16
#define CONV12_IY                     16
#define CONV12_KX                     1
#define CONV12_KY                     1
#define CONV12_OC                     128
#define CONV12_OX                     16
#define CONV12_OY                     16
#define CONV12_PX                     0
#define CONV12_PY                     0
#define CONV12_SB                     5
#define CONV12_SO                     8
#define CONV12_SX                     1
#define CONV12_SY                     1
#define CONV12_zzdbg_1_ampShfIn       4
#define CONV12_zzdbg_2_SH_WT          8
#define CONV12_zzdbg_3_productShf     12
#define CONV12_zzdbg_4_SB_AMP         7
#define CONV12_zzdbg_5_ampShfOut      4
// --------------------------------------------------------------------------------
// Block 12: Activation - re_lu_9
#define ACT12_ACT                     ACT_RELU6
#define ACT12_IC                      128
#define ACT12_IX                      16
#define ACT12_IY                      16
#define ACT12_OC                      128
#define ACT12_OX                      16
#define ACT12_OY                      16
#define ACT12_zzdbg_1_ampShfIn        4
// --------------------------------------------------------------------------------
// Block 13: DepthwiseConv2D - depthwise_conv2d_5
#define DSCONV13_IC                   128
#define DSCONV13_IX                   16
#define DSCONV13_IY                   16
#define DSCONV13_KX                   3
#define DSCONV13_KY                   3
#define DSCONV13_OC                   128
#define DSCONV13_OX                   16
#define DSCONV13_OY                   16
#define DSCONV13_PX                   1
#define DSCONV13_PY                   1
#define DSCONV13_SB                   4
#define DSCONV13_SO                   6
#define DSCONV13_SX                   1
#define DSCONV13_SY                   1
#define DSCONV13_zzdbg_1_ampShfIn     4
#define DSCONV13_zzdbg_2_SH_WT        6
#define DSCONV13_zzdbg_3_productShf   10
#define DSCONV13_zzdbg_4_SB_AMP       6
#define DSCONV13_zzdbg_5_ampShfOut    4
// --------------------------------------------------------------------------------
// Block 13: Activation - re_lu_10
#define ACT13_ACT                     ACT_RELU6
#define ACT13_IC                      128
#define ACT13_IX                      16
#define ACT13_IY                      16
#define ACT13_OC                      128
#define ACT13_OX                      16
#define ACT13_OY                      16
#define ACT13_zzdbg_1_ampShfIn        4
// --------------------------------------------------------------------------------
// Block 13: MaxPooling2D - max_pooling2d_2
#define MAXP13_IC                     128
#define MAXP13_IX                     16
#define MAXP13_IY                     16
#define MAXP13_KX                     2
#define MAXP13_KY                     2
#define MAXP13_OC                     128
#define MAXP13_OX                     8
#define MAXP13_OY                     8
#define MAXP13_SX                     2
#define MAXP13_SY                     2
#define MAXP13_zzdbg_1_ampShfIn       4
// --------------------------------------------------------------------------------
// Block 14: Conv2D - conv2d_9
#define CONV14_IC                     128
#define CONV14_IX                     8
#define CONV14_IY                     8
#define CONV14_KX                     1
#define CONV14_KY                     1
#define CONV14_OC                     64
#define CONV14_OX                     8
#define CONV14_OY                     8
#define CONV14_PX                     0
#define CONV14_PY                     0
#define CONV14_SB                     7
#define CONV14_SO                     8
#define CONV14_SX                     1
#define CONV14_SY                     1
#define CONV14_zzdbg_1_ampShfIn       4
#define CONV14_zzdbg_2_SH_WT          8
#define CONV14_zzdbg_3_productShf     12
#define CONV14_zzdbg_4_SB_AMP         5
#define CONV14_zzdbg_5_ampShfOut      4
// --------------------------------------------------------------------------------
// Block 15: Conv2D - conv2d_10
#define CONV15_IC                     64
#define CONV15_IX                     8
#define CONV15_IY                     8
#define CONV15_KX                     1
#define CONV15_KY                     1
#define CONV15_OC                     128
#define CONV15_OX                     8
#define CONV15_OY                     8
#define CONV15_PX                     0
#define CONV15_PY                     0
#define CONV15_SB                     5
#define CONV15_SO                     8
#define CONV15_SX                     1
#define CONV15_SY                     1
#define CONV15_zzdbg_1_ampShfIn       4
#define CONV15_zzdbg_2_SH_WT          8
#define CONV15_zzdbg_3_productShf     12
#define CONV15_zzdbg_4_SB_AMP         7
#define CONV15_zzdbg_5_ampShfOut      4
// --------------------------------------------------------------------------------
// Block 15: Activation - re_lu_11
#define ACT15_ACT                     ACT_RELU6
#define ACT15_IC                      128
#define ACT15_IX                      8
#define ACT15_IY                      8
#define ACT15_OC                      128
#define ACT15_OX                      8
#define ACT15_OY                      8
#define ACT15_zzdbg_1_ampShfIn        4
// --------------------------------------------------------------------------------
// Block 16: DepthwiseConv2D - depthwise_conv2d_6
#define DSCONV16_IC                   128
#define DSCONV16_IX                   8
#define DSCONV16_IY                   8
#define DSCONV16_KX                   3
#define DSCONV16_KY                   3
#define DSCONV16_OC                   128
#define DSCONV16_OX                   8
#define DSCONV16_OY                   8
#define DSCONV16_PX                   1
#define DSCONV16_PY                   1
#define DSCONV16_SB                   4
#define DSCONV16_SO                   6
#define DSCONV16_SX                   1
#define DSCONV16_SY                   1
#define DSCONV16_zzdbg_1_ampShfIn     4
#define DSCONV16_zzdbg_2_SH_WT        6
#define DSCONV16_zzdbg_3_productShf   10
#define DSCONV16_zzdbg_4_SB_AMP       6
#define DSCONV16_zzdbg_5_ampShfOut    4
// --------------------------------------------------------------------------------
// Block 16: Activation - re_lu_12
#define ACT16_ACT                     ACT_RELU6
#define ACT16_IC                      128
#define ACT16_IX                      8
#define ACT16_IY                      8
#define ACT16_OC                      128
#define ACT16_OX                      8
#define ACT16_OY                      8
#define ACT16_zzdbg_1_ampShfIn        4
// --------------------------------------------------------------------------------
// Block 17: Conv2D - conv2d_11
#define CONV17_IC                     128
#define CONV17_IX                     8
#define CONV17_IY                     8
#define CONV17_KX                     1
#define CONV17_KY                     1
#define CONV17_OC                     64
#define CONV17_OX                     8
#define CONV17_OY                     8
#define CONV17_PX                     0
#define CONV17_PY                     0
#define CONV17_SB                     6
#define CONV17_SO                     8
#define CONV17_SX                     1
#define CONV17_SY                     1
#define CONV17_zzdbg_1_ampShfIn       4
#define CONV17_zzdbg_2_SH_WT          8
#define CONV17_zzdbg_3_productShf     12
#define CONV17_zzdbg_4_SB_AMP         6
#define CONV17_zzdbg_5_ampShfOut      4
// --------------------------------------------------------------------------------
// Block 18: Conv2D - conv2d_12
#define CONV18_IC                     64
#define CONV18_IX                     8
#define CONV18_IY                     8
#define CONV18_KX                     1
#define CONV18_KY                     1
#define CONV18_OC                     128
#define CONV18_OX                     8
#define CONV18_OY                     8
#define CONV18_PX                     0
#define CONV18_PY                     0
#define CONV18_SB                     4
#define CONV18_SO                     8
#define CONV18_SX                     1
#define CONV18_SY                     1
#define CONV18_zzdbg_1_ampShfIn       4
#define CONV18_zzdbg_2_SH_WT          8
#define CONV18_zzdbg_3_productShf     12
#define CONV18_zzdbg_4_SB_AMP         8
#define CONV18_zzdbg_5_ampShfOut      4
// --------------------------------------------------------------------------------
// Block 18: Activation - re_lu_13
#define ACT18_ACT                     ACT_RELU6
#define ACT18_IC                      128
#define ACT18_IX                      8
#define ACT18_IY                      8
#define ACT18_OC                      128
#define ACT18_OX                      8
#define ACT18_OY                      8
#define ACT18_zzdbg_1_ampShfIn        4
// --------------------------------------------------------------------------------
// Block 19: DepthwiseConv2D - depthwise_conv2d_7
#define DSCONV19_IC                   128
#define DSCONV19_IX                   8
#define DSCONV19_IY                   8
#define DSCONV19_KX                   3
#define DSCONV19_KY                   3
#define DSCONV19_OC                   128
#define DSCONV19_OX                   8
#define DSCONV19_OY                   8
#define DSCONV19_PX                   1
#define DSCONV19_PY                   1
#define DSCONV19_SB                   4
#define DSCONV19_SO                   6
#define DSCONV19_SX                   1
#define DSCONV19_SY                   1
#define DSCONV19_zzdbg_1_ampShfIn     4
#define DSCONV19_zzdbg_2_SH_WT        6
#define DSCONV19_zzdbg_3_productShf   10
#define DSCONV19_zzdbg_4_SB_AMP       6
#define DSCONV19_zzdbg_5_ampShfOut    4
// --------------------------------------------------------------------------------
// Block 19: Activation - re_lu_14
#define ACT19_ACT                     ACT_RELU6
#define ACT19_IC                      128
#define ACT19_IX                      8
#define ACT19_IY                      8
#define ACT19_OC                      128
#define ACT19_OX                      8
#define ACT19_OY                      8
#define ACT19_zzdbg_1_ampShfIn        4
// --------------------------------------------------------------------------------
// Block 20: Conv2D - conv2d_13
#define CONV20_IC                     128
#define CONV20_IX                     8
#define CONV20_IY                     8
#define CONV20_KX                     1
#define CONV20_KY                     1
#define CONV20_OC                     64
#define CONV20_OX                     8
#define CONV20_OY                     8
#define CONV20_PX                     0
#define CONV20_PY                     0
#define CONV20_SB                     6
#define CONV20_SO                     8
#define CONV20_SX                     1
#define CONV20_SY                     1
#define CONV20_zzdbg_1_ampShfIn       4
#define CONV20_zzdbg_2_SH_WT          8
#define CONV20_zzdbg_3_productShf     12
#define CONV20_zzdbg_4_SB_AMP         6
#define CONV20_zzdbg_5_ampShfOut      4
// --------------------------------------------------------------------------------
// Block 20: Add - add_3
#define ADD20_IC                      64
#define ADD20_IX                      8
#define ADD20_IY                      8
#define ADD20_OC                      64
#define ADD20_OX                      8
#define ADD20_OY                      8
#define ADD20_SI0                     4
#define ADD20_SI1                     4
#define ADD20_SO                      4
#define ADD20_zzdbg_1_ampShfIn        4
#define ADD20_zzdbg_5_ampShfOut       4
// --------------------------------------------------------------------------------
// Block 21: Conv2D - conv2d_14
#define CONV21_IC                     64
#define CONV21_IX                     8
#define CONV21_IY                     8
#define CONV21_KX                     1
#define CONV21_KY                     1
#define CONV21_OC                     128
#define CONV21_OX                     8
#define CONV21_OY                     8
#define CONV21_PX                     0
#define CONV21_PY                     0
#define CONV21_SB                     4
#define CONV21_SO                     9
#define CONV21_SX                     1
#define CONV21_SY                     1
#define CONV21_zzdbg_1_ampShfIn       4
#define CONV21_zzdbg_2_SH_WT          9
#define CONV21_zzdbg_3_productShf     13
#define CONV21_zzdbg_4_SB_AMP         9
#define CONV21_zzdbg_5_ampShfOut      4
// --------------------------------------------------------------------------------
// Block 21: Activation - re_lu_15
#define ACT21_ACT                     ACT_RELU6
#define ACT21_IC                      128
#define ACT21_IX                      8
#define ACT21_IY                      8
#define ACT21_OC                      128
#define ACT21_OX                      8
#define ACT21_OY                      8
#define ACT21_zzdbg_1_ampShfIn        4
// --------------------------------------------------------------------------------
// Block 22: DepthwiseConv2D - depthwise_conv2d_8
#define DSCONV22_IC                   128
#define DSCONV22_IX                   8
#define DSCONV22_IY                   8
#define DSCONV22_KX                   3
#define DSCONV22_KY                   3
#define DSCONV22_OC                   128
#define DSCONV22_OX                   8
#define DSCONV22_OY                   8
#define DSCONV22_PX                   1
#define DSCONV22_PY                   1
#define DSCONV22_SB                   4
#define DSCONV22_SO                   6
#define DSCONV22_SX                   1
#define DSCONV22_SY                   1
#define DSCONV22_zzdbg_1_ampShfIn     4
#define DSCONV22_zzdbg_2_SH_WT        6
#define DSCONV22_zzdbg_3_productShf   10
#define DSCONV22_zzdbg_4_SB_AMP       6
#define DSCONV22_zzdbg_5_ampShfOut    4
// --------------------------------------------------------------------------------
// Block 22: Activation - re_lu_16
#define ACT22_ACT                     ACT_RELU6
#define ACT22_IC                      128
#define ACT22_IX                      8
#define ACT22_IY                      8
#define ACT22_OC                      128
#define ACT22_OX                      8
#define ACT22_OY                      8
#define ACT22_zzdbg_1_ampShfIn        4
// --------------------------------------------------------------------------------
// Block 23: Conv2D - conv2d_15
#define CONV23_IC                     128
#define CONV23_IX                     8
#define CONV23_IY                     8
#define CONV23_KX                     1
#define CONV23_KY                     1
#define CONV23_OC                     64
#define CONV23_OX                     8
#define CONV23_OY                     8
#define CONV23_PX                     0
#define CONV23_PY                     0
#define CONV23_SB                     6
#define CONV23_SO                     8
#define CONV23_SX                     1
#define CONV23_SY                     1
#define CONV23_zzdbg_1_ampShfIn       4
#define CONV23_zzdbg_2_SH_WT          8
#define CONV23_zzdbg_3_productShf     12
#define CONV23_zzdbg_4_SB_AMP         6
#define CONV23_zzdbg_5_ampShfOut      4
// --------------------------------------------------------------------------------
// Block 23: Add - add_4
#define ADD23_IC                      64
#define ADD23_IX                      8
#define ADD23_IY                      8
#define ADD23_OC                      64
#define ADD23_OX                      8
#define ADD23_OY                      8
#define ADD23_SI0                     4
#define ADD23_SI1                     4
#define ADD23_SO                      4
#define ADD23_zzdbg_1_ampShfIn        4
#define ADD23_zzdbg_5_ampShfOut       4
// --------------------------------------------------------------------------------
// Block 24: Conv2D - conv2d_16
#define CONV24_IC                     64
#define CONV24_IX                     8
#define CONV24_IY                     8
#define CONV24_KX                     1
#define CONV24_KY                     1
#define CONV24_OC                     256
#define CONV24_OX                     8
#define CONV24_OY                     8
#define CONV24_PX                     0
#define CONV24_PY                     0
#define CONV24_SB                     5
#define CONV24_SO                     9
#define CONV24_SX                     1
#define CONV24_SY                     1
#define CONV24_zzdbg_1_ampShfIn       4
#define CONV24_zzdbg_2_SH_WT          9
#define CONV24_zzdbg_3_productShf     13
#define CONV24_zzdbg_4_SB_AMP         8
#define CONV24_zzdbg_5_ampShfOut      4
// --------------------------------------------------------------------------------
// Block 24: Activation - re_lu_17
#define ACT24_ACT                     ACT_RELU6
#define ACT24_IC                      256
#define ACT24_IX                      8
#define ACT24_IY                      8
#define ACT24_OC                      256
#define ACT24_OX                      8
#define ACT24_OY                      8
#define ACT24_zzdbg_1_ampShfIn        4
// --------------------------------------------------------------------------------
// Block 25: DepthwiseConv2D - depthwise_conv2d_9
#define DSCONV25_IC                   256
#define DSCONV25_IX                   8
#define DSCONV25_IY                   8
#define DSCONV25_KX                   3
#define DSCONV25_KY                   3
#define DSCONV25_OC                   256
#define DSCONV25_OX                   8
#define DSCONV25_OY                   8
#define DSCONV25_PX                   1
#define DSCONV25_PY                   1
#define DSCONV25_SB                   4
#define DSCONV25_SO                   6
#define DSCONV25_SX                   1
#define DSCONV25_SY                   1
#define DSCONV25_zzdbg_1_ampShfIn     4
#define DSCONV25_zzdbg_2_SH_WT        6
#define DSCONV25_zzdbg_3_productShf   10
#define DSCONV25_zzdbg_4_SB_AMP       6
#define DSCONV25_zzdbg_5_ampShfOut    4
// --------------------------------------------------------------------------------
// Block 25: Activation - re_lu_18
#define ACT25_ACT                     ACT_RELU6
#define ACT25_IC                      256
#define ACT25_IX                      8
#define ACT25_IY                      8
#define ACT25_OC                      256
#define ACT25_OX                      8
#define ACT25_OY                      8
#define ACT25_zzdbg_1_ampShfIn        4
// --------------------------------------------------------------------------------
// Block 25: MaxPooling2D - max_pooling2d_3
#define MAXP25_IC                     256
#define MAXP25_IX                     8
#define MAXP25_IY                     8
#define MAXP25_KX                     2
#define MAXP25_KY                     2
#define MAXP25_OC                     256
#define MAXP25_OX                     4
#define MAXP25_OY                     4
#define MAXP25_SX                     2
#define MAXP25_SY                     2
#define MAXP25_zzdbg_1_ampShfIn       4
// --------------------------------------------------------------------------------
// Block 26: Conv2D - conv2d_17
#define CONV26_IC                     256
#define CONV26_IX                     4
#define CONV26_IY                     4
#define CONV26_KX                     1
#define CONV26_KY                     1
#define CONV26_OC                     64
#define CONV26_OX                     4
#define CONV26_OY                     4
#define CONV26_PX                     0
#define CONV26_PY                     0
#define CONV26_SB                     7
#define CONV26_SO                     9
#define CONV26_SX                     1
#define CONV26_SY                     1
#define CONV26_zzdbg_1_ampShfIn       4
#define CONV26_zzdbg_2_SH_WT          9
#define CONV26_zzdbg_3_productShf     13
#define CONV26_zzdbg_4_SB_AMP         6
#define CONV26_zzdbg_5_ampShfOut      4
// --------------------------------------------------------------------------------
// Block 27: Conv2D - conv2d_18
#define CONV27_IC                     64
#define CONV27_IX                     4
#define CONV27_IY                     4
#define CONV27_KX                     1
#define CONV27_KY                     1
#define CONV27_OC                     128
#define CONV27_OX                     4
#define CONV27_OY                     4
#define CONV27_PX                     0
#define CONV27_PY                     0
#define CONV27_SB                     5
#define CONV27_SO                     8
#define CONV27_SX                     1
#define CONV27_SY                     1
#define CONV27_zzdbg_1_ampShfIn       4
#define CONV27_zzdbg_2_SH_WT          8
#define CONV27_zzdbg_3_productShf     12
#define CONV27_zzdbg_4_SB_AMP         7
#define CONV27_zzdbg_5_ampShfOut      4
// --------------------------------------------------------------------------------
// Block 27: Activation - re_lu_19
#define ACT27_ACT                     ACT_RELU6
#define ACT27_IC                      128
#define ACT27_IX                      4
#define ACT27_IY                      4
#define ACT27_OC                      128
#define ACT27_OX                      4
#define ACT27_OY                      4
#define ACT27_zzdbg_1_ampShfIn        4
// --------------------------------------------------------------------------------
// Block 28: DepthwiseConv2D - depthwise_conv2d_10
#define DSCONV28_IC                   128
#define DSCONV28_IX                   4
#define DSCONV28_IY                   4
#define DSCONV28_KX                   3
#define DSCONV28_KY                   3
#define DSCONV28_OC                   128
#define DSCONV28_OX                   4
#define DSCONV28_OY                   4
#define DSCONV28_PX                   1
#define DSCONV28_PY                   1
#define DSCONV28_SB                   4
#define DSCONV28_SO                   6
#define DSCONV28_SX                   1
#define DSCONV28_SY                   1
#define DSCONV28_zzdbg_1_ampShfIn     4
#define DSCONV28_zzdbg_2_SH_WT        6
#define DSCONV28_zzdbg_3_productShf   10
#define DSCONV28_zzdbg_4_SB_AMP       6
#define DSCONV28_zzdbg_5_ampShfOut    4
// --------------------------------------------------------------------------------
// Block 28: Activation - re_lu_20
#define ACT28_ACT                     ACT_RELU6
#define ACT28_IC                      128
#define ACT28_IX                      4
#define ACT28_IY                      4
#define ACT28_OC                      128
#define ACT28_OX                      4
#define ACT28_OY                      4
#define ACT28_zzdbg_1_ampShfIn        4
// --------------------------------------------------------------------------------
// Block 29: Conv2D - conv2d_19
#define CONV29_IC                     128
#define CONV29_IX                     4
#define CONV29_IY                     4
#define CONV29_KX                     1
#define CONV29_KY                     1
#define CONV29_OC                     64
#define CONV29_OX                     4
#define CONV29_OY                     4
#define CONV29_PX                     0
#define CONV29_PY                     0
#define CONV29_SB                     6
#define CONV29_SO                     8
#define CONV29_SX                     1
#define CONV29_SY                     1
#define CONV29_zzdbg_1_ampShfIn       4
#define CONV29_zzdbg_2_SH_WT          8
#define CONV29_zzdbg_3_productShf     12
#define CONV29_zzdbg_4_SB_AMP         6
#define CONV29_zzdbg_5_ampShfOut      4
// --------------------------------------------------------------------------------
// Block 30: Conv2D - conv2d_20
#define CONV30_IC                     64
#define CONV30_IX                     4
#define CONV30_IY                     4
#define CONV30_KX                     1
#define CONV30_KY                     1
#define CONV30_OC                     128
#define CONV30_OX                     4
#define CONV30_OY                     4
#define CONV30_PX                     0
#define CONV30_PY                     0
#define CONV30_SB                     3
#define CONV30_SO                     8
#define CONV30_SX                     1
#define CONV30_SY                     1
#define CONV30_zzdbg_1_ampShfIn       4
#define CONV30_zzdbg_2_SH_WT          8
#define CONV30_zzdbg_3_productShf     12
#define CONV30_zzdbg_4_SB_AMP         9
#define CONV30_zzdbg_5_ampShfOut      4
// --------------------------------------------------------------------------------
// Block 30: Activation - re_lu_21
#define ACT30_ACT                     ACT_RELU6
#define ACT30_IC                      128
#define ACT30_IX                      4
#define ACT30_IY                      4
#define ACT30_OC                      128
#define ACT30_OX                      4
#define ACT30_OY                      4
#define ACT30_zzdbg_1_ampShfIn        4
// --------------------------------------------------------------------------------
// Block 31: DepthwiseConv2D - depthwise_conv2d_11
#define DSCONV31_IC                   128
#define DSCONV31_IX                   4
#define DSCONV31_IY                   4
#define DSCONV31_KX                   3
#define DSCONV31_KY                   3
#define DSCONV31_OC                   128
#define DSCONV31_OX                   4
#define DSCONV31_OY                   4
#define DSCONV31_PX                   1
#define DSCONV31_PY                   1
#define DSCONV31_SB                   4
#define DSCONV31_SO                   6
#define DSCONV31_SX                   1
#define DSCONV31_SY                   1
#define DSCONV31_zzdbg_1_ampShfIn     4
#define DSCONV31_zzdbg_2_SH_WT        6
#define DSCONV31_zzdbg_3_productShf   10
#define DSCONV31_zzdbg_4_SB_AMP       6
#define DSCONV31_zzdbg_5_ampShfOut    4
// --------------------------------------------------------------------------------
// Block 31: Activation - re_lu_22
#define ACT31_ACT                     ACT_RELU6
#define ACT31_IC                      128
#define ACT31_IX                      4
#define ACT31_IY                      4
#define ACT31_OC                      128
#define ACT31_OX                      4
#define ACT31_OY                      4
#define ACT31_zzdbg_1_ampShfIn        4
// --------------------------------------------------------------------------------
// Block 32: Conv2D - conv2d_21
#define CONV32_IC                     128
#define CONV32_IX                     4
#define CONV32_IY                     4
#define CONV32_KX                     1
#define CONV32_KY                     1
#define CONV32_OC                     64
#define CONV32_OX                     4
#define CONV32_OY                     4
#define CONV32_PX                     0
#define CONV32_PY                     0
#define CONV32_SB                     6
#define CONV32_SO                     8
#define CONV32_SX                     1
#define CONV32_SY                     1
#define CONV32_zzdbg_1_ampShfIn       4
#define CONV32_zzdbg_2_SH_WT          8
#define CONV32_zzdbg_3_productShf     12
#define CONV32_zzdbg_4_SB_AMP         6
#define CONV32_zzdbg_5_ampShfOut      4
// --------------------------------------------------------------------------------
// Block 32: Add - add_5
#define ADD32_IC                      64
#define ADD32_IX                      4
#define ADD32_IY                      4
#define ADD32_OC                      64
#define ADD32_OX                      4
#define ADD32_OY                      4
#define ADD32_SI0                     4
#define ADD32_SI1                     4
#define ADD32_SO                      4
#define ADD32_zzdbg_1_ampShfIn        4
#define ADD32_zzdbg_5_ampShfOut       4
// --------------------------------------------------------------------------------
// Block 33: Conv2D - conv2d_22
#define CONV33_IC                     64
#define CONV33_IX                     4
#define CONV33_IY                     4
#define CONV33_KX                     1
#define CONV33_KY                     1
#define CONV33_OC                     256
#define CONV33_OX                     4
#define CONV33_OY                     4
#define CONV33_PX                     0
#define CONV33_PY                     0
#define CONV33_SB                     4
#define CONV33_SO                     8
#define CONV33_SX                     1
#define CONV33_SY                     1
#define CONV33_zzdbg_1_ampShfIn       4
#define CONV33_zzdbg_2_SH_WT          8
#define CONV33_zzdbg_3_productShf     12
#define CONV33_zzdbg_4_SB_AMP         8
#define CONV33_zzdbg_5_ampShfOut      4
// --------------------------------------------------------------------------------
// Block 33: Activation - re_lu_23
#define ACT33_ACT                     ACT_RELU6
#define ACT33_IC                      256
#define ACT33_IX                      4
#define ACT33_IY                      4
#define ACT33_OC                      256
#define ACT33_OX                      4
#define ACT33_OY                      4
#define ACT33_zzdbg_1_ampShfIn        4
// --------------------------------------------------------------------------------
// Block 34: DepthwiseConv2D - depthwise_conv2d_12
#define DSCONV34_IC                   256
#define DSCONV34_IX                   4
#define DSCONV34_IY                   4
#define DSCONV34_KX                   4
#define DSCONV34_KY                   4
#define DSCONV34_OC                   256
#define DSCONV34_OX                   1
#define DSCONV34_OY                   1
#define DSCONV34_PX                   0
#define DSCONV34_PY                   0
#define DSCONV34_SB                   5
#define DSCONV34_SO                   6
#define DSCONV34_SX                   1
#define DSCONV34_SY                   1
#define DSCONV34_zzdbg_1_ampShfIn     4
#define DSCONV34_zzdbg_2_SH_WT        6
#define DSCONV34_zzdbg_3_productShf   10
#define DSCONV34_zzdbg_4_SB_AMP       5
#define DSCONV34_zzdbg_5_ampShfOut    4
// --------------------------------------------------------------------------------
// Block 35: Conv2D - conv2d_23
#define CONV35_IC                     256
#define CONV35_IX                     1
#define CONV35_IY                     1
#define CONV35_KX                     1
#define CONV35_KY                     1
#define CONV35_OC                     128
#define CONV35_OX                     1
#define CONV35_OY                     1
#define CONV35_PX                     0
#define CONV35_PY                     0
#define CONV35_SB                     7
#define CONV35_SO                     10
#define CONV35_SX                     1
#define CONV35_SY                     1
#define CONV35_zzdbg_1_ampShfIn       4
#define CONV35_zzdbg_2_SH_WT          10
#define CONV35_zzdbg_3_productShf     14
#define CONV35_zzdbg_4_SB_AMP         7
#define CONV35_zzdbg_5_ampShfOut      4
extern const int8_t cg_CONV1bias[]; // 32
extern const int8_t cg_CONV1weit[]; // 864 - Co,H,W,Ci: (32, 3, 3, 3)
extern const int8_t cg_DSCONV2bias[]; // 32
extern const int8_t cg_DSCONV2weit[]; // 288 - Co,H,W,Ci: (1, 3, 3, 32)
extern const int8_t cg_CONV3bias[]; // 64
extern const int8_t cg_CONV3weit[]; // 2048 - Co,H,W,Ci: (64, 1, 1, 32)
extern const int8_t cg_DSCONV4bias[]; // 64
extern const int8_t cg_DSCONV4weit[]; // 576 - Co,H,W,Ci: (1, 3, 3, 64)
extern const int8_t cg_CONV5bias[]; // 32
extern const int8_t cg_CONV5weit[]; // 2048 - Co,H,W,Ci: (32, 1, 1, 64)
extern const int8_t cg_CONV6bias[]; // 64
extern const int8_t cg_CONV6weit[]; // 2048 - Co,H,W,Ci: (64, 1, 1, 32)
extern const int8_t cg_DSCONV7bias[]; // 64
extern const int8_t cg_DSCONV7weit[]; // 576 - Co,H,W,Ci: (1, 3, 3, 64)
extern const int8_t cg_CONV8bias[]; // 32
extern const int8_t cg_CONV8weit[]; // 2048 - Co,H,W,Ci: (32, 1, 1, 64)
extern const int8_t cg_CONV9bias[]; // 64
extern const int8_t cg_CONV9weit[]; // 2048 - Co,H,W,Ci: (64, 1, 1, 32)
extern const int8_t cg_DSCONV10bias[]; // 64
extern const int8_t cg_DSCONV10weit[]; // 576 - Co,H,W,Ci: (1, 3, 3, 64)
extern const int8_t cg_CONV11bias[]; // 32
extern const int8_t cg_CONV11weit[]; // 2048 - Co,H,W,Ci: (32, 1, 1, 64)
extern const int8_t cg_CONV12bias[]; // 128
extern const int8_t cg_CONV12weit[]; // 4096 - Co,H,W,Ci: (128, 1, 1, 32)
extern const int8_t cg_DSCONV13bias[]; // 128
extern const int8_t cg_DSCONV13weit[]; // 1152 - Co,H,W,Ci: (1, 3, 3, 128)
extern const int8_t cg_CONV14bias[]; // 64
extern const int8_t cg_CONV14weit[]; // 8192 - Co,H,W,Ci: (64, 1, 1, 128)
extern const int8_t cg_CONV15bias[]; // 128
extern const int8_t cg_CONV15weit[]; // 8192 - Co,H,W,Ci: (128, 1, 1, 64)
extern const int8_t cg_DSCONV16bias[]; // 128
extern const int8_t cg_DSCONV16weit[]; // 1152 - Co,H,W,Ci: (1, 3, 3, 128)
extern const int8_t cg_CONV17bias[]; // 64
extern const int8_t cg_CONV17weit[]; // 8192 - Co,H,W,Ci: (64, 1, 1, 128)
extern const int8_t cg_CONV18bias[]; // 128
extern const int8_t cg_CONV18weit[]; // 8192 - Co,H,W,Ci: (128, 1, 1, 64)
extern const int8_t cg_DSCONV19bias[]; // 128
extern const int8_t cg_DSCONV19weit[]; // 1152 - Co,H,W,Ci: (1, 3, 3, 128)
extern const int8_t cg_CONV20bias[]; // 64
extern const int8_t cg_CONV20weit[]; // 8192 - Co,H,W,Ci: (64, 1, 1, 128)
extern const int8_t cg_CONV21bias[]; // 128
extern const int8_t cg_CONV21weit[]; // 8192 - Co,H,W,Ci: (128, 1, 1, 64)
extern const int8_t cg_DSCONV22bias[]; // 128
extern const int8_t cg_DSCONV22weit[]; // 1152 - Co,H,W,Ci: (1, 3, 3, 128)
extern const int8_t cg_CONV23bias[]; // 64
extern const int8_t cg_CONV23weit[]; // 8192 - Co,H,W,Ci: (64, 1, 1, 128)
extern const int8_t cg_CONV24bias[]; // 256
extern const int8_t cg_CONV24weit[]; // 16384 - Co,H,W,Ci: (256, 1, 1, 64)
extern const int8_t cg_DSCONV25bias[]; // 256
extern const int8_t cg_DSCONV25weit[]; // 2304 - Co,H,W,Ci: (1, 3, 3, 256)
extern const int8_t cg_CONV26bias[]; // 64
extern const int8_t cg_CONV26weit[]; // 16384 - Co,H,W,Ci: (64, 1, 1, 256)
extern const int8_t cg_CONV27bias[]; // 128
extern const int8_t cg_CONV27weit[]; // 8192 - Co,H,W,Ci: (128, 1, 1, 64)
extern const int8_t cg_DSCONV28bias[]; // 128
extern const int8_t cg_DSCONV28weit[]; // 1152 - Co,H,W,Ci: (1, 3, 3, 128)
extern const int8_t cg_CONV29bias[]; // 64
extern const int8_t cg_CONV29weit[]; // 8192 - Co,H,W,Ci: (64, 1, 1, 128)
extern const int8_t cg_CONV30bias[]; // 128
extern const int8_t cg_CONV30weit[]; // 8192 - Co,H,W,Ci: (128, 1, 1, 64)
extern const int8_t cg_DSCONV31bias[]; // 128
extern const int8_t cg_DSCONV31weit[]; // 1152 - Co,H,W,Ci: (1, 3, 3, 128)
extern const int8_t cg_CONV32bias[]; // 64
extern const int8_t cg_CONV32weit[]; // 8192 - Co,H,W,Ci: (64, 1, 1, 128)
extern const int8_t cg_CONV33bias[]; // 256
extern const int8_t cg_CONV33weit[]; // 16384 - Co,H,W,Ci: (256, 1, 1, 64)
extern const int8_t cg_DSCONV34bias[]; // 256
extern const int8_t cg_DSCONV34weit[]; // 4096 - Co,H,W,Ci: (1, 4, 4, 256)
extern const int8_t cg_CONV35bias[]; // 128
extern const int8_t cg_CONV35weit[]; // 32768 - Co,H,W,Ci: (128, 1, 1, 256)

#include <stdint.h>
#include "arm_math.h"
#include "arm_nnfunctions.h"
#include "aia_cmsisnn_ext.h"
// #include <model.h>

int32_t img_buffer0[(65536 + 3) / 4];
int32_t img_buffer1[(65536 + 3) / 4];
int32_t img_buffer2[(16384 + 3) / 4];
int32_t col_buf[(16384 + 3) / 4]; // [2, 4, 4, 256, 2]
int8_t out_buf[128]; // CONV35_OC

// generated RunModel(), returns the output buffer of the last layer
void* RunModel(const void *in_buf)
{ 
	const uint8_t *p0 = (const uint8_t*) in_buf;
	int i;
	for (i=0;i<64*64*3; i++)
		img_buffer1[i] = p0[i] - 128;
	// Block 1: Conv2D - conv2d_1
    arm_convolve_HWC_q7_RGB((q7_t*)img_buffer1/*inBuf*/, CONV1_IX/*64*/, CONV1_IC/*3*/, cg_CONV1weit/*weit*/, CONV1_OC/*32*/
        , CONV1_KX/*3*/, CONV1_PX/*1*/, CONV1_SX/*2*/, cg_CONV1bias/*bias*/, CONV1_SB/*7*/, CONV1_SO/*9*/, (q7_t*)img_buffer0/*outBuf*/
        , CONV1_OX/*32*/, (int16_t *) col_buf, NULL);

	// Block 1: Activation - re_lu_1
    aia_relu6_q7((q7_t*)img_buffer0/*inBuf*/, (uint32_t)(ACT1_IX * ACT1_IY * ACT1_IC)/*32x32x32*/, ACT1_zzdbg_1_ampShfIn);

	// Block 2: DepthwiseConv2D - depthwise_conv2d_1
    arm_depthwise_separable_conv_HWC_q7((q7_t*)img_buffer0/*inBuf*/, DSCONV2_IX/*32*/, DSCONV2_IC/*32*/, cg_DSCONV2weit/*weit*/
        , DSCONV2_OC/*32*/, DSCONV2_KX/*3*/, DSCONV2_PX/*1*/, DSCONV2_SX/*1*/, cg_DSCONV2bias/*bias*/, DSCONV2_SB/*3*/
        , DSCONV2_SO/*4*/, (q7_t*)img_buffer1/*outBuf*/, DSCONV2_OX/*32*/, (int16_t *) col_buf, NULL);

	// Block 2: Activation - re_lu_2
    aia_relu6_q7((q7_t*)img_buffer1/*inBuf*/, (uint32_t)(ACT2_IX * ACT2_IY * ACT2_IC)/*32x32x32*/, ACT2_zzdbg_1_ampShfIn);

	// Block 3: Conv2D - conv2d_2
    arm_convolve_1x1_HWC_q7_fast_nonsquare((q7_t*)img_buffer1/*inBuf*/, CONV3_IX/*32*/, CONV3_IY/*32*/, CONV3_IC/*32*/
        , cg_CONV3weit/*weit*/, CONV3_OC/*64*/, CONV3_KX/*1*/, CONV3_KY/*1*/, CONV3_PX/*0*/, CONV3_PY/*0*/, CONV3_SX/*1*/
        , CONV3_SY/*1*/, cg_CONV3bias/*bias*/, CONV3_SB/*6*/, CONV3_SO/*7*/, (q7_t*)img_buffer0/*outBuf*/, CONV3_OX/*32*/
        , CONV3_OY/*32*/, (int16_t *) col_buf, NULL);

	// Block 3: Activation - re_lu_3
    aia_relu6_q7((q7_t*)img_buffer0/*inBuf*/, (uint32_t)(ACT3_IX * ACT3_IY * ACT3_IC)/*32x32x64*/, ACT3_zzdbg_1_ampShfIn);

	// Block 4: DepthwiseConv2D - depthwise_conv2d_2
    arm_depthwise_separable_conv_HWC_q7((q7_t*)img_buffer0/*inBuf*/, DSCONV4_IX/*32*/, DSCONV4_IC/*64*/, cg_DSCONV4weit/*weit*/
        , DSCONV4_OC/*64*/, DSCONV4_KX/*3*/, DSCONV4_PX/*1*/, DSCONV4_SX/*1*/, cg_DSCONV4bias/*bias*/, DSCONV4_SB/*3*/
        , DSCONV4_SO/*5*/, (q7_t*)img_buffer1/*outBuf*/, DSCONV4_OX/*32*/, (int16_t *) col_buf, NULL);

	// Block 4: Activation - re_lu_4
    aia_relu6_q7((q7_t*)img_buffer1/*inBuf*/, (uint32_t)(ACT4_IX * ACT4_IY * ACT4_IC)/*32x32x64*/, ACT4_zzdbg_1_ampShfIn);

	// Block 4: MaxPooling2D - max_pooling2d_1
    arm_maxpool_q7_HWC((q7_t*)img_buffer1/*inBuf*/, MAXP4_IX/*32*/, MAXP4_IC/*64*/, MAXP4_KX/*2*/, 0, MAXP4_SX/*2*/
        , MAXP4_OX/*16*/, NULL, (q7_t*)img_buffer0/*outBuf*/);

	// Block 5: Conv2D - conv2d_3
    arm_convolve_1x1_HWC_q7_fast_nonsquare((q7_t*)img_buffer0/*inBuf*/, CONV5_IX/*16*/, CONV5_IY/*16*/, CONV5_IC/*64*/
        , cg_CONV5weit/*weit*/, CONV5_OC/*32*/, CONV5_KX/*1*/, CONV5_KY/*1*/, CONV5_PX/*0*/, CONV5_PY/*0*/, CONV5_SX/*1*/
        , CONV5_SY/*1*/, cg_CONV5bias/*bias*/, CONV5_SB/*6*/, CONV5_SO/*7*/, (q7_t*)img_buffer1/*outBuf*/, CONV5_OX/*16*/
        , CONV5_OY/*16*/, (int16_t *) col_buf, NULL);

	// Block 6: Conv2D - conv2d_4
    arm_convolve_1x1_HWC_q7_fast_nonsquare((q7_t*)img_buffer1/*inBuf*/, CONV6_IX/*16*/, CONV6_IY/*16*/, CONV6_IC/*32*/
        , cg_CONV6weit/*weit*/, CONV6_OC/*64*/, CONV6_KX/*1*/, CONV6_KY/*1*/, CONV6_PX/*0*/, CONV6_PY/*0*/, CONV6_SX/*1*/
        , CONV6_SY/*1*/, cg_CONV6bias/*bias*/, CONV6_SB/*5*/, CONV6_SO/*8*/, (q7_t*)img_buffer0/*outBuf*/, CONV6_OX/*16*/
        , CONV6_OY/*16*/, (int16_t *) col_buf, NULL);

	// Block 6: Activation - re_lu_5
    aia_relu6_q7((q7_t*)img_buffer0/*inBuf*/, (uint32_t)(ACT6_IX * ACT6_IY * ACT6_IC)/*16x16x64*/, ACT6_zzdbg_1_ampShfIn);

	// Block 7: DepthwiseConv2D - depthwise_conv2d_3
    arm_depthwise_separable_conv_HWC_q7((q7_t*)img_buffer0/*inBuf*/, DSCONV7_IX/*16*/, DSCONV7_IC/*64*/, cg_DSCONV7weit/*weit*/
        , DSCONV7_OC/*64*/, DSCONV7_KX/*3*/, DSCONV7_PX/*1*/, DSCONV7_SX/*1*/, cg_DSCONV7bias/*bias*/, DSCONV7_SB/*4*/
        , DSCONV7_SO/*6*/, (q7_t*)img_buffer2/*outBuf*/, DSCONV7_OX/*16*/, (int16_t *) col_buf, NULL);

	// Block 7: Activation - re_lu_6
    aia_relu6_q7((q7_t*)img_buffer2/*inBuf*/, (uint32_t)(ACT7_IX * ACT7_IY * ACT7_IC)/*16x16x64*/, ACT7_zzdbg_1_ampShfIn);

	// Block 8: Conv2D - conv2d_5
    arm_convolve_1x1_HWC_q7_fast_nonsquare((q7_t*)img_buffer2/*inBuf*/, CONV8_IX/*16*/, CONV8_IY/*16*/, CONV8_IC/*64*/
        , cg_CONV8weit/*weit*/, CONV8_OC/*32*/, CONV8_KX/*1*/, CONV8_KY/*1*/, CONV8_PX/*0*/, CONV8_PY/*0*/, CONV8_SX/*1*/
        , CONV8_SY/*1*/, cg_CONV8bias/*bias*/, CONV8_SB/*5*/, CONV8_SO/*7*/, (q7_t*)img_buffer0/*outBuf*/, CONV8_OX/*16*/
        , CONV8_OY/*16*/, (int16_t *) col_buf, NULL);

	// Block 8: Add - add_1
    aia_HWC_q7_add2((q7_t*)img_buffer2/*outBuf*/, ADD8_IX * ADD8_IY * ADD8_IC/*16x16x32*/, ADD8_SO/*4*/, (q7_t*)img_buffer0/*inBuf*/
        , ADD8_SI0/*4*/, (q7_t*)img_buffer1/*inBuf1*/, ADD8_SI1/*4*/);

	// Block 9: Conv2D - conv2d_6
    arm_convolve_1x1_HWC_q7_fast_nonsquare((q7_t*)img_buffer2/*inBuf*/, CONV9_IX/*16*/, CONV9_IY/*16*/, CONV9_IC/*32*/
        , cg_CONV9weit/*weit*/, CONV9_OC/*64*/, CONV9_KX/*1*/, CONV9_KY/*1*/, CONV9_PX/*0*/, CONV9_PY/*0*/, CONV9_SX/*1*/
        , CONV9_SY/*1*/, cg_CONV9bias/*bias*/, CONV9_SB/*4*/, CONV9_SO/*8*/, (q7_t*)img_buffer0/*outBuf*/, CONV9_OX/*16*/
        , CONV9_OY/*16*/, (int16_t *) col_buf, NULL);

	// Block 9: Activation - re_lu_7
    aia_relu6_q7((q7_t*)img_buffer0/*inBuf*/, (uint32_t)(ACT9_IX * ACT9_IY * ACT9_IC)/*16x16x64*/, ACT9_zzdbg_1_ampShfIn);

	// Block 10: DepthwiseConv2D - depthwise_conv2d_4
    arm_depthwise_separable_conv_HWC_q7((q7_t*)img_buffer0/*inBuf*/, DSCONV10_IX/*16*/, DSCONV10_IC/*64*/, cg_DSCONV10weit/*weit*/
        , DSCONV10_OC/*64*/, DSCONV10_KX/*3*/, DSCONV10_PX/*1*/, DSCONV10_SX/*1*/, cg_DSCONV10bias/*bias*/, DSCONV10_SB/*4*/
        , DSCONV10_SO/*6*/, (q7_t*)img_buffer1/*outBuf*/, DSCONV10_OX/*16*/, (int16_t *) col_buf, NULL);

	// Block 10: Activation - re_lu_8
    aia_relu6_q7((q7_t*)img_buffer1/*inBuf*/, (uint32_t)(ACT10_IX * ACT10_IY * ACT10_IC)/*16x16x64*/, ACT10_zzdbg_1_ampShfIn);

	// Block 11: Conv2D - conv2d_7
    arm_convolve_1x1_HWC_q7_fast_nonsquare((q7_t*)img_buffer1/*inBuf*/, CONV11_IX/*16*/, CONV11_IY/*16*/, CONV11_IC/*64*/
        , cg_CONV11weit/*weit*/, CONV11_OC/*32*/, CONV11_KX/*1*/, CONV11_KY/*1*/, CONV11_PX/*0*/, CONV11_PY/*0*/
        , CONV11_SX/*1*/, CONV11_SY/*1*/, cg_CONV11bias/*bias*/, CONV11_SB/*5*/, CONV11_SO/*7*/, (q7_t*)img_buffer0/*outBuf*/
        , CONV11_OX/*16*/, CONV11_OY/*16*/, (int16_t *) col_buf, NULL);

	// Block 11: Add - add_2
    aia_HWC_q7_add2((q7_t*)img_buffer1/*outBuf*/, ADD11_IX * ADD11_IY * ADD11_IC/*16x16x32*/, ADD11_SO/*4*/, (q7_t*)img_buffer0/*inBuf*/
        , ADD11_SI0/*4*/, (q7_t*)img_buffer2/*inBuf1*/, ADD11_SI1/*4*/);

	// Block 12: Conv2D - conv2d_8
    arm_convolve_1x1_HWC_q7_fast_nonsquare((q7_t*)img_buffer1/*inBuf*/, CONV12_IX/*16*/, CONV12_IY/*16*/, CONV12_IC/*32*/
        , cg_CONV12weit/*weit*/, CONV12_OC/*128*/, CONV12_KX/*1*/, CONV12_KY/*1*/, CONV12_PX/*0*/, CONV12_PY/*0*/
        , CONV12_SX/*1*/, CONV12_SY/*1*/, cg_CONV12bias/*bias*/, CONV12_SB/*5*/, CONV12_SO/*8*/, (q7_t*)img_buffer0/*outBuf*/
        , CONV12_OX/*16*/, CONV12_OY/*16*/, (int16_t *) col_buf, NULL);

	// Block 12: Activation - re_lu_9
    aia_relu6_q7((q7_t*)img_buffer0/*inBuf*/, (uint32_t)(ACT12_IX * ACT12_IY * ACT12_IC)/*16x16x128*/, ACT12_zzdbg_1_ampShfIn);

	// Block 13: DepthwiseConv2D - depthwise_conv2d_5
    arm_depthwise_separable_conv_HWC_q7((q7_t*)img_buffer0/*inBuf*/, DSCONV13_IX/*16*/, DSCONV13_IC/*128*/, cg_DSCONV13weit/*weit*/
        , DSCONV13_OC/*128*/, DSCONV13_KX/*3*/, DSCONV13_PX/*1*/, DSCONV13_SX/*1*/, cg_DSCONV13bias/*bias*/, DSCONV13_SB/*4*/
        , DSCONV13_SO/*6*/, (q7_t*)img_buffer1/*outBuf*/, DSCONV13_OX/*16*/, (int16_t *) col_buf, NULL);

	// Block 13: Activation - re_lu_10
    aia_relu6_q7((q7_t*)img_buffer1/*inBuf*/, (uint32_t)(ACT13_IX * ACT13_IY * ACT13_IC)/*16x16x128*/, ACT13_zzdbg_1_ampShfIn);

	// Block 13: MaxPooling2D - max_pooling2d_2
    arm_maxpool_q7_HWC((q7_t*)img_buffer1/*inBuf*/, MAXP13_IX/*16*/, MAXP13_IC/*128*/, MAXP13_KX/*2*/, 0, MAXP13_SX/*2*/
        , MAXP13_OX/*8*/, NULL, (q7_t*)img_buffer2/*outBuf*/);

	// Block 14: Conv2D - conv2d_9
    arm_convolve_1x1_HWC_q7_fast_nonsquare((q7_t*)img_buffer2/*inBuf*/, CONV14_IX/*8*/, CONV14_IY/*8*/, CONV14_IC/*128*/
        , cg_CONV14weit/*weit*/, CONV14_OC/*64*/, CONV14_KX/*1*/, CONV14_KY/*1*/, CONV14_PX/*0*/, CONV14_PY/*0*/
        , CONV14_SX/*1*/, CONV14_SY/*1*/, cg_CONV14bias/*bias*/, CONV14_SB/*7*/, CONV14_SO/*8*/, (q7_t*)img_buffer0/*outBuf*/
        , CONV14_OX/*8*/, CONV14_OY/*8*/, (int16_t *) col_buf, NULL);

	// Block 15: Conv2D - conv2d_10
    arm_convolve_1x1_HWC_q7_fast_nonsquare((q7_t*)img_buffer0/*inBuf*/, CONV15_IX/*8*/, CONV15_IY/*8*/, CONV15_IC/*64*/
        , cg_CONV15weit/*weit*/, CONV15_OC/*128*/, CONV15_KX/*1*/, CONV15_KY/*1*/, CONV15_PX/*0*/, CONV15_PY/*0*/
        , CONV15_SX/*1*/, CONV15_SY/*1*/, cg_CONV15bias/*bias*/, CONV15_SB/*5*/, CONV15_SO/*8*/, (q7_t*)img_buffer2/*outBuf*/
        , CONV15_OX/*8*/, CONV15_OY/*8*/, (int16_t *) col_buf, NULL);

	// Block 15: Activation - re_lu_11
    aia_relu6_q7((q7_t*)img_buffer2/*inBuf*/, (uint32_t)(ACT15_IX * ACT15_IY * ACT15_IC)/*8x8x128*/, ACT15_zzdbg_1_ampShfIn);

	// Block 16: DepthwiseConv2D - depthwise_conv2d_6
    arm_depthwise_separable_conv_HWC_q7((q7_t*)img_buffer2/*inBuf*/, DSCONV16_IX/*8*/, DSCONV16_IC/*128*/, cg_DSCONV16weit/*weit*/
        , DSCONV16_OC/*128*/, DSCONV16_KX/*3*/, DSCONV16_PX/*1*/, DSCONV16_SX/*1*/, cg_DSCONV16bias/*bias*/, DSCONV16_SB/*4*/
        , DSCONV16_SO/*6*/, (q7_t*)img_buffer0/*outBuf*/, DSCONV16_OX/*8*/, (int16_t *) col_buf, NULL);

	// Block 16: Activation - re_lu_12
    aia_relu6_q7((q7_t*)img_buffer0/*inBuf*/, (uint32_t)(ACT16_IX * ACT16_IY * ACT16_IC)/*8x8x128*/, ACT16_zzdbg_1_ampShfIn);

	// Block 17: Conv2D - conv2d_11
    arm_convolve_1x1_HWC_q7_fast_nonsquare((q7_t*)img_buffer0/*inBuf*/, CONV17_IX/*8*/, CONV17_IY/*8*/, CONV17_IC/*128*/
        , cg_CONV17weit/*weit*/, CONV17_OC/*64*/, CONV17_KX/*1*/, CONV17_KY/*1*/, CONV17_PX/*0*/, CONV17_PY/*0*/
        , CONV17_SX/*1*/, CONV17_SY/*1*/, cg_CONV17bias/*bias*/, CONV17_SB/*6*/, CONV17_SO/*8*/, (q7_t*)img_buffer2/*outBuf*/
        , CONV17_OX/*8*/, CONV17_OY/*8*/, (int16_t *) col_buf, NULL);

	// Block 18: Conv2D - conv2d_12
    arm_convolve_1x1_HWC_q7_fast_nonsquare((q7_t*)img_buffer2/*inBuf*/, CONV18_IX/*8*/, CONV18_IY/*8*/, CONV18_IC/*64*/
        , cg_CONV18weit/*weit*/, CONV18_OC/*128*/, CONV18_KX/*1*/, CONV18_KY/*1*/, CONV18_PX/*0*/, CONV18_PY/*0*/
        , CONV18_SX/*1*/, CONV18_SY/*1*/, cg_CONV18bias/*bias*/, CONV18_SB/*4*/, CONV18_SO/*8*/, (q7_t*)img_buffer0/*outBuf*/
        , CONV18_OX/*8*/, CONV18_OY/*8*/, (int16_t *) col_buf, NULL);

	// Block 18: Activation - re_lu_13
    aia_relu6_q7((q7_t*)img_buffer0/*inBuf*/, (uint32_t)(ACT18_IX * ACT18_IY * ACT18_IC)/*8x8x128*/, ACT18_zzdbg_1_ampShfIn);

	// Block 19: DepthwiseConv2D - depthwise_conv2d_7
    arm_depthwise_separable_conv_HWC_q7((q7_t*)img_buffer0/*inBuf*/, DSCONV19_IX/*8*/, DSCONV19_IC/*128*/, cg_DSCONV19weit/*weit*/
        , DSCONV19_OC/*128*/, DSCONV19_KX/*3*/, DSCONV19_PX/*1*/, DSCONV19_SX/*1*/, cg_DSCONV19bias/*bias*/, DSCONV19_SB/*4*/
        , DSCONV19_SO/*6*/, (q7_t*)img_buffer1/*outBuf*/, DSCONV19_OX/*8*/, (int16_t *) col_buf, NULL);

	// Block 19: Activation - re_lu_14
    aia_relu6_q7((q7_t*)img_buffer1/*inBuf*/, (uint32_t)(ACT19_IX * ACT19_IY * ACT19_IC)/*8x8x128*/, ACT19_zzdbg_1_ampShfIn);

	// Block 20: Conv2D - conv2d_13
    arm_convolve_1x1_HWC_q7_fast_nonsquare((q7_t*)img_buffer1/*inBuf*/, CONV20_IX/*8*/, CONV20_IY/*8*/, CONV20_IC/*128*/
        , cg_CONV20weit/*weit*/, CONV20_OC/*64*/, CONV20_KX/*1*/, CONV20_KY/*1*/, CONV20_PX/*0*/, CONV20_PY/*0*/
        , CONV20_SX/*1*/, CONV20_SY/*1*/, cg_CONV20bias/*bias*/, CONV20_SB/*6*/, CONV20_SO/*8*/, (q7_t*)img_buffer0/*outBuf*/
        , CONV20_OX/*8*/, CONV20_OY/*8*/, (int16_t *) col_buf, NULL);

	// Block 20: Add - add_3
    aia_HWC_q7_add2((q7_t*)img_buffer1/*outBuf*/, ADD20_IX * ADD20_IY * ADD20_IC/*8x8x64*/, ADD20_SO/*4*/, (q7_t*)img_buffer0/*inBuf*/
        , ADD20_SI0/*4*/, (q7_t*)img_buffer2/*inBuf1*/, ADD20_SI1/*4*/);

	// Block 21: Conv2D - conv2d_14
    arm_convolve_1x1_HWC_q7_fast_nonsquare((q7_t*)img_buffer1/*inBuf*/, CONV21_IX/*8*/, CONV21_IY/*8*/, CONV21_IC/*64*/
        , cg_CONV21weit/*weit*/, CONV21_OC/*128*/, CONV21_KX/*1*/, CONV21_KY/*1*/, CONV21_PX/*0*/, CONV21_PY/*0*/
        , CONV21_SX/*1*/, CONV21_SY/*1*/, cg_CONV21bias/*bias*/, CONV21_SB/*4*/, CONV21_SO/*9*/, (q7_t*)img_buffer2/*outBuf*/
        , CONV21_OX/*8*/, CONV21_OY/*8*/, (int16_t *) col_buf, NULL);

	// Block 21: Activation - re_lu_15
    aia_relu6_q7((q7_t*)img_buffer2/*inBuf*/, (uint32_t)(ACT21_IX * ACT21_IY * ACT21_IC)/*8x8x128*/, ACT21_zzdbg_1_ampShfIn);

	// Block 22: DepthwiseConv2D - depthwise_conv2d_8
    arm_depthwise_separable_conv_HWC_q7((q7_t*)img_buffer2/*inBuf*/, DSCONV22_IX/*8*/, DSCONV22_IC/*128*/, cg_DSCONV22weit/*weit*/
        , DSCONV22_OC/*128*/, DSCONV22_KX/*3*/, DSCONV22_PX/*1*/, DSCONV22_SX/*1*/, cg_DSCONV22bias/*bias*/, DSCONV22_SB/*4*/
        , DSCONV22_SO/*6*/, (q7_t*)img_buffer0/*outBuf*/, DSCONV22_OX/*8*/, (int16_t *) col_buf, NULL);

	// Block 22: Activation - re_lu_16
    aia_relu6_q7((q7_t*)img_buffer0/*inBuf*/, (uint32_t)(ACT22_IX * ACT22_IY * ACT22_IC)/*8x8x128*/, ACT22_zzdbg_1_ampShfIn);

	// Block 23: Conv2D - conv2d_15
    arm_convolve_1x1_HWC_q7_fast_nonsquare((q7_t*)img_buffer0/*inBuf*/, CONV23_IX/*8*/, CONV23_IY/*8*/, CONV23_IC/*128*/
        , cg_CONV23weit/*weit*/, CONV23_OC/*64*/, CONV23_KX/*1*/, CONV23_KY/*1*/, CONV23_PX/*0*/, CONV23_PY/*0*/
        , CONV23_SX/*1*/, CONV23_SY/*1*/, cg_CONV23bias/*bias*/, CONV23_SB/*6*/, CONV23_SO/*8*/, (q7_t*)img_buffer2/*outBuf*/
        , CONV23_OX/*8*/, CONV23_OY/*8*/, (int16_t *) col_buf, NULL);

	// Block 23: Add - add_4
    aia_HWC_q7_add2((q7_t*)img_buffer0/*outBuf*/, ADD23_IX * ADD23_IY * ADD23_IC/*8x8x64*/, ADD23_SO/*4*/, (q7_t*)img_buffer2/*inBuf*/
        , ADD23_SI0/*4*/, (q7_t*)img_buffer1/*inBuf1*/, ADD23_SI1/*4*/);

	// Block 24: Conv2D - conv2d_16
    arm_convolve_1x1_HWC_q7_fast_nonsquare((q7_t*)img_buffer0/*inBuf*/, CONV24_IX/*8*/, CONV24_IY/*8*/, CONV24_IC/*64*/
        , cg_CONV24weit/*weit*/, CONV24_OC/*256*/, CONV24_KX/*1*/, CONV24_KY/*1*/, CONV24_PX/*0*/, CONV24_PY/*0*/
        , CONV24_SX/*1*/, CONV24_SY/*1*/, cg_CONV24bias/*bias*/, CONV24_SB/*5*/, CONV24_SO/*9*/, (q7_t*)img_buffer2/*outBuf*/
        , CONV24_OX/*8*/, CONV24_OY/*8*/, (int16_t *) col_buf, NULL);

	// Block 24: Activation - re_lu_17
    aia_relu6_q7((q7_t*)img_buffer2/*inBuf*/, (uint32_t)(ACT24_IX * ACT24_IY * ACT24_IC)/*8x8x256*/, ACT24_zzdbg_1_ampShfIn);

	// Block 25: DepthwiseConv2D - depthwise_conv2d_9
    arm_depthwise_separable_conv_HWC_q7((q7_t*)img_buffer2/*inBuf*/, DSCONV25_IX/*8*/, DSCONV25_IC/*256*/, cg_DSCONV25weit/*weit*/
        , DSCONV25_OC/*256*/, DSCONV25_KX/*3*/, DSCONV25_PX/*1*/, DSCONV25_SX/*1*/, cg_DSCONV25bias/*bias*/, DSCONV25_SB/*4*/
        , DSCONV25_SO/*6*/, (q7_t*)img_buffer0/*outBuf*/, DSCONV25_OX/*8*/, (int16_t *) col_buf, NULL);

	// Block 25: Activation - re_lu_18
    aia_relu6_q7((q7_t*)img_buffer0/*inBuf*/, (uint32_t)(ACT25_IX * ACT25_IY * ACT25_IC)/*8x8x256*/, ACT25_zzdbg_1_ampShfIn);

	// Block 25: MaxPooling2D - max_pooling2d_3
    arm_maxpool_q7_HWC((q7_t*)img_buffer0/*inBuf*/, MAXP25_IX/*8*/, MAXP25_IC/*256*/, MAXP25_KX/*2*/, 0, MAXP25_SX/*2*/
        , MAXP25_OX/*4*/, NULL, (q7_t*)img_buffer2/*outBuf*/);

	// Block 26: Conv2D - conv2d_17
    arm_convolve_1x1_HWC_q7_fast_nonsquare((q7_t*)img_buffer2/*inBuf*/, CONV26_IX/*4*/, CONV26_IY/*4*/, CONV26_IC/*256*/
        , cg_CONV26weit/*weit*/, CONV26_OC/*64*/, CONV26_KX/*1*/, CONV26_KY/*1*/, CONV26_PX/*0*/, CONV26_PY/*0*/
        , CONV26_SX/*1*/, CONV26_SY/*1*/, cg_CONV26bias/*bias*/, CONV26_SB/*7*/, CONV26_SO/*9*/, (q7_t*)img_buffer0/*outBuf*/
        , CONV26_OX/*4*/, CONV26_OY/*4*/, (int16_t *) col_buf, NULL);

	// Block 27: Conv2D - conv2d_18
    arm_convolve_1x1_HWC_q7_fast_nonsquare((q7_t*)img_buffer0/*inBuf*/, CONV27_IX/*4*/, CONV27_IY/*4*/, CONV27_IC/*64*/
        , cg_CONV27weit/*weit*/, CONV27_OC/*128*/, CONV27_KX/*1*/, CONV27_KY/*1*/, CONV27_PX/*0*/, CONV27_PY/*0*/
        , CONV27_SX/*1*/, CONV27_SY/*1*/, cg_CONV27bias/*bias*/, CONV27_SB/*5*/, CONV27_SO/*8*/, (q7_t*)img_buffer2/*outBuf*/
        , CONV27_OX/*4*/, CONV27_OY/*4*/, (int16_t *) col_buf, NULL);

	// Block 27: Activation - re_lu_19
    aia_relu6_q7((q7_t*)img_buffer2/*inBuf*/, (uint32_t)(ACT27_IX * ACT27_IY * ACT27_IC)/*4x4x128*/, ACT27_zzdbg_1_ampShfIn);

	// Block 28: DepthwiseConv2D - depthwise_conv2d_10
    arm_depthwise_separable_conv_HWC_q7((q7_t*)img_buffer2/*inBuf*/, DSCONV28_IX/*4*/, DSCONV28_IC/*128*/, cg_DSCONV28weit/*weit*/
        , DSCONV28_OC/*128*/, DSCONV28_KX/*3*/, DSCONV28_PX/*1*/, DSCONV28_SX/*1*/, cg_DSCONV28bias/*bias*/, DSCONV28_SB/*4*/
        , DSCONV28_SO/*6*/, (q7_t*)img_buffer0/*outBuf*/, DSCONV28_OX/*4*/, (int16_t *) col_buf, NULL);

	// Block 28: Activation - re_lu_20
    aia_relu6_q7((q7_t*)img_buffer0/*inBuf*/, (uint32_t)(ACT28_IX * ACT28_IY * ACT28_IC)/*4x4x128*/, ACT28_zzdbg_1_ampShfIn);

	// Block 29: Conv2D - conv2d_19
    arm_convolve_1x1_HWC_q7_fast_nonsquare((q7_t*)img_buffer0/*inBuf*/, CONV29_IX/*4*/, CONV29_IY/*4*/, CONV29_IC/*128*/
        , cg_CONV29weit/*weit*/, CONV29_OC/*64*/, CONV29_KX/*1*/, CONV29_KY/*1*/, CONV29_PX/*0*/, CONV29_PY/*0*/
        , CONV29_SX/*1*/, CONV29_SY/*1*/, cg_CONV29bias/*bias*/, CONV29_SB/*6*/, CONV29_SO/*8*/, (q7_t*)img_buffer2/*outBuf*/
        , CONV29_OX/*4*/, CONV29_OY/*4*/, (int16_t *) col_buf, NULL);

	// Block 30: Conv2D - conv2d_20
    arm_convolve_1x1_HWC_q7_fast_nonsquare((q7_t*)img_buffer2/*inBuf*/, CONV30_IX/*4*/, CONV30_IY/*4*/, CONV30_IC/*64*/
        , cg_CONV30weit/*weit*/, CONV30_OC/*128*/, CONV30_KX/*1*/, CONV30_KY/*1*/, CONV30_PX/*0*/, CONV30_PY/*0*/
        , CONV30_SX/*1*/, CONV30_SY/*1*/, cg_CONV30bias/*bias*/, CONV30_SB/*3*/, CONV30_SO/*8*/, (q7_t*)img_buffer0/*outBuf*/
        , CONV30_OX/*4*/, CONV30_OY/*4*/, (int16_t *) col_buf, NULL);

	// Block 30: Activation - re_lu_21
    aia_relu6_q7((q7_t*)img_buffer0/*inBuf*/, (uint32_t)(ACT30_IX * ACT30_IY * ACT30_IC)/*4x4x128*/, ACT30_zzdbg_1_ampShfIn);

	// Block 31: DepthwiseConv2D - depthwise_conv2d_11
    arm_depthwise_separable_conv_HWC_q7((q7_t*)img_buffer0/*inBuf*/, DSCONV31_IX/*4*/, DSCONV31_IC/*128*/, cg_DSCONV31weit/*weit*/
        , DSCONV31_OC/*128*/, DSCONV31_KX/*3*/, DSCONV31_PX/*1*/, DSCONV31_SX/*1*/, cg_DSCONV31bias/*bias*/, DSCONV31_SB/*4*/
        , DSCONV31_SO/*6*/, (q7_t*)img_buffer1/*outBuf*/, DSCONV31_OX/*4*/, (int16_t *) col_buf, NULL);

	// Block 31: Activation - re_lu_22
    aia_relu6_q7((q7_t*)img_buffer1/*inBuf*/, (uint32_t)(ACT31_IX * ACT31_IY * ACT31_IC)/*4x4x128*/, ACT31_zzdbg_1_ampShfIn);

	// Block 32: Conv2D - conv2d_21
    arm_convolve_1x1_HWC_q7_fast_nonsquare((q7_t*)img_buffer1/*inBuf*/, CONV32_IX/*4*/, CONV32_IY/*4*/, CONV32_IC/*128*/
        , cg_CONV32weit/*weit*/, CONV32_OC/*64*/, CONV32_KX/*1*/, CONV32_KY/*1*/, CONV32_PX/*0*/, CONV32_PY/*0*/
        , CONV32_SX/*1*/, CONV32_SY/*1*/, cg_CONV32bias/*bias*/, CONV32_SB/*6*/, CONV32_SO/*8*/, (q7_t*)img_buffer0/*outBuf*/
        , CONV32_OX/*4*/, CONV32_OY/*4*/, (int16_t *) col_buf, NULL);

	// Block 32: Add - add_5
    aia_HWC_q7_add2((q7_t*)img_buffer1/*outBuf*/, ADD32_IX * ADD32_IY * ADD32_IC/*4x4x64*/, ADD32_SO/*4*/, (q7_t*)img_buffer0/*inBuf*/
        , ADD32_SI0/*4*/, (q7_t*)img_buffer2/*inBuf1*/, ADD32_SI1/*4*/);

	// Block 33: Conv2D - conv2d_22
    arm_convolve_1x1_HWC_q7_fast_nonsquare((q7_t*)img_buffer1/*inBuf*/, CONV33_IX/*4*/, CONV33_IY/*4*/, CONV33_IC/*64*/
        , cg_CONV33weit/*weit*/, CONV33_OC/*256*/, CONV33_KX/*1*/, CONV33_KY/*1*/, CONV33_PX/*0*/, CONV33_PY/*0*/
        , CONV33_SX/*1*/, CONV33_SY/*1*/, cg_CONV33bias/*bias*/, CONV33_SB/*4*/, CONV33_SO/*8*/, (q7_t*)img_buffer2/*outBuf*/
        , CONV33_OX/*4*/, CONV33_OY/*4*/, (int16_t *) col_buf, NULL);

	// Block 33: Activation - re_lu_23
    aia_relu6_q7((q7_t*)img_buffer2/*inBuf*/, (uint32_t)(ACT33_IX * ACT33_IY * ACT33_IC)/*4x4x256*/, ACT33_zzdbg_1_ampShfIn);

	// Block 34: DepthwiseConv2D - depthwise_conv2d_12
    arm_depthwise_separable_conv_HWC_q7((q7_t*)img_buffer2/*inBuf*/, DSCONV34_IX/*4*/, DSCONV34_IC/*256*/, cg_DSCONV34weit/*weit*/
        , DSCONV34_OC/*256*/, DSCONV34_KX/*4*/, DSCONV34_PX/*0*/, DSCONV34_SX/*1*/, cg_DSCONV34bias/*bias*/, DSCONV34_SB/*5*/
        , DSCONV34_SO/*6*/, (q7_t*)img_buffer0/*outBuf*/, DSCONV34_OX/*1*/, (int16_t *) col_buf, NULL);

	// Block 35: Conv2D - conv2d_23
    arm_convolve_1x1_HWC_q7_fast_nonsquare((q7_t*)img_buffer0/*inBuf*/, CONV35_IX/*1*/, CONV35_IY/*1*/, CONV35_IC/*256*/
        , cg_CONV35weit/*weit*/, CONV35_OC/*128*/, CONV35_KX/*1*/, CONV35_KY/*1*/, CONV35_PX/*0*/, CONV35_PY/*0*/
        , CONV35_SX/*1*/, CONV35_SY/*1*/, cg_CONV35bias/*bias*/, CONV35_SB/*7*/, CONV35_SO/*10*/, (q7_t*)img_buffer2/*outBuf*/
        , CONV35_OX/*1*/, CONV35_OY/*1*/, (int16_t *) col_buf, NULL);

	return (q7_t*)img_buffer2;
}

