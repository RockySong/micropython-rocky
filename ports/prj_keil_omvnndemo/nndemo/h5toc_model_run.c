
#include <stdint.h>
#include <stdlib.h>
#define ACT_RELU           1
#define ACT_SOFTMAX        2
#define ACT_RELU6          6
#define ACT_RELU8          18
#define ACT_RELU4          19
#define QUANTIZE_WORD_LEN  8
// --------------------------------------------------------------------------------
// Block 0: InputLayer - input
#define INPUT0_AI                     7
#define INPUT0_IC                     3
#define INPUT0_ICALL                  3
#define INPUT0_ICOFS                  0
#define INPUT0_IX                     64
#define INPUT0_IY                     64
#define INPUT0_OC                     3
#define INPUT0_OCALL                  3
#define INPUT0_OCOFS                  0
#define INPUT0_OX                     64
#define INPUT0_OY                     64
#define INPUT0_zzdbg_5_fracBitsOut    7
// --------------------------------------------------------------------------------
// Block 1: Conv2D - conv2d_1
#define CONV1_AA                      4
#define CONV1_AI                      7
#define CONV1_IC                      3
#define CONV1_ICALL                   3
#define CONV1_ICOFS                   0
#define CONV1_IX                      64
#define CONV1_IY                      64
#define CONV1_KX                      3
#define CONV1_KY                      3
#define CONV1_OC                      64
#define CONV1_OCALL                   64
#define CONV1_OCOFS                   0
#define CONV1_OX                      32
#define CONV1_OY                      32
#define CONV1_PX                      0
#define CONV1_PY                      0
#define CONV1_SB                      7
#define CONV1_SO                      9
#define CONV1_SX                      2
#define CONV1_SY                      2
#define CONV1_zzdbg_2_SH_WT           6
#define CONV1_zzdbg_3_productShf      13
#define CONV1_zzdbg_4_SB_AMP          6
#define CONV1_zzdbg_5_fracBitsOut     4
#define CONV1_zzdbg_8_AuxAct          "LINEAR"
// --------------------------------------------------------------------------------
// Block 1: Activation - re_lu_1
#define ACT1_ACT                      ACT_RELU6
#define ACT1_AI                       4
#define ACT1_IC                       64
#define ACT1_ICALL                    64
#define ACT1_ICOFS                    0
#define ACT1_IX                       32
#define ACT1_IY                       32
#define ACT1_OC                       64
#define ACT1_OCALL                    64
#define ACT1_OCOFS                    0
#define ACT1_OX                       32
#define ACT1_OY                       32
#define ACT1_zzdbg_5_fracBitsOut      4
// --------------------------------------------------------------------------------
// Block 2: DepthwiseConv2D - depthwise_conv2d_1
#define DSCONV2_AA                    4
#define DSCONV2_AI                    4
#define DSCONV2_IC                    64
#define DSCONV2_ICALL                 64
#define DSCONV2_ICOFS                 0
#define DSCONV2_IX                    32
#define DSCONV2_IY                    32
#define DSCONV2_KX                    3
#define DSCONV2_KY                    3
#define DSCONV2_OC                    64
#define DSCONV2_OCALL                 64
#define DSCONV2_OCOFS                 0
#define DSCONV2_OX                    32
#define DSCONV2_OY                    32
#define DSCONV2_PX                    1
#define DSCONV2_PY                    1
#define DSCONV2_SB                    4
#define DSCONV2_SO                    4
#define DSCONV2_SX                    1
#define DSCONV2_SY                    1
#define DSCONV2_zzdbg_2_SH_WT         4
#define DSCONV2_zzdbg_3_productShf    8
#define DSCONV2_zzdbg_4_SB_AMP        4
#define DSCONV2_zzdbg_5_fracBitsOut   4
#define DSCONV2_zzdbg_8_AuxAct        "LINEAR"
// --------------------------------------------------------------------------------
// Block 2: Activation - re_lu_2
#define ACT2_ACT                      ACT_RELU6
#define ACT2_AI                       4
#define ACT2_IC                       64
#define ACT2_ICALL                    64
#define ACT2_ICOFS                    0
#define ACT2_IX                       32
#define ACT2_IY                       32
#define ACT2_OC                       64
#define ACT2_OCALL                    64
#define ACT2_OCOFS                    0
#define ACT2_OX                       32
#define ACT2_OY                       32
#define ACT2_zzdbg_5_fracBitsOut      4
// --------------------------------------------------------------------------------
// Block 3: Conv2D - conv2d_2
#define CONV3_AA                      4
#define CONV3_AI                      4
#define CONV3_IC                      64
#define CONV3_ICALL                   64
#define CONV3_ICOFS                   0
#define CONV3_IX                      32
#define CONV3_IY                      32
#define CONV3_KX                      1
#define CONV3_KY                      1
#define CONV3_OC                      128
#define CONV3_OCALL                   128
#define CONV3_OCOFS                   0
#define CONV3_OX                      32
#define CONV3_OY                      32
#define CONV3_PX                      0
#define CONV3_PY                      0
#define CONV3_SB                      5
#define CONV3_SO                      6
#define CONV3_SX                      1
#define CONV3_SY                      1
#define CONV3_zzdbg_2_SH_WT           6
#define CONV3_zzdbg_3_productShf      10
#define CONV3_zzdbg_4_SB_AMP          5
#define CONV3_zzdbg_5_fracBitsOut     4
#define CONV3_zzdbg_8_AuxAct          "LINEAR"
// --------------------------------------------------------------------------------
// Block 3: Activation - re_lu_3
#define ACT3_ACT                      ACT_RELU6
#define ACT3_AI                       4
#define ACT3_IC                       128
#define ACT3_ICALL                    128
#define ACT3_ICOFS                    0
#define ACT3_IX                       32
#define ACT3_IY                       32
#define ACT3_OC                       128
#define ACT3_OCALL                    128
#define ACT3_OCOFS                    0
#define ACT3_OX                       32
#define ACT3_OY                       32
#define ACT3_zzdbg_5_fracBitsOut      4
// --------------------------------------------------------------------------------
// Block 4: DepthwiseConv2D - depthwise_conv2d_2
#define DSCONV4_AA                    4
#define DSCONV4_AI                    4
#define DSCONV4_IC                    128
#define DSCONV4_ICALL                 128
#define DSCONV4_ICOFS                 0
#define DSCONV4_IX                    32
#define DSCONV4_IY                    32
#define DSCONV4_KX                    3
#define DSCONV4_KY                    3
#define DSCONV4_OC                    128
#define DSCONV4_OCALL                 128
#define DSCONV4_OCOFS                 0
#define DSCONV4_OX                    32
#define DSCONV4_OY                    32
#define DSCONV4_PX                    1
#define DSCONV4_PY                    1
#define DSCONV4_SB                    4
#define DSCONV4_SO                    5
#define DSCONV4_SX                    1
#define DSCONV4_SY                    1
#define DSCONV4_zzdbg_2_SH_WT         5
#define DSCONV4_zzdbg_3_productShf    9
#define DSCONV4_zzdbg_4_SB_AMP        5
#define DSCONV4_zzdbg_5_fracBitsOut   4
#define DSCONV4_zzdbg_8_AuxAct        "LINEAR"
// --------------------------------------------------------------------------------
// Block 4: Activation - re_lu_4
#define ACT4_ACT                      ACT_RELU6
#define ACT4_AI                       4
#define ACT4_IC                       128
#define ACT4_ICALL                    128
#define ACT4_ICOFS                    0
#define ACT4_IX                       32
#define ACT4_IY                       32
#define ACT4_OC                       128
#define ACT4_OCALL                    128
#define ACT4_OCOFS                    0
#define ACT4_OX                       32
#define ACT4_OY                       32
#define ACT4_zzdbg_5_fracBitsOut      4
// --------------------------------------------------------------------------------
// Block 4: MaxPooling2D - max_pooling2d_1
#define MAXP4_AI                      4
#define MAXP4_IC                      128
#define MAXP4_ICALL                   128
#define MAXP4_ICOFS                   0
#define MAXP4_IX                      32
#define MAXP4_IY                      32
#define MAXP4_KX                      2
#define MAXP4_KY                      2
#define MAXP4_OC                      128
#define MAXP4_OCALL                   128
#define MAXP4_OCOFS                   0
#define MAXP4_OX                      16
#define MAXP4_OY                      16
#define MAXP4_SX                      2
#define MAXP4_SY                      2
#define MAXP4_zzdbg_5_fracBitsOut     4
// --------------------------------------------------------------------------------
// Block 5: Conv2D - conv2d_3
#define CONV5_AA                      5
#define CONV5_AI                      4
#define CONV5_IC                      128
#define CONV5_ICALL                   128
#define CONV5_ICOFS                   0
#define CONV5_IX                      16
#define CONV5_IY                      16
#define CONV5_KX                      1
#define CONV5_KY                      1
#define CONV5_OC                      64
#define CONV5_OCALL                   64
#define CONV5_OCOFS                   0
#define CONV5_OX                      16
#define CONV5_OY                      16
#define CONV5_PX                      0
#define CONV5_PY                      0
#define CONV5_SB                      7
#define CONV5_SO                      9
#define CONV5_SX                      1
#define CONV5_SY                      1
#define CONV5_zzdbg_2_SH_WT           8
#define CONV5_zzdbg_3_productShf      12
#define CONV5_zzdbg_4_SB_AMP          5
#define CONV5_zzdbg_5_fracBitsOut     3
#define CONV5_zzdbg_8_AuxAct          "LINEAR"
// --------------------------------------------------------------------------------
// Block 6: Conv2D - conv2d_4
#define CONV6_AA                      4
#define CONV6_AI                      3
#define CONV6_IC                      64
#define CONV6_ICALL                   64
#define CONV6_ICOFS                   0
#define CONV6_IX                      16
#define CONV6_IY                      16
#define CONV6_KX                      1
#define CONV6_KY                      1
#define CONV6_OC                      128
#define CONV6_OCALL                   128
#define CONV6_OCOFS                   0
#define CONV6_OX                      16
#define CONV6_OY                      16
#define CONV6_PX                      0
#define CONV6_PY                      0
#define CONV6_SB                      4
#define CONV6_SO                      7
#define CONV6_SX                      1
#define CONV6_SY                      1
#define CONV6_zzdbg_2_SH_WT           8
#define CONV6_zzdbg_3_productShf      11
#define CONV6_zzdbg_4_SB_AMP          7
#define CONV6_zzdbg_5_fracBitsOut     4
#define CONV6_zzdbg_8_AuxAct          "LINEAR"
// --------------------------------------------------------------------------------
// Block 6: Activation - re_lu_5
#define ACT6_ACT                      ACT_RELU6
#define ACT6_AI                       4
#define ACT6_IC                       128
#define ACT6_ICALL                    128
#define ACT6_ICOFS                    0
#define ACT6_IX                       16
#define ACT6_IY                       16
#define ACT6_OC                       128
#define ACT6_OCALL                    128
#define ACT6_OCOFS                    0
#define ACT6_OX                       16
#define ACT6_OY                       16
#define ACT6_zzdbg_5_fracBitsOut      4
// --------------------------------------------------------------------------------
// Block 7: DepthwiseConv2D - depthwise_conv2d_3
#define DSCONV7_AA                    4
#define DSCONV7_AI                    4
#define DSCONV7_IC                    128
#define DSCONV7_ICALL                 128
#define DSCONV7_ICOFS                 0
#define DSCONV7_IX                    16
#define DSCONV7_IY                    16
#define DSCONV7_KX                    3
#define DSCONV7_KY                    3
#define DSCONV7_OC                    128
#define DSCONV7_OCALL                 128
#define DSCONV7_OCOFS                 0
#define DSCONV7_OX                    16
#define DSCONV7_OY                    16
#define DSCONV7_PX                    1
#define DSCONV7_PY                    1
#define DSCONV7_SB                    2
#define DSCONV7_SO                    4
#define DSCONV7_SX                    1
#define DSCONV7_SY                    1
#define DSCONV7_zzdbg_2_SH_WT         4
#define DSCONV7_zzdbg_3_productShf    8
#define DSCONV7_zzdbg_4_SB_AMP        6
#define DSCONV7_zzdbg_5_fracBitsOut   4
#define DSCONV7_zzdbg_8_AuxAct        "LINEAR"
// --------------------------------------------------------------------------------
// Block 7: Activation - re_lu_6
#define ACT7_ACT                      ACT_RELU6
#define ACT7_AI                       4
#define ACT7_IC                       128
#define ACT7_ICALL                    128
#define ACT7_ICOFS                    0
#define ACT7_IX                       16
#define ACT7_IY                       16
#define ACT7_OC                       128
#define ACT7_OCALL                    128
#define ACT7_OCOFS                    0
#define ACT7_OX                       16
#define ACT7_OY                       16
#define ACT7_zzdbg_5_fracBitsOut      4
// --------------------------------------------------------------------------------
// Block 8: Conv2D - conv2d_5
#define CONV8_AA                      4
#define CONV8_AI                      4
#define CONV8_IC                      128
#define CONV8_ICALL                   128
#define CONV8_ICOFS                   0
#define CONV8_IX                      16
#define CONV8_IY                      16
#define CONV8_KX                      1
#define CONV8_KY                      1
#define CONV8_OC                      64
#define CONV8_OCALL                   64
#define CONV8_OCOFS                   0
#define CONV8_OX                      16
#define CONV8_OY                      16
#define CONV8_PX                      0
#define CONV8_PY                      0
#define CONV8_SB                      6
#define CONV8_SO                      8
#define CONV8_SX                      1
#define CONV8_SY                      1
#define CONV8_zzdbg_2_SH_WT           8
#define CONV8_zzdbg_3_productShf      12
#define CONV8_zzdbg_4_SB_AMP          6
#define CONV8_zzdbg_5_fracBitsOut     4
#define CONV8_zzdbg_8_AuxAct          "LINEAR"
// --------------------------------------------------------------------------------
// Block 8: Add - add_1
#define ADD8_AI                       4
#define ADD8_IC                       64
#define ADD8_ICALL                    64
#define ADD8_ICOFS                    0
#define ADD8_IX                       16
#define ADD8_IY                       16
#define ADD8_OC                       64
#define ADD8_OCALL                    64
#define ADD8_OCOFS                    0
#define ADD8_OX                       16
#define ADD8_OY                       16
#define ADD8_SI0                      4
#define ADD8_SI1                      3
#define ADD8_SO                       3
#define ADD8_zzdbg_5_fracBitsOut      3
// --------------------------------------------------------------------------------
// Block 9: Conv2D - conv2d_6
#define CONV9_AA                      4
#define CONV9_AI                      3
#define CONV9_IC                      64
#define CONV9_ICALL                   64
#define CONV9_ICOFS                   0
#define CONV9_IX                      16
#define CONV9_IY                      16
#define CONV9_KX                      1
#define CONV9_KY                      1
#define CONV9_OC                      128
#define CONV9_OCALL                   128
#define CONV9_OCOFS                   0
#define CONV9_OX                      16
#define CONV9_OY                      16
#define CONV9_PX                      0
#define CONV9_PY                      0
#define CONV9_SB                      5
#define CONV9_SO                      8
#define CONV9_SX                      1
#define CONV9_SY                      1
#define CONV9_zzdbg_2_SH_WT           9
#define CONV9_zzdbg_3_productShf      12
#define CONV9_zzdbg_4_SB_AMP          7
#define CONV9_zzdbg_5_fracBitsOut     4
#define CONV9_zzdbg_8_AuxAct          "LINEAR"
// --------------------------------------------------------------------------------
// Block 9: Activation - re_lu_7
#define ACT9_ACT                      ACT_RELU6
#define ACT9_AI                       4
#define ACT9_IC                       128
#define ACT9_ICALL                    128
#define ACT9_ICOFS                    0
#define ACT9_IX                       16
#define ACT9_IY                       16
#define ACT9_OC                       128
#define ACT9_OCALL                    128
#define ACT9_OCOFS                    0
#define ACT9_OX                       16
#define ACT9_OY                       16
#define ACT9_zzdbg_5_fracBitsOut      4
// --------------------------------------------------------------------------------
// Block 10: DepthwiseConv2D - depthwise_conv2d_4
#define DSCONV10_AA                   4
#define DSCONV10_AI                   4
#define DSCONV10_IC                   128
#define DSCONV10_ICALL                128
#define DSCONV10_ICOFS                0
#define DSCONV10_IX                   16
#define DSCONV10_IY                   16
#define DSCONV10_KX                   3
#define DSCONV10_KY                   3
#define DSCONV10_OC                   128
#define DSCONV10_OCALL                128
#define DSCONV10_OCOFS                0
#define DSCONV10_OX                   16
#define DSCONV10_OY                   16
#define DSCONV10_PX                   1
#define DSCONV10_PY                   1
#define DSCONV10_SB                   3
#define DSCONV10_SO                   5
#define DSCONV10_SX                   1
#define DSCONV10_SY                   1
#define DSCONV10_zzdbg_2_SH_WT        5
#define DSCONV10_zzdbg_3_productShf   9
#define DSCONV10_zzdbg_4_SB_AMP       6
#define DSCONV10_zzdbg_5_fracBitsOut  4
#define DSCONV10_zzdbg_8_AuxAct       "LINEAR"
// --------------------------------------------------------------------------------
// Block 10: Activation - re_lu_8
#define ACT10_ACT                     ACT_RELU6
#define ACT10_AI                      4
#define ACT10_IC                      128
#define ACT10_ICALL                   128
#define ACT10_ICOFS                   0
#define ACT10_IX                      16
#define ACT10_IY                      16
#define ACT10_OC                      128
#define ACT10_OCALL                   128
#define ACT10_OCOFS                   0
#define ACT10_OX                      16
#define ACT10_OY                      16
#define ACT10_zzdbg_5_fracBitsOut     4
// --------------------------------------------------------------------------------
// Block 11: Conv2D - conv2d_7
#define CONV11_AA                     4
#define CONV11_AI                     4
#define CONV11_IC                     128
#define CONV11_ICALL                  128
#define CONV11_ICOFS                  0
#define CONV11_IX                     16
#define CONV11_IY                     16
#define CONV11_KX                     1
#define CONV11_KY                     1
#define CONV11_OC                     64
#define CONV11_OCALL                  64
#define CONV11_OCOFS                  0
#define CONV11_OX                     16
#define CONV11_OY                     16
#define CONV11_PX                     0
#define CONV11_PY                     0
#define CONV11_SB                     5
#define CONV11_SO                     7
#define CONV11_SX                     1
#define CONV11_SY                     1
#define CONV11_zzdbg_2_SH_WT          7
#define CONV11_zzdbg_3_productShf     11
#define CONV11_zzdbg_4_SB_AMP         6
#define CONV11_zzdbg_5_fracBitsOut    4
#define CONV11_zzdbg_8_AuxAct         "LINEAR"
// --------------------------------------------------------------------------------
// Block 11: Add - add_2
#define ADD11_AI                      4
#define ADD11_IC                      64
#define ADD11_ICALL                   64
#define ADD11_ICOFS                   0
#define ADD11_IX                      16
#define ADD11_IY                      16
#define ADD11_OC                      64
#define ADD11_OCALL                   64
#define ADD11_OCOFS                   0
#define ADD11_OX                      16
#define ADD11_OY                      16
#define ADD11_SI0                     4
#define ADD11_SI1                     3
#define ADD11_SO                      3
#define ADD11_zzdbg_5_fracBitsOut     3
// --------------------------------------------------------------------------------
// Block 12: Conv2D - conv2d_8
#define CONV12_AA                     4
#define CONV12_AI                     3
#define CONV12_IC                     64
#define CONV12_ICALL                  64
#define CONV12_ICOFS                  0
#define CONV12_IX                     16
#define CONV12_IY                     16
#define CONV12_KX                     1
#define CONV12_KY                     1
#define CONV12_OC                     128
#define CONV12_OCALL                  128
#define CONV12_OCOFS                  0
#define CONV12_OX                     16
#define CONV12_OY                     16
#define CONV12_PX                     0
#define CONV12_PY                     0
#define CONV12_SB                     5
#define CONV12_SO                     8
#define CONV12_SX                     1
#define CONV12_SY                     1
#define CONV12_zzdbg_2_SH_WT          9
#define CONV12_zzdbg_3_productShf     12
#define CONV12_zzdbg_4_SB_AMP         7
#define CONV12_zzdbg_5_fracBitsOut    4
#define CONV12_zzdbg_8_AuxAct         "LINEAR"
// --------------------------------------------------------------------------------
// Block 12: Activation - re_lu_9
#define ACT12_ACT                     ACT_RELU6
#define ACT12_AI                      4
#define ACT12_IC                      128
#define ACT12_ICALL                   128
#define ACT12_ICOFS                   0
#define ACT12_IX                      16
#define ACT12_IY                      16
#define ACT12_OC                      128
#define ACT12_OCALL                   128
#define ACT12_OCOFS                   0
#define ACT12_OX                      16
#define ACT12_OY                      16
#define ACT12_zzdbg_5_fracBitsOut     4
// --------------------------------------------------------------------------------
// Block 13: DepthwiseConv2D - depthwise_conv2d_5
#define DSCONV13_AA                   4
#define DSCONV13_AI                   4
#define DSCONV13_IC                   128
#define DSCONV13_ICALL                128
#define DSCONV13_ICOFS                0
#define DSCONV13_IX                   16
#define DSCONV13_IY                   16
#define DSCONV13_KX                   3
#define DSCONV13_KY                   3
#define DSCONV13_OC                   128
#define DSCONV13_OCALL                128
#define DSCONV13_OCOFS                0
#define DSCONV13_OX                   16
#define DSCONV13_OY                   16
#define DSCONV13_PX                   1
#define DSCONV13_PY                   1
#define DSCONV13_SB                   5
#define DSCONV13_SO                   6
#define DSCONV13_SX                   1
#define DSCONV13_SY                   1
#define DSCONV13_zzdbg_2_SH_WT        6
#define DSCONV13_zzdbg_3_productShf   10
#define DSCONV13_zzdbg_4_SB_AMP       5
#define DSCONV13_zzdbg_5_fracBitsOut  4
#define DSCONV13_zzdbg_8_AuxAct       "LINEAR"
// --------------------------------------------------------------------------------
// Block 13: Activation - re_lu_10
#define ACT13_ACT                     ACT_RELU6
#define ACT13_AI                      4
#define ACT13_IC                      128
#define ACT13_ICALL                   128
#define ACT13_ICOFS                   0
#define ACT13_IX                      16
#define ACT13_IY                      16
#define ACT13_OC                      128
#define ACT13_OCALL                   128
#define ACT13_OCOFS                   0
#define ACT13_OX                      16
#define ACT13_OY                      16
#define ACT13_zzdbg_5_fracBitsOut     4
// --------------------------------------------------------------------------------
// Block 14: Conv2D - conv2d_9
#define CONV14_AA                     4
#define CONV14_AI                     4
#define CONV14_IC                     128
#define CONV14_ICALL                  128
#define CONV14_ICOFS                  0
#define CONV14_IX                     16
#define CONV14_IY                     16
#define CONV14_KX                     1
#define CONV14_KY                     1
#define CONV14_OC                     64
#define CONV14_OCALL                  64
#define CONV14_OCOFS                  0
#define CONV14_OX                     16
#define CONV14_OY                     16
#define CONV14_PX                     0
#define CONV14_PY                     0
#define CONV14_SB                     5
#define CONV14_SO                     7
#define CONV14_SX                     1
#define CONV14_SY                     1
#define CONV14_zzdbg_2_SH_WT          7
#define CONV14_zzdbg_3_productShf     11
#define CONV14_zzdbg_4_SB_AMP         6
#define CONV14_zzdbg_5_fracBitsOut    4
#define CONV14_zzdbg_8_AuxAct         "LINEAR"
// --------------------------------------------------------------------------------
// Block 14: Add - add_3
#define ADD14_AI                      4
#define ADD14_IC                      64
#define ADD14_ICALL                   64
#define ADD14_ICOFS                   0
#define ADD14_IX                      16
#define ADD14_IY                      16
#define ADD14_OC                      64
#define ADD14_OCALL                   64
#define ADD14_OCOFS                   0
#define ADD14_OX                      16
#define ADD14_OY                      16
#define ADD14_SI0                     4
#define ADD14_SI1                     3
#define ADD14_SO                      3
#define ADD14_zzdbg_5_fracBitsOut     3
// --------------------------------------------------------------------------------
// Block 15: Conv2D - conv2d_10
#define CONV15_AA                     4
#define CONV15_AI                     3
#define CONV15_IC                     64
#define CONV15_ICALL                  64
#define CONV15_ICOFS                  0
#define CONV15_IX                     16
#define CONV15_IY                     16
#define CONV15_KX                     1
#define CONV15_KY                     1
#define CONV15_OC                     128
#define CONV15_OCALL                  128
#define CONV15_OCOFS                  0
#define CONV15_OX                     16
#define CONV15_OY                     16
#define CONV15_PX                     0
#define CONV15_PY                     0
#define CONV15_SB                     4
#define CONV15_SO                     8
#define CONV15_SX                     1
#define CONV15_SY                     1
#define CONV15_zzdbg_2_SH_WT          9
#define CONV15_zzdbg_3_productShf     12
#define CONV15_zzdbg_4_SB_AMP         8
#define CONV15_zzdbg_5_fracBitsOut    4
#define CONV15_zzdbg_8_AuxAct         "LINEAR"
// --------------------------------------------------------------------------------
// Block 15: Activation - re_lu_11
#define ACT15_ACT                     ACT_RELU6
#define ACT15_AI                      4
#define ACT15_IC                      128
#define ACT15_ICALL                   128
#define ACT15_ICOFS                   0
#define ACT15_IX                      16
#define ACT15_IY                      16
#define ACT15_OC                      128
#define ACT15_OCALL                   128
#define ACT15_OCOFS                   0
#define ACT15_OX                      16
#define ACT15_OY                      16
#define ACT15_zzdbg_5_fracBitsOut     4
// --------------------------------------------------------------------------------
// Block 16: DepthwiseConv2D - depthwise_conv2d_6
#define DSCONV16_AA                   4
#define DSCONV16_AI                   4
#define DSCONV16_IC                   128
#define DSCONV16_ICALL                128
#define DSCONV16_ICOFS                0
#define DSCONV16_IX                   16
#define DSCONV16_IY                   16
#define DSCONV16_KX                   3
#define DSCONV16_KY                   3
#define DSCONV16_OC                   128
#define DSCONV16_OCALL                128
#define DSCONV16_OCOFS                0
#define DSCONV16_OX                   16
#define DSCONV16_OY                   16
#define DSCONV16_PX                   1
#define DSCONV16_PY                   1
#define DSCONV16_SB                   5
#define DSCONV16_SO                   6
#define DSCONV16_SX                   1
#define DSCONV16_SY                   1
#define DSCONV16_zzdbg_2_SH_WT        6
#define DSCONV16_zzdbg_3_productShf   10
#define DSCONV16_zzdbg_4_SB_AMP       5
#define DSCONV16_zzdbg_5_fracBitsOut  4
#define DSCONV16_zzdbg_8_AuxAct       "LINEAR"
// --------------------------------------------------------------------------------
// Block 16: Activation - re_lu_12
#define ACT16_ACT                     ACT_RELU6
#define ACT16_AI                      4
#define ACT16_IC                      128
#define ACT16_ICALL                   128
#define ACT16_ICOFS                   0
#define ACT16_IX                      16
#define ACT16_IY                      16
#define ACT16_OC                      128
#define ACT16_OCALL                   128
#define ACT16_OCOFS                   0
#define ACT16_OX                      16
#define ACT16_OY                      16
#define ACT16_zzdbg_5_fracBitsOut     4
// --------------------------------------------------------------------------------
// Block 17: Conv2D - conv2d_11
#define CONV17_AA                     5
#define CONV17_AI                     4
#define CONV17_IC                     128
#define CONV17_ICALL                  128
#define CONV17_ICOFS                  0
#define CONV17_IX                     16
#define CONV17_IY                     16
#define CONV17_KX                     1
#define CONV17_KY                     1
#define CONV17_OC                     64
#define CONV17_OCALL                  64
#define CONV17_OCOFS                  0
#define CONV17_OX                     16
#define CONV17_OY                     16
#define CONV17_PX                     0
#define CONV17_PY                     0
#define CONV17_SB                     6
#define CONV17_SO                     8
#define CONV17_SX                     1
#define CONV17_SY                     1
#define CONV17_zzdbg_2_SH_WT          7
#define CONV17_zzdbg_3_productShf     11
#define CONV17_zzdbg_4_SB_AMP         5
#define CONV17_zzdbg_5_fracBitsOut    3
#define CONV17_zzdbg_8_AuxAct         "LINEAR"
// --------------------------------------------------------------------------------
// Block 17: Add - add_4
#define ADD17_AI                      3
#define ADD17_IC                      64
#define ADD17_ICALL                   64
#define ADD17_ICOFS                   0
#define ADD17_IX                      16
#define ADD17_IY                      16
#define ADD17_OC                      64
#define ADD17_OCALL                   64
#define ADD17_OCOFS                   0
#define ADD17_OX                      16
#define ADD17_OY                      16
#define ADD17_SI0                     3
#define ADD17_SI1                     3
#define ADD17_SO                      2
#define ADD17_zzdbg_5_fracBitsOut     2
// --------------------------------------------------------------------------------
// Block 18: Conv2D - conv2d_12
#define CONV18_AA                     4
#define CONV18_AI                     2
#define CONV18_IC                     64
#define CONV18_ICALL                  64
#define CONV18_ICOFS                  0
#define CONV18_IX                     16
#define CONV18_IY                     16
#define CONV18_KX                     1
#define CONV18_KY                     1
#define CONV18_OC                     256
#define CONV18_OCALL                  256
#define CONV18_OCOFS                  0
#define CONV18_OX                     16
#define CONV18_OY                     16
#define CONV18_PX                     0
#define CONV18_PY                     0
#define CONV18_SB                     4
#define CONV18_SO                     7
#define CONV18_SX                     1
#define CONV18_SY                     1
#define CONV18_zzdbg_2_SH_WT          9
#define CONV18_zzdbg_3_productShf     11
#define CONV18_zzdbg_4_SB_AMP         7
#define CONV18_zzdbg_5_fracBitsOut    4
#define CONV18_zzdbg_8_AuxAct         "LINEAR"
// --------------------------------------------------------------------------------
// Block 18: Activation - re_lu_13
#define ACT18_ACT                     ACT_RELU6
#define ACT18_AI                      4
#define ACT18_IC                      256
#define ACT18_ICALL                   256
#define ACT18_ICOFS                   0
#define ACT18_IX                      16
#define ACT18_IY                      16
#define ACT18_OC                      256
#define ACT18_OCALL                   256
#define ACT18_OCOFS                   0
#define ACT18_OX                      16
#define ACT18_OY                      16
#define ACT18_zzdbg_5_fracBitsOut     4
// --------------------------------------------------------------------------------
// Block 19: DepthwiseConv2D - depthwise_conv2d_7
#define DSCONV19_AA                   4
#define DSCONV19_AI                   4
#define DSCONV19_IC                   256
#define DSCONV19_ICALL                256
#define DSCONV19_ICOFS                0
#define DSCONV19_IX                   16
#define DSCONV19_IY                   16
#define DSCONV19_KX                   3
#define DSCONV19_KY                   3
#define DSCONV19_OC                   256
#define DSCONV19_OCALL                256
#define DSCONV19_OCOFS                0
#define DSCONV19_OX                   16
#define DSCONV19_OY                   16
#define DSCONV19_PX                   1
#define DSCONV19_PY                   1
#define DSCONV19_SB                   4
#define DSCONV19_SO                   6
#define DSCONV19_SX                   1
#define DSCONV19_SY                   1
#define DSCONV19_zzdbg_2_SH_WT        6
#define DSCONV19_zzdbg_3_productShf   10
#define DSCONV19_zzdbg_4_SB_AMP       6
#define DSCONV19_zzdbg_5_fracBitsOut  4
#define DSCONV19_zzdbg_8_AuxAct       "LINEAR"
// --------------------------------------------------------------------------------
// Block 19: Activation - re_lu_14
#define ACT19_ACT                     ACT_RELU6
#define ACT19_AI                      4
#define ACT19_IC                      256
#define ACT19_ICALL                   256
#define ACT19_ICOFS                   0
#define ACT19_IX                      16
#define ACT19_IY                      16
#define ACT19_OC                      256
#define ACT19_OCALL                   256
#define ACT19_OCOFS                   0
#define ACT19_OX                      16
#define ACT19_OY                      16
#define ACT19_zzdbg_5_fracBitsOut     4
// --------------------------------------------------------------------------------
// Block 19: MaxPooling2D - max_pooling2d_2
#define MAXP19_AI                     4
#define MAXP19_IC                     256
#define MAXP19_ICALL                  256
#define MAXP19_ICOFS                  0
#define MAXP19_IX                     16
#define MAXP19_IY                     16
#define MAXP19_KX                     2
#define MAXP19_KY                     2
#define MAXP19_OC                     256
#define MAXP19_OCALL                  256
#define MAXP19_OCOFS                  0
#define MAXP19_OX                     8
#define MAXP19_OY                     8
#define MAXP19_SX                     2
#define MAXP19_SY                     2
#define MAXP19_zzdbg_5_fracBitsOut    4
// --------------------------------------------------------------------------------
// Block 20: Conv2D - conv2d_13
#define CONV20_AA                     4
#define CONV20_AI                     4
#define CONV20_IC                     256
#define CONV20_ICALL                  256
#define CONV20_ICOFS                  0
#define CONV20_IX                     8
#define CONV20_IY                     8
#define CONV20_KX                     1
#define CONV20_KY                     1
#define CONV20_OC                     128
#define CONV20_OCALL                  128
#define CONV20_OCOFS                  0
#define CONV20_OX                     8
#define CONV20_OY                     8
#define CONV20_PX                     0
#define CONV20_PY                     0
#define CONV20_SB                     7
#define CONV20_SO                     8
#define CONV20_SX                     1
#define CONV20_SY                     1
#define CONV20_zzdbg_2_SH_WT          8
#define CONV20_zzdbg_3_productShf     12
#define CONV20_zzdbg_4_SB_AMP         5
#define CONV20_zzdbg_5_fracBitsOut    4
#define CONV20_zzdbg_8_AuxAct         "LINEAR"
// --------------------------------------------------------------------------------
// Block 21: Conv2D - conv2d_14
#define CONV21_AA                     4
#define CONV21_AI                     4
#define CONV21_IC                     128
#define CONV21_ICALL                  128
#define CONV21_ICOFS                  0
#define CONV21_IX                     8
#define CONV21_IY                     8
#define CONV21_KX                     1
#define CONV21_KY                     1
#define CONV21_OC                     256
#define CONV21_OCALL                  256
#define CONV21_OCOFS                  0
#define CONV21_OX                     8
#define CONV21_OY                     8
#define CONV21_PX                     0
#define CONV21_PY                     0
#define CONV21_SB                     6
#define CONV21_SO                     9
#define CONV21_SX                     1
#define CONV21_SY                     1
#define CONV21_zzdbg_2_SH_WT          9
#define CONV21_zzdbg_3_productShf     13
#define CONV21_zzdbg_4_SB_AMP         7
#define CONV21_zzdbg_5_fracBitsOut    4
#define CONV21_zzdbg_8_AuxAct         "LINEAR"
// --------------------------------------------------------------------------------
// Block 21: Activation - re_lu_15
#define ACT21_ACT                     ACT_RELU6
#define ACT21_AI                      4
#define ACT21_IC                      256
#define ACT21_ICALL                   256
#define ACT21_ICOFS                   0
#define ACT21_IX                      8
#define ACT21_IY                      8
#define ACT21_OC                      256
#define ACT21_OCALL                   256
#define ACT21_OCOFS                   0
#define ACT21_OX                      8
#define ACT21_OY                      8
#define ACT21_zzdbg_5_fracBitsOut     4
// --------------------------------------------------------------------------------
// Block 22: DepthwiseConv2D - depthwise_conv2d_8
#define DSCONV22_AA                   4
#define DSCONV22_AI                   4
#define DSCONV22_IC                   256
#define DSCONV22_ICALL                256
#define DSCONV22_ICOFS                0
#define DSCONV22_IX                   8
#define DSCONV22_IY                   8
#define DSCONV22_KX                   3
#define DSCONV22_KY                   3
#define DSCONV22_OC                   256
#define DSCONV22_OCALL                256
#define DSCONV22_OCOFS                0
#define DSCONV22_OX                   8
#define DSCONV22_OY                   8
#define DSCONV22_PX                   1
#define DSCONV22_PY                   1
#define DSCONV22_SB                   5
#define DSCONV22_SO                   6
#define DSCONV22_SX                   1
#define DSCONV22_SY                   1
#define DSCONV22_zzdbg_2_SH_WT        6
#define DSCONV22_zzdbg_3_productShf   10
#define DSCONV22_zzdbg_4_SB_AMP       5
#define DSCONV22_zzdbg_5_fracBitsOut  4
#define DSCONV22_zzdbg_8_AuxAct       "LINEAR"
// --------------------------------------------------------------------------------
// Block 22: Activation - re_lu_16
#define ACT22_ACT                     ACT_RELU6
#define ACT22_AI                      4
#define ACT22_IC                      256
#define ACT22_ICALL                   256
#define ACT22_ICOFS                   0
#define ACT22_IX                      8
#define ACT22_IY                      8
#define ACT22_OC                      256
#define ACT22_OCALL                   256
#define ACT22_OCOFS                   0
#define ACT22_OX                      8
#define ACT22_OY                      8
#define ACT22_zzdbg_5_fracBitsOut     4
// --------------------------------------------------------------------------------
// Block 23: Conv2D - conv2d_15
#define CONV23_AA                     4
#define CONV23_AI                     4
#define CONV23_IC                     256
#define CONV23_ICALL                  256
#define CONV23_ICOFS                  0
#define CONV23_IX                     8
#define CONV23_IY                     8
#define CONV23_KX                     1
#define CONV23_KY                     1
#define CONV23_OC                     128
#define CONV23_OCALL                  128
#define CONV23_OCOFS                  0
#define CONV23_OX                     8
#define CONV23_OY                     8
#define CONV23_PX                     0
#define CONV23_PY                     0
#define CONV23_SB                     7
#define CONV23_SO                     8
#define CONV23_SX                     1
#define CONV23_SY                     1
#define CONV23_zzdbg_2_SH_WT          8
#define CONV23_zzdbg_3_productShf     12
#define CONV23_zzdbg_4_SB_AMP         5
#define CONV23_zzdbg_5_fracBitsOut    4
#define CONV23_zzdbg_8_AuxAct         "LINEAR"
// --------------------------------------------------------------------------------
// Block 24: Conv2D - conv2d_16
#define CONV24_AA                     4
#define CONV24_AI                     4
#define CONV24_IC                     128
#define CONV24_ICALL                  128
#define CONV24_ICOFS                  0
#define CONV24_IX                     8
#define CONV24_IY                     8
#define CONV24_KX                     1
#define CONV24_KY                     1
#define CONV24_OC                     256
#define CONV24_OCALL                  256
#define CONV24_OCOFS                  0
#define CONV24_OX                     8
#define CONV24_OY                     8
#define CONV24_PX                     0
#define CONV24_PY                     0
#define CONV24_SB                     5
#define CONV24_SO                     9
#define CONV24_SX                     1
#define CONV24_SY                     1
#define CONV24_zzdbg_2_SH_WT          9
#define CONV24_zzdbg_3_productShf     13
#define CONV24_zzdbg_4_SB_AMP         8
#define CONV24_zzdbg_5_fracBitsOut    4
#define CONV24_zzdbg_8_AuxAct         "LINEAR"
// --------------------------------------------------------------------------------
// Block 24: Activation - re_lu_17
#define ACT24_ACT                     ACT_RELU6
#define ACT24_AI                      4
#define ACT24_IC                      256
#define ACT24_ICALL                   256
#define ACT24_ICOFS                   0
#define ACT24_IX                      8
#define ACT24_IY                      8
#define ACT24_OC                      256
#define ACT24_OCALL                   256
#define ACT24_OCOFS                   0
#define ACT24_OX                      8
#define ACT24_OY                      8
#define ACT24_zzdbg_5_fracBitsOut     4
// --------------------------------------------------------------------------------
// Block 25: DepthwiseConv2D - depthwise_conv2d_9
#define DSCONV25_AA                   4
#define DSCONV25_AI                   4
#define DSCONV25_IC                   256
#define DSCONV25_ICALL                256
#define DSCONV25_ICOFS                0
#define DSCONV25_IX                   8
#define DSCONV25_IY                   8
#define DSCONV25_KX                   3
#define DSCONV25_KY                   3
#define DSCONV25_OC                   256
#define DSCONV25_OCALL                256
#define DSCONV25_OCOFS                0
#define DSCONV25_OX                   8
#define DSCONV25_OY                   8
#define DSCONV25_PX                   1
#define DSCONV25_PY                   1
#define DSCONV25_SB                   3
#define DSCONV25_SO                   5
#define DSCONV25_SX                   1
#define DSCONV25_SY                   1
#define DSCONV25_zzdbg_2_SH_WT        5
#define DSCONV25_zzdbg_3_productShf   9
#define DSCONV25_zzdbg_4_SB_AMP       6
#define DSCONV25_zzdbg_5_fracBitsOut  4
#define DSCONV25_zzdbg_8_AuxAct       "LINEAR"
// --------------------------------------------------------------------------------
// Block 25: Activation - re_lu_18
#define ACT25_ACT                     ACT_RELU6
#define ACT25_AI                      4
#define ACT25_IC                      256
#define ACT25_ICALL                   256
#define ACT25_ICOFS                   0
#define ACT25_IX                      8
#define ACT25_IY                      8
#define ACT25_OC                      256
#define ACT25_OCALL                   256
#define ACT25_OCOFS                   0
#define ACT25_OX                      8
#define ACT25_OY                      8
#define ACT25_zzdbg_5_fracBitsOut     4
// --------------------------------------------------------------------------------
// Block 26: Conv2D - conv2d_17
#define CONV26_AA                     4
#define CONV26_AI                     4
#define CONV26_IC                     256
#define CONV26_ICALL                  256
#define CONV26_ICOFS                  0
#define CONV26_IX                     8
#define CONV26_IY                     8
#define CONV26_KX                     1
#define CONV26_KY                     1
#define CONV26_OC                     128
#define CONV26_OCALL                  128
#define CONV26_OCOFS                  0
#define CONV26_OX                     8
#define CONV26_OY                     8
#define CONV26_PX                     0
#define CONV26_PY                     0
#define CONV26_SB                     6
#define CONV26_SO                     8
#define CONV26_SX                     1
#define CONV26_SY                     1
#define CONV26_zzdbg_2_SH_WT          8
#define CONV26_zzdbg_3_productShf     12
#define CONV26_zzdbg_4_SB_AMP         6
#define CONV26_zzdbg_5_fracBitsOut    4
#define CONV26_zzdbg_8_AuxAct         "LINEAR"
// --------------------------------------------------------------------------------
// Block 26: Add - add_5
#define ADD26_AI                      4
#define ADD26_IC                      128
#define ADD26_ICALL                   128
#define ADD26_ICOFS                   0
#define ADD26_IX                      8
#define ADD26_IY                      8
#define ADD26_OC                      128
#define ADD26_OCALL                   128
#define ADD26_OCOFS                   0
#define ADD26_OX                      8
#define ADD26_OY                      8
#define ADD26_SI0                     4
#define ADD26_SI1                     4
#define ADD26_SO                      3
#define ADD26_zzdbg_5_fracBitsOut     3
// --------------------------------------------------------------------------------
// Block 27: Conv2D - conv2d_18
#define CONV27_AA                     4
#define CONV27_AI                     3
#define CONV27_IC                     128
#define CONV27_ICALL                  128
#define CONV27_ICOFS                  0
#define CONV27_IX                     8
#define CONV27_IY                     8
#define CONV27_KX                     1
#define CONV27_KY                     1
#define CONV27_OC                     256
#define CONV27_OCALL                  256
#define CONV27_OCOFS                  0
#define CONV27_OX                     8
#define CONV27_OY                     8
#define CONV27_PX                     0
#define CONV27_PY                     0
#define CONV27_SB                     4
#define CONV27_SO                     8
#define CONV27_SX                     1
#define CONV27_SY                     1
#define CONV27_zzdbg_2_SH_WT          9
#define CONV27_zzdbg_3_productShf     12
#define CONV27_zzdbg_4_SB_AMP         8
#define CONV27_zzdbg_5_fracBitsOut    4
#define CONV27_zzdbg_8_AuxAct         "LINEAR"
// --------------------------------------------------------------------------------
// Block 27: Activation - re_lu_19
#define ACT27_ACT                     ACT_RELU6
#define ACT27_AI                      4
#define ACT27_IC                      256
#define ACT27_ICALL                   256
#define ACT27_ICOFS                   0
#define ACT27_IX                      8
#define ACT27_IY                      8
#define ACT27_OC                      256
#define ACT27_OCALL                   256
#define ACT27_OCOFS                   0
#define ACT27_OX                      8
#define ACT27_OY                      8
#define ACT27_zzdbg_5_fracBitsOut     4
// --------------------------------------------------------------------------------
// Block 28: DepthwiseConv2D - depthwise_conv2d_10
#define DSCONV28_AA                   4
#define DSCONV28_AI                   4
#define DSCONV28_IC                   256
#define DSCONV28_ICALL                256
#define DSCONV28_ICOFS                0
#define DSCONV28_IX                   8
#define DSCONV28_IY                   8
#define DSCONV28_KX                   3
#define DSCONV28_KY                   3
#define DSCONV28_OC                   256
#define DSCONV28_OCALL                256
#define DSCONV28_OCOFS                0
#define DSCONV28_OX                   8
#define DSCONV28_OY                   8
#define DSCONV28_PX                   1
#define DSCONV28_PY                   1
#define DSCONV28_SB                   3
#define DSCONV28_SO                   5
#define DSCONV28_SX                   1
#define DSCONV28_SY                   1
#define DSCONV28_zzdbg_2_SH_WT        5
#define DSCONV28_zzdbg_3_productShf   9
#define DSCONV28_zzdbg_4_SB_AMP       6
#define DSCONV28_zzdbg_5_fracBitsOut  4
#define DSCONV28_zzdbg_8_AuxAct       "LINEAR"
// --------------------------------------------------------------------------------
// Block 28: Activation - re_lu_20
#define ACT28_ACT                     ACT_RELU6
#define ACT28_AI                      4
#define ACT28_IC                      256
#define ACT28_ICALL                   256
#define ACT28_ICOFS                   0
#define ACT28_IX                      8
#define ACT28_IY                      8
#define ACT28_OC                      256
#define ACT28_OCALL                   256
#define ACT28_OCOFS                   0
#define ACT28_OX                      8
#define ACT28_OY                      8
#define ACT28_zzdbg_5_fracBitsOut     4
// --------------------------------------------------------------------------------
// Block 29: Conv2D - conv2d_19
#define CONV29_AA                     4
#define CONV29_AI                     4
#define CONV29_IC                     256
#define CONV29_ICALL                  256
#define CONV29_ICOFS                  0
#define CONV29_IX                     8
#define CONV29_IY                     8
#define CONV29_KX                     1
#define CONV29_KY                     1
#define CONV29_OC                     128
#define CONV29_OCALL                  128
#define CONV29_OCOFS                  0
#define CONV29_OX                     8
#define CONV29_OY                     8
#define CONV29_PX                     0
#define CONV29_PY                     0
#define CONV29_SB                     6
#define CONV29_SO                     8
#define CONV29_SX                     1
#define CONV29_SY                     1
#define CONV29_zzdbg_2_SH_WT          8
#define CONV29_zzdbg_3_productShf     12
#define CONV29_zzdbg_4_SB_AMP         6
#define CONV29_zzdbg_5_fracBitsOut    4
#define CONV29_zzdbg_8_AuxAct         "LINEAR"
// --------------------------------------------------------------------------------
// Block 29: Add - add_6
#define ADD29_AI                      4
#define ADD29_IC                      128
#define ADD29_ICALL                   128
#define ADD29_ICOFS                   0
#define ADD29_IX                      8
#define ADD29_IY                      8
#define ADD29_OC                      128
#define ADD29_OCALL                   128
#define ADD29_OCOFS                   0
#define ADD29_OX                      8
#define ADD29_OY                      8
#define ADD29_SI0                     4
#define ADD29_SI1                     3
#define ADD29_SO                      3
#define ADD29_zzdbg_5_fracBitsOut     3
// --------------------------------------------------------------------------------
// Block 30: Conv2D - conv2d_20
#define CONV30_AA                     4
#define CONV30_AI                     3
#define CONV30_IC                     128
#define CONV30_ICALL                  128
#define CONV30_ICOFS                  0
#define CONV30_IX                     8
#define CONV30_IY                     8
#define CONV30_KX                     1
#define CONV30_KY                     1
#define CONV30_OC                     256
#define CONV30_OCALL                  256
#define CONV30_OCOFS                  0
#define CONV30_OX                     8
#define CONV30_OY                     8
#define CONV30_PX                     0
#define CONV30_PY                     0
#define CONV30_SB                     4
#define CONV30_SO                     8
#define CONV30_SX                     1
#define CONV30_SY                     1
#define CONV30_zzdbg_2_SH_WT          9
#define CONV30_zzdbg_3_productShf     12
#define CONV30_zzdbg_4_SB_AMP         8
#define CONV30_zzdbg_5_fracBitsOut    4
#define CONV30_zzdbg_8_AuxAct         "LINEAR"
// --------------------------------------------------------------------------------
// Block 30: Activation - re_lu_21
#define ACT30_ACT                     ACT_RELU6
#define ACT30_AI                      4
#define ACT30_IC                      256
#define ACT30_ICALL                   256
#define ACT30_ICOFS                   0
#define ACT30_IX                      8
#define ACT30_IY                      8
#define ACT30_OC                      256
#define ACT30_OCALL                   256
#define ACT30_OCOFS                   0
#define ACT30_OX                      8
#define ACT30_OY                      8
#define ACT30_zzdbg_5_fracBitsOut     4
// --------------------------------------------------------------------------------
// Block 31: DepthwiseConv2D - depthwise_conv2d_11
#define DSCONV31_AA                   4
#define DSCONV31_AI                   4
#define DSCONV31_IC                   256
#define DSCONV31_ICALL                256
#define DSCONV31_ICOFS                0
#define DSCONV31_IX                   8
#define DSCONV31_IY                   8
#define DSCONV31_KX                   3
#define DSCONV31_KY                   3
#define DSCONV31_OC                   256
#define DSCONV31_OCALL                256
#define DSCONV31_OCOFS                0
#define DSCONV31_OX                   8
#define DSCONV31_OY                   8
#define DSCONV31_PX                   1
#define DSCONV31_PY                   1
#define DSCONV31_SB                   3
#define DSCONV31_SO                   5
#define DSCONV31_SX                   1
#define DSCONV31_SY                   1
#define DSCONV31_zzdbg_2_SH_WT        5
#define DSCONV31_zzdbg_3_productShf   9
#define DSCONV31_zzdbg_4_SB_AMP       6
#define DSCONV31_zzdbg_5_fracBitsOut  4
#define DSCONV31_zzdbg_8_AuxAct       "LINEAR"
// --------------------------------------------------------------------------------
// Block 31: Activation - re_lu_22
#define ACT31_ACT                     ACT_RELU6
#define ACT31_AI                      4
#define ACT31_IC                      256
#define ACT31_ICALL                   256
#define ACT31_ICOFS                   0
#define ACT31_IX                      8
#define ACT31_IY                      8
#define ACT31_OC                      256
#define ACT31_OCALL                   256
#define ACT31_OCOFS                   0
#define ACT31_OX                      8
#define ACT31_OY                      8
#define ACT31_zzdbg_5_fracBitsOut     4
// --------------------------------------------------------------------------------
// Block 32: Conv2D - conv2d_21
#define CONV32_AA                     4
#define CONV32_AI                     4
#define CONV32_IC                     256
#define CONV32_ICALL                  256
#define CONV32_ICOFS                  0
#define CONV32_IX                     8
#define CONV32_IY                     8
#define CONV32_KX                     1
#define CONV32_KY                     1
#define CONV32_OC                     128
#define CONV32_OCALL                  128
#define CONV32_OCOFS                  0
#define CONV32_OX                     8
#define CONV32_OY                     8
#define CONV32_PX                     0
#define CONV32_PY                     0
#define CONV32_SB                     6
#define CONV32_SO                     8
#define CONV32_SX                     1
#define CONV32_SY                     1
#define CONV32_zzdbg_2_SH_WT          8
#define CONV32_zzdbg_3_productShf     12
#define CONV32_zzdbg_4_SB_AMP         6
#define CONV32_zzdbg_5_fracBitsOut    4
#define CONV32_zzdbg_8_AuxAct         "LINEAR"
// --------------------------------------------------------------------------------
// Block 32: Add - add_7
#define ADD32_AI                      4
#define ADD32_IC                      128
#define ADD32_ICALL                   128
#define ADD32_ICOFS                   0
#define ADD32_IX                      8
#define ADD32_IY                      8
#define ADD32_OC                      128
#define ADD32_OCALL                   128
#define ADD32_OCOFS                   0
#define ADD32_OX                      8
#define ADD32_OY                      8
#define ADD32_SI0                     4
#define ADD32_SI1                     3
#define ADD32_SO                      3
#define ADD32_zzdbg_5_fracBitsOut     3
// --------------------------------------------------------------------------------
// Block 33: Conv2D - conv2d_22
#define CONV33_AA                     4
#define CONV33_AI                     3
#define CONV33_IC                     128
#define CONV33_ICALL                  128
#define CONV33_ICOFS                  0
#define CONV33_IX                     8
#define CONV33_IY                     8
#define CONV33_KX                     1
#define CONV33_KY                     1
#define CONV33_OC                     256
#define CONV33_OCALL                  256
#define CONV33_OCOFS                  0
#define CONV33_OX                     8
#define CONV33_OY                     8
#define CONV33_PX                     0
#define CONV33_PY                     0
#define CONV33_SB                     4
#define CONV33_SO                     8
#define CONV33_SX                     1
#define CONV33_SY                     1
#define CONV33_zzdbg_2_SH_WT          9
#define CONV33_zzdbg_3_productShf     12
#define CONV33_zzdbg_4_SB_AMP         8
#define CONV33_zzdbg_5_fracBitsOut    4
#define CONV33_zzdbg_8_AuxAct         "LINEAR"
// --------------------------------------------------------------------------------
// Block 33: Activation - re_lu_23
#define ACT33_ACT                     ACT_RELU6
#define ACT33_AI                      4
#define ACT33_IC                      256
#define ACT33_ICALL                   256
#define ACT33_ICOFS                   0
#define ACT33_IX                      8
#define ACT33_IY                      8
#define ACT33_OC                      256
#define ACT33_OCALL                   256
#define ACT33_OCOFS                   0
#define ACT33_OX                      8
#define ACT33_OY                      8
#define ACT33_zzdbg_5_fracBitsOut     4
// --------------------------------------------------------------------------------
// Block 34: DepthwiseConv2D - depthwise_conv2d_12
#define DSCONV34_AA                   4
#define DSCONV34_AI                   4
#define DSCONV34_IC                   256
#define DSCONV34_ICALL                256
#define DSCONV34_ICOFS                0
#define DSCONV34_IX                   8
#define DSCONV34_IY                   8
#define DSCONV34_KX                   3
#define DSCONV34_KY                   3
#define DSCONV34_OC                   256
#define DSCONV34_OCALL                256
#define DSCONV34_OCOFS                0
#define DSCONV34_OX                   8
#define DSCONV34_OY                   8
#define DSCONV34_PX                   1
#define DSCONV34_PY                   1
#define DSCONV34_SB                   4
#define DSCONV34_SO                   6
#define DSCONV34_SX                   1
#define DSCONV34_SY                   1
#define DSCONV34_zzdbg_2_SH_WT        6
#define DSCONV34_zzdbg_3_productShf   10
#define DSCONV34_zzdbg_4_SB_AMP       6
#define DSCONV34_zzdbg_5_fracBitsOut  4
#define DSCONV34_zzdbg_8_AuxAct       "LINEAR"
// --------------------------------------------------------------------------------
// Block 34: Activation - re_lu_24
#define ACT34_ACT                     ACT_RELU6
#define ACT34_AI                      4
#define ACT34_IC                      256
#define ACT34_ICALL                   256
#define ACT34_ICOFS                   0
#define ACT34_IX                      8
#define ACT34_IY                      8
#define ACT34_OC                      256
#define ACT34_OCALL                   256
#define ACT34_OCOFS                   0
#define ACT34_OX                      8
#define ACT34_OY                      8
#define ACT34_zzdbg_5_fracBitsOut     4
// --------------------------------------------------------------------------------
// Block 35: Conv2D - conv2d_23
#define CONV35_AA                     4
#define CONV35_AI                     4
#define CONV35_IC                     256
#define CONV35_ICALL                  256
#define CONV35_ICOFS                  0
#define CONV35_IX                     8
#define CONV35_IY                     8
#define CONV35_KX                     1
#define CONV35_KY                     1
#define CONV35_OC                     128
#define CONV35_OCALL                  128
#define CONV35_OCOFS                  0
#define CONV35_OX                     8
#define CONV35_OY                     8
#define CONV35_PX                     0
#define CONV35_PY                     0
#define CONV35_SB                     6
#define CONV35_SO                     8
#define CONV35_SX                     1
#define CONV35_SY                     1
#define CONV35_zzdbg_2_SH_WT          8
#define CONV35_zzdbg_3_productShf     12
#define CONV35_zzdbg_4_SB_AMP         6
#define CONV35_zzdbg_5_fracBitsOut    4
#define CONV35_zzdbg_8_AuxAct         "LINEAR"
// --------------------------------------------------------------------------------
// Block 35: Add - add_8
#define ADD35_AI                      4
#define ADD35_IC                      128
#define ADD35_ICALL                   128
#define ADD35_ICOFS                   0
#define ADD35_IX                      8
#define ADD35_IY                      8
#define ADD35_OC                      128
#define ADD35_OCALL                   128
#define ADD35_OCOFS                   0
#define ADD35_OX                      8
#define ADD35_OY                      8
#define ADD35_SI0                     4
#define ADD35_SI1                     3
#define ADD35_SO                      3
#define ADD35_zzdbg_5_fracBitsOut     3
// --------------------------------------------------------------------------------
// Block 36: Conv2D - conv2d_24
#define CONV36_AA                     4
#define CONV36_AI                     3
#define CONV36_IC                     128
#define CONV36_ICALL                  128
#define CONV36_ICOFS                  0
#define CONV36_IX                     8
#define CONV36_IY                     8
#define CONV36_KX                     1
#define CONV36_KY                     1
#define CONV36_OC                     256
#define CONV36_OCALL                  256
#define CONV36_OCOFS                  0
#define CONV36_OX                     8
#define CONV36_OY                     8
#define CONV36_PX                     0
#define CONV36_PY                     0
#define CONV36_SB                     5
#define CONV36_SO                     9
#define CONV36_SX                     1
#define CONV36_SY                     1
#define CONV36_zzdbg_2_SH_WT          10
#define CONV36_zzdbg_3_productShf     13
#define CONV36_zzdbg_4_SB_AMP         8
#define CONV36_zzdbg_5_fracBitsOut    4
#define CONV36_zzdbg_8_AuxAct         "LINEAR"
// --------------------------------------------------------------------------------
// Block 36: Activation - re_lu_25
#define ACT36_ACT                     ACT_RELU6
#define ACT36_AI                      4
#define ACT36_IC                      256
#define ACT36_ICALL                   256
#define ACT36_ICOFS                   0
#define ACT36_IX                      8
#define ACT36_IY                      8
#define ACT36_OC                      256
#define ACT36_OCALL                   256
#define ACT36_OCOFS                   0
#define ACT36_OX                      8
#define ACT36_OY                      8
#define ACT36_zzdbg_5_fracBitsOut     4
// --------------------------------------------------------------------------------
// Block 37: DepthwiseConv2D - depthwise_conv2d_13
#define DSCONV37_AA                   4
#define DSCONV37_AI                   4
#define DSCONV37_IC                   256
#define DSCONV37_ICALL                256
#define DSCONV37_ICOFS                0
#define DSCONV37_IX                   8
#define DSCONV37_IY                   8
#define DSCONV37_KX                   3
#define DSCONV37_KY                   3
#define DSCONV37_OC                   256
#define DSCONV37_OCALL                256
#define DSCONV37_OCOFS                0
#define DSCONV37_OX                   8
#define DSCONV37_OY                   8
#define DSCONV37_PX                   1
#define DSCONV37_PY                   1
#define DSCONV37_SB                   4
#define DSCONV37_SO                   6
#define DSCONV37_SX                   1
#define DSCONV37_SY                   1
#define DSCONV37_zzdbg_2_SH_WT        6
#define DSCONV37_zzdbg_3_productShf   10
#define DSCONV37_zzdbg_4_SB_AMP       6
#define DSCONV37_zzdbg_5_fracBitsOut  4
#define DSCONV37_zzdbg_8_AuxAct       "LINEAR"
// --------------------------------------------------------------------------------
// Block 37: Activation - re_lu_26
#define ACT37_ACT                     ACT_RELU6
#define ACT37_AI                      4
#define ACT37_IC                      256
#define ACT37_ICALL                   256
#define ACT37_ICOFS                   0
#define ACT37_IX                      8
#define ACT37_IY                      8
#define ACT37_OC                      256
#define ACT37_OCALL                   256
#define ACT37_OCOFS                   0
#define ACT37_OX                      8
#define ACT37_OY                      8
#define ACT37_zzdbg_5_fracBitsOut     4
// --------------------------------------------------------------------------------
// Block 38: Conv2D - conv2d_25
#define CONV38_AA                     4
#define CONV38_AI                     4
#define CONV38_IC                     256
#define CONV38_ICALL                  256
#define CONV38_ICOFS                  0
#define CONV38_IX                     8
#define CONV38_IY                     8
#define CONV38_KX                     1
#define CONV38_KY                     1
#define CONV38_OC                     128
#define CONV38_OCALL                  128
#define CONV38_OCOFS                  0
#define CONV38_OX                     8
#define CONV38_OY                     8
#define CONV38_PX                     0
#define CONV38_PY                     0
#define CONV38_SB                     6
#define CONV38_SO                     7
#define CONV38_SX                     1
#define CONV38_SY                     1
#define CONV38_zzdbg_2_SH_WT          7
#define CONV38_zzdbg_3_productShf     11
#define CONV38_zzdbg_4_SB_AMP         5
#define CONV38_zzdbg_5_fracBitsOut    4
#define CONV38_zzdbg_8_AuxAct         "LINEAR"
// --------------------------------------------------------------------------------
// Block 38: Add - add_9
#define ADD38_AI                      4
#define ADD38_IC                      128
#define ADD38_ICALL                   128
#define ADD38_ICOFS                   0
#define ADD38_IX                      8
#define ADD38_IY                      8
#define ADD38_OC                      128
#define ADD38_OCALL                   128
#define ADD38_OCOFS                   0
#define ADD38_OX                      8
#define ADD38_OY                      8
#define ADD38_SI0                     4
#define ADD38_SI1                     3
#define ADD38_SO                      2
#define ADD38_zzdbg_5_fracBitsOut     2
// --------------------------------------------------------------------------------
// Block 39: Conv2D - conv2d_26
#define CONV39_AA                     4
#define CONV39_AI                     2
#define CONV39_IC                     128
#define CONV39_ICALL                  128
#define CONV39_ICOFS                  0
#define CONV39_IX                     8
#define CONV39_IY                     8
#define CONV39_KX                     1
#define CONV39_KY                     1
#define CONV39_OC                     512
#define CONV39_OCALL                  512
#define CONV39_OCOFS                  0
#define CONV39_OX                     8
#define CONV39_OY                     8
#define CONV39_PX                     0
#define CONV39_PY                     0
#define CONV39_SB                     4
#define CONV39_SO                     8
#define CONV39_SX                     1
#define CONV39_SY                     1
#define CONV39_zzdbg_2_SH_WT          10
#define CONV39_zzdbg_3_productShf     12
#define CONV39_zzdbg_4_SB_AMP         8
#define CONV39_zzdbg_5_fracBitsOut    4
#define CONV39_zzdbg_8_AuxAct         "LINEAR"
// --------------------------------------------------------------------------------
// Block 39: Activation - re_lu_27
#define ACT39_ACT                     ACT_RELU6
#define ACT39_AI                      4
#define ACT39_IC                      512
#define ACT39_ICALL                   512
#define ACT39_ICOFS                   0
#define ACT39_IX                      8
#define ACT39_IY                      8
#define ACT39_OC                      512
#define ACT39_OCALL                   512
#define ACT39_OCOFS                   0
#define ACT39_OX                      8
#define ACT39_OY                      8
#define ACT39_zzdbg_5_fracBitsOut     4
// --------------------------------------------------------------------------------
// Block 40: DepthwiseConv2D - depthwise_conv2d_14
#define DSCONV40_AA                   4
#define DSCONV40_AI                   4
#define DSCONV40_IC                   512
#define DSCONV40_ICALL                512
#define DSCONV40_ICOFS                0
#define DSCONV40_IX                   8
#define DSCONV40_IY                   8
#define DSCONV40_KX                   3
#define DSCONV40_KY                   3
#define DSCONV40_OC                   512
#define DSCONV40_OCALL                512
#define DSCONV40_OCOFS                0
#define DSCONV40_OX                   8
#define DSCONV40_OY                   8
#define DSCONV40_PX                   1
#define DSCONV40_PY                   1
#define DSCONV40_SB                   4
#define DSCONV40_SO                   6
#define DSCONV40_SX                   1
#define DSCONV40_SY                   1
#define DSCONV40_zzdbg_2_SH_WT        6
#define DSCONV40_zzdbg_3_productShf   10
#define DSCONV40_zzdbg_4_SB_AMP       6
#define DSCONV40_zzdbg_5_fracBitsOut  4
#define DSCONV40_zzdbg_8_AuxAct       "LINEAR"
// --------------------------------------------------------------------------------
// Block 40: Activation - re_lu_28
#define ACT40_ACT                     ACT_RELU6
#define ACT40_AI                      4
#define ACT40_IC                      512
#define ACT40_ICALL                   512
#define ACT40_ICOFS                   0
#define ACT40_IX                      8
#define ACT40_IY                      8
#define ACT40_OC                      512
#define ACT40_OCALL                   512
#define ACT40_OCOFS                   0
#define ACT40_OX                      8
#define ACT40_OY                      8
#define ACT40_zzdbg_5_fracBitsOut     4
// --------------------------------------------------------------------------------
// Block 40: MaxPooling2D - max_pooling2d_3
#define MAXP40_AI                     4
#define MAXP40_IC                     512
#define MAXP40_ICALL                  512
#define MAXP40_ICOFS                  0
#define MAXP40_IX                     8
#define MAXP40_IY                     8
#define MAXP40_KX                     2
#define MAXP40_KY                     2
#define MAXP40_OC                     512
#define MAXP40_OCALL                  512
#define MAXP40_OCOFS                  0
#define MAXP40_OX                     4
#define MAXP40_OY                     4
#define MAXP40_SX                     2
#define MAXP40_SY                     2
#define MAXP40_zzdbg_5_fracBitsOut    4
// --------------------------------------------------------------------------------
// Block 41: Conv2D - conv2d_27
#define CONV41_AA                     4
#define CONV41_AI                     4
#define CONV41_IC                     512
#define CONV41_ICALL                  512
#define CONV41_ICOFS                  0
#define CONV41_IX                     4
#define CONV41_IY                     4
#define CONV41_KX                     1
#define CONV41_KY                     1
#define CONV41_OC                     128
#define CONV41_OCALL                  128
#define CONV41_OCOFS                  0
#define CONV41_OX                     4
#define CONV41_OY                     4
#define CONV41_PX                     0
#define CONV41_PY                     0
#define CONV41_SB                     7
#define CONV41_SO                     9
#define CONV41_SX                     1
#define CONV41_SY                     1
#define CONV41_zzdbg_2_SH_WT          9
#define CONV41_zzdbg_3_productShf     13
#define CONV41_zzdbg_4_SB_AMP         6
#define CONV41_zzdbg_5_fracBitsOut    4
#define CONV41_zzdbg_8_AuxAct         "LINEAR"
// --------------------------------------------------------------------------------
// Block 42: Conv2D - conv2d_28
#define CONV42_AA                     4
#define CONV42_AI                     4
#define CONV42_IC                     128
#define CONV42_ICALL                  128
#define CONV42_ICOFS                  0
#define CONV42_IX                     4
#define CONV42_IY                     4
#define CONV42_KX                     1
#define CONV42_KY                     1
#define CONV42_OC                     256
#define CONV42_OCALL                  256
#define CONV42_OCOFS                  0
#define CONV42_OX                     4
#define CONV42_OY                     4
#define CONV42_PX                     0
#define CONV42_PY                     0
#define CONV42_SB                     6
#define CONV42_SO                     9
#define CONV42_SX                     1
#define CONV42_SY                     1
#define CONV42_zzdbg_2_SH_WT          9
#define CONV42_zzdbg_3_productShf     13
#define CONV42_zzdbg_4_SB_AMP         7
#define CONV42_zzdbg_5_fracBitsOut    4
#define CONV42_zzdbg_8_AuxAct         "LINEAR"
// --------------------------------------------------------------------------------
// Block 42: Activation - re_lu_29
#define ACT42_ACT                     ACT_RELU6
#define ACT42_AI                      4
#define ACT42_IC                      256
#define ACT42_ICALL                   256
#define ACT42_ICOFS                   0
#define ACT42_IX                      4
#define ACT42_IY                      4
#define ACT42_OC                      256
#define ACT42_OCALL                   256
#define ACT42_OCOFS                   0
#define ACT42_OX                      4
#define ACT42_OY                      4
#define ACT42_zzdbg_5_fracBitsOut     4
// --------------------------------------------------------------------------------
// Block 43: DepthwiseConv2D - depthwise_conv2d_15
#define DSCONV43_AA                   4
#define DSCONV43_AI                   4
#define DSCONV43_IC                   256
#define DSCONV43_ICALL                256
#define DSCONV43_ICOFS                0
#define DSCONV43_IX                   4
#define DSCONV43_IY                   4
#define DSCONV43_KX                   3
#define DSCONV43_KY                   3
#define DSCONV43_OC                   256
#define DSCONV43_OCALL                256
#define DSCONV43_OCOFS                0
#define DSCONV43_OX                   4
#define DSCONV43_OY                   4
#define DSCONV43_PX                   1
#define DSCONV43_PY                   1
#define DSCONV43_SB                   3
#define DSCONV43_SO                   5
#define DSCONV43_SX                   1
#define DSCONV43_SY                   1
#define DSCONV43_zzdbg_2_SH_WT        5
#define DSCONV43_zzdbg_3_productShf   9
#define DSCONV43_zzdbg_4_SB_AMP       6
#define DSCONV43_zzdbg_5_fracBitsOut  4
#define DSCONV43_zzdbg_8_AuxAct       "LINEAR"
// --------------------------------------------------------------------------------
// Block 43: Activation - re_lu_30
#define ACT43_ACT                     ACT_RELU6
#define ACT43_AI                      4
#define ACT43_IC                      256
#define ACT43_ICALL                   256
#define ACT43_ICOFS                   0
#define ACT43_IX                      4
#define ACT43_IY                      4
#define ACT43_OC                      256
#define ACT43_OCALL                   256
#define ACT43_OCOFS                   0
#define ACT43_OX                      4
#define ACT43_OY                      4
#define ACT43_zzdbg_5_fracBitsOut     4
// --------------------------------------------------------------------------------
// Block 44: Conv2D - conv2d_29
#define CONV44_AA                     4
#define CONV44_AI                     4
#define CONV44_IC                     256
#define CONV44_ICALL                  256
#define CONV44_ICOFS                  0
#define CONV44_IX                     4
#define CONV44_IY                     4
#define CONV44_KX                     1
#define CONV44_KY                     1
#define CONV44_OC                     128
#define CONV44_OCALL                  128
#define CONV44_OCOFS                  0
#define CONV44_OX                     4
#define CONV44_OY                     4
#define CONV44_PX                     0
#define CONV44_PY                     0
#define CONV44_SB                     5
#define CONV44_SO                     7
#define CONV44_SX                     1
#define CONV44_SY                     1
#define CONV44_zzdbg_2_SH_WT          7
#define CONV44_zzdbg_3_productShf     11
#define CONV44_zzdbg_4_SB_AMP         6
#define CONV44_zzdbg_5_fracBitsOut    4
#define CONV44_zzdbg_8_AuxAct         "LINEAR"
// --------------------------------------------------------------------------------
// Block 45: Conv2D - conv2d_30
#define CONV45_AA                     4
#define CONV45_AI                     4
#define CONV45_IC                     128
#define CONV45_ICALL                  128
#define CONV45_ICOFS                  0
#define CONV45_IX                     4
#define CONV45_IY                     4
#define CONV45_KX                     1
#define CONV45_KY                     1
#define CONV45_OC                     256
#define CONV45_OCALL                  256
#define CONV45_OCOFS                  0
#define CONV45_OX                     4
#define CONV45_OY                     4
#define CONV45_PX                     0
#define CONV45_PY                     0
#define CONV45_SB                     5
#define CONV45_SO                     9
#define CONV45_SX                     1
#define CONV45_SY                     1
#define CONV45_zzdbg_2_SH_WT          9
#define CONV45_zzdbg_3_productShf     13
#define CONV45_zzdbg_4_SB_AMP         8
#define CONV45_zzdbg_5_fracBitsOut    4
#define CONV45_zzdbg_8_AuxAct         "LINEAR"
// --------------------------------------------------------------------------------
// Block 45: Activation - re_lu_31
#define ACT45_ACT                     ACT_RELU6
#define ACT45_AI                      4
#define ACT45_IC                      256
#define ACT45_ICALL                   256
#define ACT45_ICOFS                   0
#define ACT45_IX                      4
#define ACT45_IY                      4
#define ACT45_OC                      256
#define ACT45_OCALL                   256
#define ACT45_OCOFS                   0
#define ACT45_OX                      4
#define ACT45_OY                      4
#define ACT45_zzdbg_5_fracBitsOut     4
// --------------------------------------------------------------------------------
// Block 46: DepthwiseConv2D - depthwise_conv2d_16
#define DSCONV46_AA                   4
#define DSCONV46_AI                   4
#define DSCONV46_IC                   256
#define DSCONV46_ICALL                256
#define DSCONV46_ICOFS                0
#define DSCONV46_IX                   4
#define DSCONV46_IY                   4
#define DSCONV46_KX                   3
#define DSCONV46_KY                   3
#define DSCONV46_OC                   256
#define DSCONV46_OCALL                256
#define DSCONV46_OCOFS                0
#define DSCONV46_OX                   4
#define DSCONV46_OY                   4
#define DSCONV46_PX                   1
#define DSCONV46_PY                   1
#define DSCONV46_SB                   4
#define DSCONV46_SO                   6
#define DSCONV46_SX                   1
#define DSCONV46_SY                   1
#define DSCONV46_zzdbg_2_SH_WT        6
#define DSCONV46_zzdbg_3_productShf   10
#define DSCONV46_zzdbg_4_SB_AMP       6
#define DSCONV46_zzdbg_5_fracBitsOut  4
#define DSCONV46_zzdbg_8_AuxAct       "LINEAR"
// --------------------------------------------------------------------------------
// Block 46: Activation - re_lu_32
#define ACT46_ACT                     ACT_RELU6
#define ACT46_AI                      4
#define ACT46_IC                      256
#define ACT46_ICALL                   256
#define ACT46_ICOFS                   0
#define ACT46_IX                      4
#define ACT46_IY                      4
#define ACT46_OC                      256
#define ACT46_OCALL                   256
#define ACT46_OCOFS                   0
#define ACT46_OX                      4
#define ACT46_OY                      4
#define ACT46_zzdbg_5_fracBitsOut     4
// --------------------------------------------------------------------------------
// Block 47: Conv2D - conv2d_31
#define CONV47_AA                     3
#define CONV47_AI                     4
#define CONV47_IC                     256
#define CONV47_ICALL                  256
#define CONV47_ICOFS                  0
#define CONV47_IX                     4
#define CONV47_IY                     4
#define CONV47_KX                     1
#define CONV47_KY                     1
#define CONV47_OC                     128
#define CONV47_OCALL                  128
#define CONV47_OCOFS                  0
#define CONV47_OX                     4
#define CONV47_OY                     4
#define CONV47_PX                     0
#define CONV47_PY                     0
#define CONV47_SB                     6
#define CONV47_SO                     7
#define CONV47_SX                     1
#define CONV47_SY                     1
#define CONV47_zzdbg_2_SH_WT          8
#define CONV47_zzdbg_3_productShf     12
#define CONV47_zzdbg_4_SB_AMP         6
#define CONV47_zzdbg_5_fracBitsOut    5
#define CONV47_zzdbg_8_AuxAct         "LINEAR"
// --------------------------------------------------------------------------------
// Block 47: Add - add_10
#define ADD47_AI                      5
#define ADD47_IC                      128
#define ADD47_ICALL                   128
#define ADD47_ICOFS                   0
#define ADD47_IX                      4
#define ADD47_IY                      4
#define ADD47_OC                      128
#define ADD47_OCALL                   128
#define ADD47_OCOFS                   0
#define ADD47_OX                      4
#define ADD47_OY                      4
#define ADD47_SI0                     5
#define ADD47_SI1                     4
#define ADD47_SO                      4
#define ADD47_zzdbg_5_fracBitsOut     4
// --------------------------------------------------------------------------------
// Block 48: Conv2D - conv2d_32
#define CONV48_AA                     4
#define CONV48_AI                     4
#define CONV48_IC                     128
#define CONV48_ICALL                  128
#define CONV48_ICOFS                  0
#define CONV48_IX                     4
#define CONV48_IY                     4
#define CONV48_KX                     1
#define CONV48_KY                     1
#define CONV48_OC                     512
#define CONV48_OCALL                  512
#define CONV48_OCOFS                  0
#define CONV48_OX                     4
#define CONV48_OY                     4
#define CONV48_PX                     0
#define CONV48_PY                     0
#define CONV48_SB                     5
#define CONV48_SO                     9
#define CONV48_SX                     1
#define CONV48_SY                     1
#define CONV48_zzdbg_2_SH_WT          9
#define CONV48_zzdbg_3_productShf     13
#define CONV48_zzdbg_4_SB_AMP         8
#define CONV48_zzdbg_5_fracBitsOut    4
#define CONV48_zzdbg_8_AuxAct         "LINEAR"
// --------------------------------------------------------------------------------
// Block 48: Activation - re_lu_33
#define ACT48_ACT                     ACT_RELU6
#define ACT48_AI                      4
#define ACT48_IC                      512
#define ACT48_ICALL                   512
#define ACT48_ICOFS                   0
#define ACT48_IX                      4
#define ACT48_IY                      4
#define ACT48_OC                      512
#define ACT48_OCALL                   512
#define ACT48_OCOFS                   0
#define ACT48_OX                      4
#define ACT48_OY                      4
#define ACT48_zzdbg_5_fracBitsOut     4
// --------------------------------------------------------------------------------
// Block 49: DepthwiseConv2D - depthwise_conv2d_17
#define DSCONV49_AA                   4
#define DSCONV49_AI                   4
#define DSCONV49_IC                   512
#define DSCONV49_ICALL                512
#define DSCONV49_ICOFS                0
#define DSCONV49_IX                   4
#define DSCONV49_IY                   4
#define DSCONV49_KX                   4
#define DSCONV49_KY                   4
#define DSCONV49_OC                   512
#define DSCONV49_OCALL                512
#define DSCONV49_OCOFS                0
#define DSCONV49_OX                   1
#define DSCONV49_OY                   1
#define DSCONV49_PX                   0
#define DSCONV49_PY                   0
#define DSCONV49_SB                   5
#define DSCONV49_SO                   5
#define DSCONV49_SX                   1
#define DSCONV49_SY                   1
#define DSCONV49_zzdbg_2_SH_WT        5
#define DSCONV49_zzdbg_3_productShf   9
#define DSCONV49_zzdbg_4_SB_AMP       4
#define DSCONV49_zzdbg_5_fracBitsOut  4
#define DSCONV49_zzdbg_8_AuxAct       "LINEAR"
// --------------------------------------------------------------------------------
// Block 49: Reshape - reshape_1
#define RESHP49_AI                    4
#define RESHP49_IC                    512
#define RESHP49_ICALL                 512
#define RESHP49_ICOFS                 0
#define RESHP49_IX                    1
#define RESHP49_IY                    1
#define RESHP49_OC                    512
#define RESHP49_OCALL                 512
#define RESHP49_OCOFS                 0
#define RESHP49_OX                    1
#define RESHP49_OY                    1
#define RESHP49_zzdbg_5_fracBitsOut   4
// --------------------------------------------------------------------------------
// Block 50: Conv2D - conv2d_33
#define CONV50_AA                     4
#define CONV50_AI                     4
#define CONV50_IC                     512
#define CONV50_ICALL                  512
#define CONV50_ICOFS                  0
#define CONV50_IX                     1
#define CONV50_IY                     1
#define CONV50_KX                     1
#define CONV50_KY                     1
#define CONV50_OC                     128
#define CONV50_OCALL                  128
#define CONV50_OCOFS                  0
#define CONV50_OX                     1
#define CONV50_OY                     1
#define CONV50_PX                     0
#define CONV50_PY                     0
#define CONV50_SB                     5
#define CONV50_SO                     9
#define CONV50_SX                     1
#define CONV50_SY                     1
#define CONV50_zzdbg_2_SH_WT          9
#define CONV50_zzdbg_3_productShf     13
#define CONV50_zzdbg_4_SB_AMP         8
#define CONV50_zzdbg_5_fracBitsOut    4
#define CONV50_zzdbg_8_AuxAct         "LINEAR"
// --------------------------------------------------------------------------------
// Block 50: Reshape - reshape_2
#define RESHP50_AI                    4
#define RESHP50_IC                    128
#define RESHP50_ICALL                 128
#define RESHP50_ICOFS                 0
#define RESHP50_IX                    1
#define RESHP50_IY                    1
#define RESHP50_OC                    1
#define RESHP50_OCALL                 1
#define RESHP50_OCOFS                 0
#define RESHP50_OX                    1
#define RESHP50_OY                    128
#define RESHP50_zzdbg_5_fracBitsOut   4
extern const int8_t cg_CONV1weit[]; // 1728 - Co,H,W,Ci: (64, 3, 3, 3)
extern const int8_t cg_CONV1bias[]; // 64
extern const int8_t cg_DSCONV2weit[]; // 576 - Co,H,W,Ci: (1, 3, 3, 64)
extern const int8_t cg_DSCONV2bias[]; // 64
extern const int8_t cg_CONV3weit[]; // 8192 - Co,H,W,Ci: (128, 1, 1, 64)
extern const int8_t cg_CONV3bias[]; // 128
extern const int8_t cg_DSCONV4weit[]; // 1152 - Co,H,W,Ci: (1, 3, 3, 128)
extern const int8_t cg_DSCONV4bias[]; // 128
extern const int8_t cg_CONV5weit[]; // 8192 - Co,H,W,Ci: (64, 1, 1, 128)
extern const int8_t cg_CONV5bias[]; // 64
extern const int8_t cg_CONV6weit[]; // 8192 - Co,H,W,Ci: (128, 1, 1, 64)
extern const int8_t cg_CONV6bias[]; // 128
extern const int8_t cg_DSCONV7weit[]; // 1152 - Co,H,W,Ci: (1, 3, 3, 128)
extern const int8_t cg_DSCONV7bias[]; // 128
extern const int8_t cg_CONV8weit[]; // 8192 - Co,H,W,Ci: (64, 1, 1, 128)
extern const int8_t cg_CONV8bias[]; // 64
extern const int8_t cg_CONV9weit[]; // 8192 - Co,H,W,Ci: (128, 1, 1, 64)
extern const int8_t cg_CONV9bias[]; // 128
extern const int8_t cg_DSCONV10weit[]; // 1152 - Co,H,W,Ci: (1, 3, 3, 128)
extern const int8_t cg_DSCONV10bias[]; // 128
extern const int8_t cg_CONV11weit[]; // 8192 - Co,H,W,Ci: (64, 1, 1, 128)
extern const int8_t cg_CONV11bias[]; // 64
extern const int8_t cg_CONV12weit[]; // 8192 - Co,H,W,Ci: (128, 1, 1, 64)
extern const int8_t cg_CONV12bias[]; // 128
extern const int8_t cg_DSCONV13weit[]; // 1152 - Co,H,W,Ci: (1, 3, 3, 128)
extern const int8_t cg_DSCONV13bias[]; // 128
extern const int8_t cg_CONV14weit[]; // 8192 - Co,H,W,Ci: (64, 1, 1, 128)
extern const int8_t cg_CONV14bias[]; // 64
extern const int8_t cg_CONV15weit[]; // 8192 - Co,H,W,Ci: (128, 1, 1, 64)
extern const int8_t cg_CONV15bias[]; // 128
extern const int8_t cg_DSCONV16weit[]; // 1152 - Co,H,W,Ci: (1, 3, 3, 128)
extern const int8_t cg_DSCONV16bias[]; // 128
extern const int8_t cg_CONV17weit[]; // 8192 - Co,H,W,Ci: (64, 1, 1, 128)
extern const int8_t cg_CONV17bias[]; // 64
extern const int8_t cg_CONV18weit[]; // 16384 - Co,H,W,Ci: (256, 1, 1, 64)
extern const int8_t cg_CONV18bias[]; // 256
extern const int8_t cg_DSCONV19weit[]; // 2304 - Co,H,W,Ci: (1, 3, 3, 256)
extern const int8_t cg_DSCONV19bias[]; // 256
extern const int8_t cg_CONV20weit[]; // 32768 - Co,H,W,Ci: (128, 1, 1, 256)
extern const int8_t cg_CONV20bias[]; // 128
extern const int8_t cg_CONV21weit[]; // 32768 - Co,H,W,Ci: (256, 1, 1, 128)
extern const int8_t cg_CONV21bias[]; // 256
extern const int8_t cg_DSCONV22weit[]; // 2304 - Co,H,W,Ci: (1, 3, 3, 256)
extern const int8_t cg_DSCONV22bias[]; // 256
extern const int8_t cg_CONV23weit[]; // 32768 - Co,H,W,Ci: (128, 1, 1, 256)
extern const int8_t cg_CONV23bias[]; // 128
extern const int8_t cg_CONV24weit[]; // 32768 - Co,H,W,Ci: (256, 1, 1, 128)
extern const int8_t cg_CONV24bias[]; // 256
extern const int8_t cg_DSCONV25weit[]; // 2304 - Co,H,W,Ci: (1, 3, 3, 256)
extern const int8_t cg_DSCONV25bias[]; // 256
extern const int8_t cg_CONV26weit[]; // 32768 - Co,H,W,Ci: (128, 1, 1, 256)
extern const int8_t cg_CONV26bias[]; // 128
extern const int8_t cg_CONV27weit[]; // 32768 - Co,H,W,Ci: (256, 1, 1, 128)
extern const int8_t cg_CONV27bias[]; // 256
extern const int8_t cg_DSCONV28weit[]; // 2304 - Co,H,W,Ci: (1, 3, 3, 256)
extern const int8_t cg_DSCONV28bias[]; // 256
extern const int8_t cg_CONV29weit[]; // 32768 - Co,H,W,Ci: (128, 1, 1, 256)
extern const int8_t cg_CONV29bias[]; // 128
extern const int8_t cg_CONV30weit[]; // 32768 - Co,H,W,Ci: (256, 1, 1, 128)
extern const int8_t cg_CONV30bias[]; // 256
extern const int8_t cg_DSCONV31weit[]; // 2304 - Co,H,W,Ci: (1, 3, 3, 256)
extern const int8_t cg_DSCONV31bias[]; // 256
extern const int8_t cg_CONV32weit[]; // 32768 - Co,H,W,Ci: (128, 1, 1, 256)
extern const int8_t cg_CONV32bias[]; // 128
extern const int8_t cg_CONV33weit[]; // 32768 - Co,H,W,Ci: (256, 1, 1, 128)
extern const int8_t cg_CONV33bias[]; // 256
extern const int8_t cg_DSCONV34weit[]; // 2304 - Co,H,W,Ci: (1, 3, 3, 256)
extern const int8_t cg_DSCONV34bias[]; // 256
extern const int8_t cg_CONV35weit[]; // 32768 - Co,H,W,Ci: (128, 1, 1, 256)
extern const int8_t cg_CONV35bias[]; // 128
extern const int8_t cg_CONV36weit[]; // 32768 - Co,H,W,Ci: (256, 1, 1, 128)
extern const int8_t cg_CONV36bias[]; // 256
extern const int8_t cg_DSCONV37weit[]; // 2304 - Co,H,W,Ci: (1, 3, 3, 256)
extern const int8_t cg_DSCONV37bias[]; // 256
extern const int8_t cg_CONV38weit[]; // 32768 - Co,H,W,Ci: (128, 1, 1, 256)
extern const int8_t cg_CONV38bias[]; // 128
extern const int8_t cg_CONV39weit[]; // 65536 - Co,H,W,Ci: (512, 1, 1, 128)
extern const int8_t cg_CONV39bias[]; // 512
extern const int8_t cg_DSCONV40weit[]; // 4608 - Co,H,W,Ci: (1, 3, 3, 512)
extern const int8_t cg_DSCONV40bias[]; // 512
extern const int8_t cg_CONV41weit[]; // 65536 - Co,H,W,Ci: (128, 1, 1, 512)
extern const int8_t cg_CONV41bias[]; // 128
extern const int8_t cg_CONV42weit[]; // 32768 - Co,H,W,Ci: (256, 1, 1, 128)
extern const int8_t cg_CONV42bias[]; // 256
extern const int8_t cg_DSCONV43weit[]; // 2304 - Co,H,W,Ci: (1, 3, 3, 256)
extern const int8_t cg_DSCONV43bias[]; // 256
extern const int8_t cg_CONV44weit[]; // 32768 - Co,H,W,Ci: (128, 1, 1, 256)
extern const int8_t cg_CONV44bias[]; // 128
extern const int8_t cg_CONV45weit[]; // 32768 - Co,H,W,Ci: (256, 1, 1, 128)
extern const int8_t cg_CONV45bias[]; // 256
extern const int8_t cg_DSCONV46weit[]; // 2304 - Co,H,W,Ci: (1, 3, 3, 256)
extern const int8_t cg_DSCONV46bias[]; // 256
extern const int8_t cg_CONV47weit[]; // 32768 - Co,H,W,Ci: (128, 1, 1, 256)
extern const int8_t cg_CONV47bias[]; // 128
extern const int8_t cg_CONV48weit[]; // 65536 - Co,H,W,Ci: (512, 1, 1, 128)
extern const int8_t cg_CONV48bias[]; // 512
extern const int8_t cg_DSCONV49weit[]; // 8192 - Co,H,W,Ci: (1, 4, 4, 512)
extern const int8_t cg_DSCONV49bias[]; // 512
extern const int8_t cg_CONV50weit[]; // 65536 - Co,H,W,Ci: (128, 1, 1, 512)
extern const int8_t cg_CONV50bias[]; // 128

#include <stdint.h>
#include "arm_math.h"
#include "arm_nnfunctions.h"
#include "aia_cmsisnn_ext.h"
// #include <model.h>

int32_t img_buffer0[(131072 + 3) / 4];
int32_t img_buffer1[(131072 + 3) / 4];
int32_t img_buffer2[(32768 + 3) / 4];
int32_t col_buf[(32768 + 3) / 4]; // [2, 4, 4, 512, 2]
int8_t out_buf[1]; // CONV50_OY
// total static buffer size: 320.00 kB

// generated RunModel(), returns the output buffer of the last layer
void* RunModel(const void *in_buf, uint8_t normOfs)
{ 
	const uint8_t *p0 = (const uint8_t*) in_buf;
	uint8_t *p = (uint8_t*) img_buffer0;
	int i;
	for (i=0;i<64*64*3; i++)
		p[i] = p0[i] - normOfs;
	// Block 1: Conv2D - conv2d_1
    arm_convolve_HWC_q7_RGB((int8_t*)img_buffer0/*0*/, CONV1_IX/*64*/, CONV1_IC/*3*/, cg_CONV1weit/*weit*/, CONV1_OC/*64*/
        , CONV1_KX/*3*/, CONV1_PX/*0*/, CONV1_SX/*2*/, cg_CONV1bias/*bias*/, CONV1_SB/*7*/, CONV1_SO/*9*/, (int8_t*)img_buffer1/*1*/
        , CONV1_OX/*32*/, (int16_t *) col_buf, NULL);

	// Block 1: Activation - re_lu_1
    aia_relu6_q7((int8_t*)img_buffer1/*1*/, (uint32_t)(ACT1_IX * ACT1_IY * ACT1_IC)/*32x32x64*/, ACT1_AI);

	// Block 2: DepthwiseConv2D - depthwise_conv2d_1
    arm_depthwise_separable_conv_HWC_q7((int8_t*)img_buffer1/*1*/, DSCONV2_IX/*32*/, DSCONV2_IC/*64*/, cg_DSCONV2weit/*weit*/
        , DSCONV2_OC/*64*/, DSCONV2_KX/*3*/, DSCONV2_PX/*1*/, DSCONV2_SX/*1*/, cg_DSCONV2bias/*bias*/, DSCONV2_SB/*4*/
        , DSCONV2_SO/*4*/, (int8_t*)img_buffer0/*0*/, DSCONV2_OX/*32*/, (int16_t *) col_buf, NULL);

	// Block 2: Activation - re_lu_2
    aia_relu6_q7((int8_t*)img_buffer0/*0*/, (uint32_t)(ACT2_IX * ACT2_IY * ACT2_IC)/*32x32x64*/, ACT2_AI);

	// Block 3: Conv2D - conv2d_2
    arm_convolve_1x1_HWC_q7_fast_nonsquare((int8_t*)img_buffer0/*0*/, CONV3_IX/*32*/, CONV3_IY/*32*/, CONV3_IC/*64*/
        , cg_CONV3weit/*weit*/, CONV3_OC/*128*/, CONV3_KX/*1*/, CONV3_KY/*1*/, CONV3_PX/*0*/, CONV3_PY/*0*/, CONV3_SX/*1*/
        , CONV3_SY/*1*/, cg_CONV3bias/*bias*/, CONV3_SB/*5*/, CONV3_SO/*6*/, (int8_t*)img_buffer1/*1*/, CONV3_OX/*32*/
        , CONV3_OY/*32*/, (int16_t *) col_buf, NULL);

	// Block 3: Activation - re_lu_3
    aia_relu6_q7((int8_t*)img_buffer1/*1*/, (uint32_t)(ACT3_IX * ACT3_IY * ACT3_IC)/*32x32x128*/, ACT3_AI);

	// Block 4: DepthwiseConv2D - depthwise_conv2d_2
    arm_depthwise_separable_conv_HWC_q7((int8_t*)img_buffer1/*1*/, DSCONV4_IX/*32*/, DSCONV4_IC/*128*/, cg_DSCONV4weit/*weit*/
        , DSCONV4_OC/*128*/, DSCONV4_KX/*3*/, DSCONV4_PX/*1*/, DSCONV4_SX/*1*/, cg_DSCONV4bias/*bias*/, DSCONV4_SB/*4*/
        , DSCONV4_SO/*5*/, (int8_t*)img_buffer0/*0*/, DSCONV4_OX/*32*/, (int16_t *) col_buf, NULL);

	// Block 4: Activation - re_lu_4
    aia_relu6_q7((int8_t*)img_buffer0/*0*/, (uint32_t)(ACT4_IX * ACT4_IY * ACT4_IC)/*32x32x128*/, ACT4_AI);

	// Block 4: MaxPooling2D - max_pooling2d_1
    arm_maxpool_q7_HWC((int8_t*)img_buffer0/*0*/, MAXP4_IX/*32*/, MAXP4_IC/*128*/, MAXP4_KX/*2*/, 0, MAXP4_SX/*2*/
        , MAXP4_OX/*16*/, NULL, (int8_t*)img_buffer1/*1*/);

	// Block 5: Conv2D - conv2d_3
    arm_convolve_1x1_HWC_q7_fast_nonsquare((int8_t*)img_buffer1/*1*/, CONV5_IX/*16*/, CONV5_IY/*16*/, CONV5_IC/*128*/
        , cg_CONV5weit/*weit*/, CONV5_OC/*64*/, CONV5_KX/*1*/, CONV5_KY/*1*/, CONV5_PX/*0*/, CONV5_PY/*0*/, CONV5_SX/*1*/
        , CONV5_SY/*1*/, cg_CONV5bias/*bias*/, CONV5_SB/*7*/, CONV5_SO/*9*/, (int8_t*)img_buffer0/*0*/, CONV5_OX/*16*/
        , CONV5_OY/*16*/, (int16_t *) col_buf, NULL);

	// Block 6: Conv2D - conv2d_4
    arm_convolve_1x1_HWC_q7_fast_nonsquare((int8_t*)img_buffer0/*0*/, CONV6_IX/*16*/, CONV6_IY/*16*/, CONV6_IC/*64*/
        , cg_CONV6weit/*weit*/, CONV6_OC/*128*/, CONV6_KX/*1*/, CONV6_KY/*1*/, CONV6_PX/*0*/, CONV6_PY/*0*/, CONV6_SX/*1*/
        , CONV6_SY/*1*/, cg_CONV6bias/*bias*/, CONV6_SB/*4*/, CONV6_SO/*7*/, (int8_t*)img_buffer1/*1*/, CONV6_OX/*16*/
        , CONV6_OY/*16*/, (int16_t *) col_buf, NULL);

	// Block 6: Activation - re_lu_5
    aia_relu6_q7((int8_t*)img_buffer1/*1*/, (uint32_t)(ACT6_IX * ACT6_IY * ACT6_IC)/*16x16x128*/, ACT6_AI);

	// Block 7: DepthwiseConv2D - depthwise_conv2d_3
    arm_depthwise_separable_conv_HWC_q7((int8_t*)img_buffer1/*1*/, DSCONV7_IX/*16*/, DSCONV7_IC/*128*/, cg_DSCONV7weit/*weit*/
        , DSCONV7_OC/*128*/, DSCONV7_KX/*3*/, DSCONV7_PX/*1*/, DSCONV7_SX/*1*/, cg_DSCONV7bias/*bias*/, DSCONV7_SB/*2*/
        , DSCONV7_SO/*4*/, (int8_t*)img_buffer2/*2*/, DSCONV7_OX/*16*/, (int16_t *) col_buf, NULL);

	// Block 7: Activation - re_lu_6
    aia_relu6_q7((int8_t*)img_buffer2/*2*/, (uint32_t)(ACT7_IX * ACT7_IY * ACT7_IC)/*16x16x128*/, ACT7_AI);

	// Block 8: Conv2D - conv2d_5
    arm_convolve_1x1_HWC_q7_fast_nonsquare((int8_t*)img_buffer2/*2*/, CONV8_IX/*16*/, CONV8_IY/*16*/, CONV8_IC/*128*/
        , cg_CONV8weit/*weit*/, CONV8_OC/*64*/, CONV8_KX/*1*/, CONV8_KY/*1*/, CONV8_PX/*0*/, CONV8_PY/*0*/, CONV8_SX/*1*/
        , CONV8_SY/*1*/, cg_CONV8bias/*bias*/, CONV8_SB/*6*/, CONV8_SO/*8*/, (int8_t*)img_buffer1/*1*/, CONV8_OX/*16*/
        , CONV8_OY/*16*/, (int16_t *) col_buf, NULL);

	// Block 8: Add - add_1
    aia_HWC_q7_add2((int8_t*)img_buffer2/*2*/, ADD8_IX * ADD8_IY * ADD8_IC/*16x16x64*/, ADD8_SO/*3*/, (int8_t*)img_buffer1/*1*/
        , ADD8_SI0/*4*/, (int8_t*)img_buffer0/*0*/, ADD8_SI1/*3*/);

	// Block 9: Conv2D - conv2d_6
    arm_convolve_1x1_HWC_q7_fast_nonsquare((int8_t*)img_buffer2/*2*/, CONV9_IX/*16*/, CONV9_IY/*16*/, CONV9_IC/*64*/
        , cg_CONV9weit/*weit*/, CONV9_OC/*128*/, CONV9_KX/*1*/, CONV9_KY/*1*/, CONV9_PX/*0*/, CONV9_PY/*0*/, CONV9_SX/*1*/
        , CONV9_SY/*1*/, cg_CONV9bias/*bias*/, CONV9_SB/*5*/, CONV9_SO/*8*/, (int8_t*)img_buffer0/*0*/, CONV9_OX/*16*/
        , CONV9_OY/*16*/, (int16_t *) col_buf, NULL);

	// Block 9: Activation - re_lu_7
    aia_relu6_q7((int8_t*)img_buffer0/*0*/, (uint32_t)(ACT9_IX * ACT9_IY * ACT9_IC)/*16x16x128*/, ACT9_AI);

	// Block 10: DepthwiseConv2D - depthwise_conv2d_4
    arm_depthwise_separable_conv_HWC_q7((int8_t*)img_buffer0/*0*/, DSCONV10_IX/*16*/, DSCONV10_IC/*128*/, cg_DSCONV10weit/*weit*/
        , DSCONV10_OC/*128*/, DSCONV10_KX/*3*/, DSCONV10_PX/*1*/, DSCONV10_SX/*1*/, cg_DSCONV10bias/*bias*/, DSCONV10_SB/*3*/
        , DSCONV10_SO/*5*/, (int8_t*)img_buffer1/*1*/, DSCONV10_OX/*16*/, (int16_t *) col_buf, NULL);

	// Block 10: Activation - re_lu_8
    aia_relu6_q7((int8_t*)img_buffer1/*1*/, (uint32_t)(ACT10_IX * ACT10_IY * ACT10_IC)/*16x16x128*/, ACT10_AI);

	// Block 11: Conv2D - conv2d_7
    arm_convolve_1x1_HWC_q7_fast_nonsquare((int8_t*)img_buffer1/*1*/, CONV11_IX/*16*/, CONV11_IY/*16*/, CONV11_IC/*128*/
        , cg_CONV11weit/*weit*/, CONV11_OC/*64*/, CONV11_KX/*1*/, CONV11_KY/*1*/, CONV11_PX/*0*/, CONV11_PY/*0*/
        , CONV11_SX/*1*/, CONV11_SY/*1*/, cg_CONV11bias/*bias*/, CONV11_SB/*5*/, CONV11_SO/*7*/, (int8_t*)img_buffer0/*0*/
        , CONV11_OX/*16*/, CONV11_OY/*16*/, (int16_t *) col_buf, NULL);

	// Block 11: Add - add_2
    aia_HWC_q7_add2((int8_t*)img_buffer1/*1*/, ADD11_IX * ADD11_IY * ADD11_IC/*16x16x64*/, ADD11_SO/*3*/, (int8_t*)img_buffer0/*0*/
        , ADD11_SI0/*4*/, (int8_t*)img_buffer2/*2*/, ADD11_SI1/*3*/);

	// Block 12: Conv2D - conv2d_8
    arm_convolve_1x1_HWC_q7_fast_nonsquare((int8_t*)img_buffer1/*1*/, CONV12_IX/*16*/, CONV12_IY/*16*/, CONV12_IC/*64*/
        , cg_CONV12weit/*weit*/, CONV12_OC/*128*/, CONV12_KX/*1*/, CONV12_KY/*1*/, CONV12_PX/*0*/, CONV12_PY/*0*/
        , CONV12_SX/*1*/, CONV12_SY/*1*/, cg_CONV12bias/*bias*/, CONV12_SB/*5*/, CONV12_SO/*8*/, (int8_t*)img_buffer0/*0*/
        , CONV12_OX/*16*/, CONV12_OY/*16*/, (int16_t *) col_buf, NULL);

	// Block 12: Activation - re_lu_9
    aia_relu6_q7((int8_t*)img_buffer0/*0*/, (uint32_t)(ACT12_IX * ACT12_IY * ACT12_IC)/*16x16x128*/, ACT12_AI);

	// Block 13: DepthwiseConv2D - depthwise_conv2d_5
    arm_depthwise_separable_conv_HWC_q7((int8_t*)img_buffer0/*0*/, DSCONV13_IX/*16*/, DSCONV13_IC/*128*/, cg_DSCONV13weit/*weit*/
        , DSCONV13_OC/*128*/, DSCONV13_KX/*3*/, DSCONV13_PX/*1*/, DSCONV13_SX/*1*/, cg_DSCONV13bias/*bias*/, DSCONV13_SB/*5*/
        , DSCONV13_SO/*6*/, (int8_t*)img_buffer2/*2*/, DSCONV13_OX/*16*/, (int16_t *) col_buf, NULL);

	// Block 13: Activation - re_lu_10
    aia_relu6_q7((int8_t*)img_buffer2/*2*/, (uint32_t)(ACT13_IX * ACT13_IY * ACT13_IC)/*16x16x128*/, ACT13_AI);

	// Block 14: Conv2D - conv2d_9
    arm_convolve_1x1_HWC_q7_fast_nonsquare((int8_t*)img_buffer2/*2*/, CONV14_IX/*16*/, CONV14_IY/*16*/, CONV14_IC/*128*/
        , cg_CONV14weit/*weit*/, CONV14_OC/*64*/, CONV14_KX/*1*/, CONV14_KY/*1*/, CONV14_PX/*0*/, CONV14_PY/*0*/
        , CONV14_SX/*1*/, CONV14_SY/*1*/, cg_CONV14bias/*bias*/, CONV14_SB/*5*/, CONV14_SO/*7*/, (int8_t*)img_buffer0/*0*/
        , CONV14_OX/*16*/, CONV14_OY/*16*/, (int16_t *) col_buf, NULL);

	// Block 14: Add - add_3
    aia_HWC_q7_add2((int8_t*)img_buffer2/*2*/, ADD14_IX * ADD14_IY * ADD14_IC/*16x16x64*/, ADD14_SO/*3*/, (int8_t*)img_buffer0/*0*/
        , ADD14_SI0/*4*/, (int8_t*)img_buffer1/*1*/, ADD14_SI1/*3*/);

	// Block 15: Conv2D - conv2d_10
    arm_convolve_1x1_HWC_q7_fast_nonsquare((int8_t*)img_buffer2/*2*/, CONV15_IX/*16*/, CONV15_IY/*16*/, CONV15_IC/*64*/
        , cg_CONV15weit/*weit*/, CONV15_OC/*128*/, CONV15_KX/*1*/, CONV15_KY/*1*/, CONV15_PX/*0*/, CONV15_PY/*0*/
        , CONV15_SX/*1*/, CONV15_SY/*1*/, cg_CONV15bias/*bias*/, CONV15_SB/*4*/, CONV15_SO/*8*/, (int8_t*)img_buffer0/*0*/
        , CONV15_OX/*16*/, CONV15_OY/*16*/, (int16_t *) col_buf, NULL);

	// Block 15: Activation - re_lu_11
    aia_relu6_q7((int8_t*)img_buffer0/*0*/, (uint32_t)(ACT15_IX * ACT15_IY * ACT15_IC)/*16x16x128*/, ACT15_AI);

	// Block 16: DepthwiseConv2D - depthwise_conv2d_6
    arm_depthwise_separable_conv_HWC_q7((int8_t*)img_buffer0/*0*/, DSCONV16_IX/*16*/, DSCONV16_IC/*128*/, cg_DSCONV16weit/*weit*/
        , DSCONV16_OC/*128*/, DSCONV16_KX/*3*/, DSCONV16_PX/*1*/, DSCONV16_SX/*1*/, cg_DSCONV16bias/*bias*/, DSCONV16_SB/*5*/
        , DSCONV16_SO/*6*/, (int8_t*)img_buffer1/*1*/, DSCONV16_OX/*16*/, (int16_t *) col_buf, NULL);

	// Block 16: Activation - re_lu_12
    aia_relu6_q7((int8_t*)img_buffer1/*1*/, (uint32_t)(ACT16_IX * ACT16_IY * ACT16_IC)/*16x16x128*/, ACT16_AI);

	// Block 17: Conv2D - conv2d_11
    arm_convolve_1x1_HWC_q7_fast_nonsquare((int8_t*)img_buffer1/*1*/, CONV17_IX/*16*/, CONV17_IY/*16*/, CONV17_IC/*128*/
        , cg_CONV17weit/*weit*/, CONV17_OC/*64*/, CONV17_KX/*1*/, CONV17_KY/*1*/, CONV17_PX/*0*/, CONV17_PY/*0*/
        , CONV17_SX/*1*/, CONV17_SY/*1*/, cg_CONV17bias/*bias*/, CONV17_SB/*6*/, CONV17_SO/*8*/, (int8_t*)img_buffer0/*0*/
        , CONV17_OX/*16*/, CONV17_OY/*16*/, (int16_t *) col_buf, NULL);

	// Block 17: Add - add_4
    aia_HWC_q7_add2((int8_t*)img_buffer1/*1*/, ADD17_IX * ADD17_IY * ADD17_IC/*16x16x64*/, ADD17_SO/*2*/, (int8_t*)img_buffer0/*0*/
        , ADD17_SI0/*3*/, (int8_t*)img_buffer2/*2*/, ADD17_SI1/*3*/);

	// Block 18: Conv2D - conv2d_12
    arm_convolve_1x1_HWC_q7_fast_nonsquare((int8_t*)img_buffer1/*1*/, CONV18_IX/*16*/, CONV18_IY/*16*/, CONV18_IC/*64*/
        , cg_CONV18weit/*weit*/, CONV18_OC/*256*/, CONV18_KX/*1*/, CONV18_KY/*1*/, CONV18_PX/*0*/, CONV18_PY/*0*/
        , CONV18_SX/*1*/, CONV18_SY/*1*/, cg_CONV18bias/*bias*/, CONV18_SB/*4*/, CONV18_SO/*7*/, (int8_t*)img_buffer0/*0*/
        , CONV18_OX/*16*/, CONV18_OY/*16*/, (int16_t *) col_buf, NULL);

	// Block 18: Activation - re_lu_13
    aia_relu6_q7((int8_t*)img_buffer0/*0*/, (uint32_t)(ACT18_IX * ACT18_IY * ACT18_IC)/*16x16x256*/, ACT18_AI);

	// Block 19: DepthwiseConv2D - depthwise_conv2d_7
    arm_depthwise_separable_conv_HWC_q7((int8_t*)img_buffer0/*0*/, DSCONV19_IX/*16*/, DSCONV19_IC/*256*/, cg_DSCONV19weit/*weit*/
        , DSCONV19_OC/*256*/, DSCONV19_KX/*3*/, DSCONV19_PX/*1*/, DSCONV19_SX/*1*/, cg_DSCONV19bias/*bias*/, DSCONV19_SB/*4*/
        , DSCONV19_SO/*6*/, (int8_t*)img_buffer1/*1*/, DSCONV19_OX/*16*/, (int16_t *) col_buf, NULL);

	// Block 19: Activation - re_lu_14
    aia_relu6_q7((int8_t*)img_buffer1/*1*/, (uint32_t)(ACT19_IX * ACT19_IY * ACT19_IC)/*16x16x256*/, ACT19_AI);

	// Block 19: MaxPooling2D - max_pooling2d_2
    arm_maxpool_q7_HWC((int8_t*)img_buffer1/*1*/, MAXP19_IX/*16*/, MAXP19_IC/*256*/, MAXP19_KX/*2*/, 0, MAXP19_SX/*2*/
        , MAXP19_OX/*8*/, NULL, (int8_t*)img_buffer0/*0*/);

	// Block 20: Conv2D - conv2d_13
    arm_convolve_1x1_HWC_q7_fast_nonsquare((int8_t*)img_buffer0/*0*/, CONV20_IX/*8*/, CONV20_IY/*8*/, CONV20_IC/*256*/
        , cg_CONV20weit/*weit*/, CONV20_OC/*128*/, CONV20_KX/*1*/, CONV20_KY/*1*/, CONV20_PX/*0*/, CONV20_PY/*0*/
        , CONV20_SX/*1*/, CONV20_SY/*1*/, cg_CONV20bias/*bias*/, CONV20_SB/*7*/, CONV20_SO/*8*/, (int8_t*)img_buffer1/*1*/
        , CONV20_OX/*8*/, CONV20_OY/*8*/, (int16_t *) col_buf, NULL);

	// Block 21: Conv2D - conv2d_14
    arm_convolve_1x1_HWC_q7_fast_nonsquare((int8_t*)img_buffer1/*1*/, CONV21_IX/*8*/, CONV21_IY/*8*/, CONV21_IC/*128*/
        , cg_CONV21weit/*weit*/, CONV21_OC/*256*/, CONV21_KX/*1*/, CONV21_KY/*1*/, CONV21_PX/*0*/, CONV21_PY/*0*/
        , CONV21_SX/*1*/, CONV21_SY/*1*/, cg_CONV21bias/*bias*/, CONV21_SB/*6*/, CONV21_SO/*9*/, (int8_t*)img_buffer0/*0*/
        , CONV21_OX/*8*/, CONV21_OY/*8*/, (int16_t *) col_buf, NULL);

	// Block 21: Activation - re_lu_15
    aia_relu6_q7((int8_t*)img_buffer0/*0*/, (uint32_t)(ACT21_IX * ACT21_IY * ACT21_IC)/*8x8x256*/, ACT21_AI);

	// Block 22: DepthwiseConv2D - depthwise_conv2d_8
    arm_depthwise_separable_conv_HWC_q7((int8_t*)img_buffer0/*0*/, DSCONV22_IX/*8*/, DSCONV22_IC/*256*/, cg_DSCONV22weit/*weit*/
        , DSCONV22_OC/*256*/, DSCONV22_KX/*3*/, DSCONV22_PX/*1*/, DSCONV22_SX/*1*/, cg_DSCONV22bias/*bias*/, DSCONV22_SB/*5*/
        , DSCONV22_SO/*6*/, (int8_t*)img_buffer1/*1*/, DSCONV22_OX/*8*/, (int16_t *) col_buf, NULL);

	// Block 22: Activation - re_lu_16
    aia_relu6_q7((int8_t*)img_buffer1/*1*/, (uint32_t)(ACT22_IX * ACT22_IY * ACT22_IC)/*8x8x256*/, ACT22_AI);

	// Block 23: Conv2D - conv2d_15
    arm_convolve_1x1_HWC_q7_fast_nonsquare((int8_t*)img_buffer1/*1*/, CONV23_IX/*8*/, CONV23_IY/*8*/, CONV23_IC/*256*/
        , cg_CONV23weit/*weit*/, CONV23_OC/*128*/, CONV23_KX/*1*/, CONV23_KY/*1*/, CONV23_PX/*0*/, CONV23_PY/*0*/
        , CONV23_SX/*1*/, CONV23_SY/*1*/, cg_CONV23bias/*bias*/, CONV23_SB/*7*/, CONV23_SO/*8*/, (int8_t*)img_buffer0/*0*/
        , CONV23_OX/*8*/, CONV23_OY/*8*/, (int16_t *) col_buf, NULL);

	// Block 24: Conv2D - conv2d_16
    arm_convolve_1x1_HWC_q7_fast_nonsquare((int8_t*)img_buffer0/*0*/, CONV24_IX/*8*/, CONV24_IY/*8*/, CONV24_IC/*128*/
        , cg_CONV24weit/*weit*/, CONV24_OC/*256*/, CONV24_KX/*1*/, CONV24_KY/*1*/, CONV24_PX/*0*/, CONV24_PY/*0*/
        , CONV24_SX/*1*/, CONV24_SY/*1*/, cg_CONV24bias/*bias*/, CONV24_SB/*5*/, CONV24_SO/*9*/, (int8_t*)img_buffer1/*1*/
        , CONV24_OX/*8*/, CONV24_OY/*8*/, (int16_t *) col_buf, NULL);

	// Block 24: Activation - re_lu_17
    aia_relu6_q7((int8_t*)img_buffer1/*1*/, (uint32_t)(ACT24_IX * ACT24_IY * ACT24_IC)/*8x8x256*/, ACT24_AI);

	// Block 25: DepthwiseConv2D - depthwise_conv2d_9
    arm_depthwise_separable_conv_HWC_q7((int8_t*)img_buffer1/*1*/, DSCONV25_IX/*8*/, DSCONV25_IC/*256*/, cg_DSCONV25weit/*weit*/
        , DSCONV25_OC/*256*/, DSCONV25_KX/*3*/, DSCONV25_PX/*1*/, DSCONV25_SX/*1*/, cg_DSCONV25bias/*bias*/, DSCONV25_SB/*3*/
        , DSCONV25_SO/*5*/, (int8_t*)img_buffer2/*2*/, DSCONV25_OX/*8*/, (int16_t *) col_buf, NULL);

	// Block 25: Activation - re_lu_18
    aia_relu6_q7((int8_t*)img_buffer2/*2*/, (uint32_t)(ACT25_IX * ACT25_IY * ACT25_IC)/*8x8x256*/, ACT25_AI);

	// Block 26: Conv2D - conv2d_17
    arm_convolve_1x1_HWC_q7_fast_nonsquare((int8_t*)img_buffer2/*2*/, CONV26_IX/*8*/, CONV26_IY/*8*/, CONV26_IC/*256*/
        , cg_CONV26weit/*weit*/, CONV26_OC/*128*/, CONV26_KX/*1*/, CONV26_KY/*1*/, CONV26_PX/*0*/, CONV26_PY/*0*/
        , CONV26_SX/*1*/, CONV26_SY/*1*/, cg_CONV26bias/*bias*/, CONV26_SB/*6*/, CONV26_SO/*8*/, (int8_t*)img_buffer1/*1*/
        , CONV26_OX/*8*/, CONV26_OY/*8*/, (int16_t *) col_buf, NULL);

	// Block 26: Add - add_5
    aia_HWC_q7_add2((int8_t*)img_buffer2/*2*/, ADD26_IX * ADD26_IY * ADD26_IC/*8x8x128*/, ADD26_SO/*3*/, (int8_t*)img_buffer1/*1*/
        , ADD26_SI0/*4*/, (int8_t*)img_buffer0/*0*/, ADD26_SI1/*4*/);

	// Block 27: Conv2D - conv2d_18
    arm_convolve_1x1_HWC_q7_fast_nonsquare((int8_t*)img_buffer2/*2*/, CONV27_IX/*8*/, CONV27_IY/*8*/, CONV27_IC/*128*/
        , cg_CONV27weit/*weit*/, CONV27_OC/*256*/, CONV27_KX/*1*/, CONV27_KY/*1*/, CONV27_PX/*0*/, CONV27_PY/*0*/
        , CONV27_SX/*1*/, CONV27_SY/*1*/, cg_CONV27bias/*bias*/, CONV27_SB/*4*/, CONV27_SO/*8*/, (int8_t*)img_buffer0/*0*/
        , CONV27_OX/*8*/, CONV27_OY/*8*/, (int16_t *) col_buf, NULL);

	// Block 27: Activation - re_lu_19
    aia_relu6_q7((int8_t*)img_buffer0/*0*/, (uint32_t)(ACT27_IX * ACT27_IY * ACT27_IC)/*8x8x256*/, ACT27_AI);

	// Block 28: DepthwiseConv2D - depthwise_conv2d_10
    arm_depthwise_separable_conv_HWC_q7((int8_t*)img_buffer0/*0*/, DSCONV28_IX/*8*/, DSCONV28_IC/*256*/, cg_DSCONV28weit/*weit*/
        , DSCONV28_OC/*256*/, DSCONV28_KX/*3*/, DSCONV28_PX/*1*/, DSCONV28_SX/*1*/, cg_DSCONV28bias/*bias*/, DSCONV28_SB/*3*/
        , DSCONV28_SO/*5*/, (int8_t*)img_buffer1/*1*/, DSCONV28_OX/*8*/, (int16_t *) col_buf, NULL);

	// Block 28: Activation - re_lu_20
    aia_relu6_q7((int8_t*)img_buffer1/*1*/, (uint32_t)(ACT28_IX * ACT28_IY * ACT28_IC)/*8x8x256*/, ACT28_AI);

	// Block 29: Conv2D - conv2d_19
    arm_convolve_1x1_HWC_q7_fast_nonsquare((int8_t*)img_buffer1/*1*/, CONV29_IX/*8*/, CONV29_IY/*8*/, CONV29_IC/*256*/
        , cg_CONV29weit/*weit*/, CONV29_OC/*128*/, CONV29_KX/*1*/, CONV29_KY/*1*/, CONV29_PX/*0*/, CONV29_PY/*0*/
        , CONV29_SX/*1*/, CONV29_SY/*1*/, cg_CONV29bias/*bias*/, CONV29_SB/*6*/, CONV29_SO/*8*/, (int8_t*)img_buffer0/*0*/
        , CONV29_OX/*8*/, CONV29_OY/*8*/, (int16_t *) col_buf, NULL);

	// Block 29: Add - add_6
    aia_HWC_q7_add2((int8_t*)img_buffer1/*1*/, ADD29_IX * ADD29_IY * ADD29_IC/*8x8x128*/, ADD29_SO/*3*/, (int8_t*)img_buffer0/*0*/
        , ADD29_SI0/*4*/, (int8_t*)img_buffer2/*2*/, ADD29_SI1/*3*/);

	// Block 30: Conv2D - conv2d_20
    arm_convolve_1x1_HWC_q7_fast_nonsquare((int8_t*)img_buffer1/*1*/, CONV30_IX/*8*/, CONV30_IY/*8*/, CONV30_IC/*128*/
        , cg_CONV30weit/*weit*/, CONV30_OC/*256*/, CONV30_KX/*1*/, CONV30_KY/*1*/, CONV30_PX/*0*/, CONV30_PY/*0*/
        , CONV30_SX/*1*/, CONV30_SY/*1*/, cg_CONV30bias/*bias*/, CONV30_SB/*4*/, CONV30_SO/*8*/, (int8_t*)img_buffer0/*0*/
        , CONV30_OX/*8*/, CONV30_OY/*8*/, (int16_t *) col_buf, NULL);

	// Block 30: Activation - re_lu_21
    aia_relu6_q7((int8_t*)img_buffer0/*0*/, (uint32_t)(ACT30_IX * ACT30_IY * ACT30_IC)/*8x8x256*/, ACT30_AI);

	// Block 31: DepthwiseConv2D - depthwise_conv2d_11
    arm_depthwise_separable_conv_HWC_q7((int8_t*)img_buffer0/*0*/, DSCONV31_IX/*8*/, DSCONV31_IC/*256*/, cg_DSCONV31weit/*weit*/
        , DSCONV31_OC/*256*/, DSCONV31_KX/*3*/, DSCONV31_PX/*1*/, DSCONV31_SX/*1*/, cg_DSCONV31bias/*bias*/, DSCONV31_SB/*3*/
        , DSCONV31_SO/*5*/, (int8_t*)img_buffer2/*2*/, DSCONV31_OX/*8*/, (int16_t *) col_buf, NULL);

	// Block 31: Activation - re_lu_22
    aia_relu6_q7((int8_t*)img_buffer2/*2*/, (uint32_t)(ACT31_IX * ACT31_IY * ACT31_IC)/*8x8x256*/, ACT31_AI);

	// Block 32: Conv2D - conv2d_21
    arm_convolve_1x1_HWC_q7_fast_nonsquare((int8_t*)img_buffer2/*2*/, CONV32_IX/*8*/, CONV32_IY/*8*/, CONV32_IC/*256*/
        , cg_CONV32weit/*weit*/, CONV32_OC/*128*/, CONV32_KX/*1*/, CONV32_KY/*1*/, CONV32_PX/*0*/, CONV32_PY/*0*/
        , CONV32_SX/*1*/, CONV32_SY/*1*/, cg_CONV32bias/*bias*/, CONV32_SB/*6*/, CONV32_SO/*8*/, (int8_t*)img_buffer0/*0*/
        , CONV32_OX/*8*/, CONV32_OY/*8*/, (int16_t *) col_buf, NULL);

	// Block 32: Add - add_7
    aia_HWC_q7_add2((int8_t*)img_buffer2/*2*/, ADD32_IX * ADD32_IY * ADD32_IC/*8x8x128*/, ADD32_SO/*3*/, (int8_t*)img_buffer0/*0*/
        , ADD32_SI0/*4*/, (int8_t*)img_buffer1/*1*/, ADD32_SI1/*3*/);

	// Block 33: Conv2D - conv2d_22
    arm_convolve_1x1_HWC_q7_fast_nonsquare((int8_t*)img_buffer2/*2*/, CONV33_IX/*8*/, CONV33_IY/*8*/, CONV33_IC/*128*/
        , cg_CONV33weit/*weit*/, CONV33_OC/*256*/, CONV33_KX/*1*/, CONV33_KY/*1*/, CONV33_PX/*0*/, CONV33_PY/*0*/
        , CONV33_SX/*1*/, CONV33_SY/*1*/, cg_CONV33bias/*bias*/, CONV33_SB/*4*/, CONV33_SO/*8*/, (int8_t*)img_buffer0/*0*/
        , CONV33_OX/*8*/, CONV33_OY/*8*/, (int16_t *) col_buf, NULL);

	// Block 33: Activation - re_lu_23
    aia_relu6_q7((int8_t*)img_buffer0/*0*/, (uint32_t)(ACT33_IX * ACT33_IY * ACT33_IC)/*8x8x256*/, ACT33_AI);

	// Block 34: DepthwiseConv2D - depthwise_conv2d_12
    arm_depthwise_separable_conv_HWC_q7((int8_t*)img_buffer0/*0*/, DSCONV34_IX/*8*/, DSCONV34_IC/*256*/, cg_DSCONV34weit/*weit*/
        , DSCONV34_OC/*256*/, DSCONV34_KX/*3*/, DSCONV34_PX/*1*/, DSCONV34_SX/*1*/, cg_DSCONV34bias/*bias*/, DSCONV34_SB/*4*/
        , DSCONV34_SO/*6*/, (int8_t*)img_buffer1/*1*/, DSCONV34_OX/*8*/, (int16_t *) col_buf, NULL);

	// Block 34: Activation - re_lu_24
    aia_relu6_q7((int8_t*)img_buffer1/*1*/, (uint32_t)(ACT34_IX * ACT34_IY * ACT34_IC)/*8x8x256*/, ACT34_AI);

	// Block 35: Conv2D - conv2d_23
    arm_convolve_1x1_HWC_q7_fast_nonsquare((int8_t*)img_buffer1/*1*/, CONV35_IX/*8*/, CONV35_IY/*8*/, CONV35_IC/*256*/
        , cg_CONV35weit/*weit*/, CONV35_OC/*128*/, CONV35_KX/*1*/, CONV35_KY/*1*/, CONV35_PX/*0*/, CONV35_PY/*0*/
        , CONV35_SX/*1*/, CONV35_SY/*1*/, cg_CONV35bias/*bias*/, CONV35_SB/*6*/, CONV35_SO/*8*/, (int8_t*)img_buffer0/*0*/
        , CONV35_OX/*8*/, CONV35_OY/*8*/, (int16_t *) col_buf, NULL);

	// Block 35: Add - add_8
    aia_HWC_q7_add2((int8_t*)img_buffer1/*1*/, ADD35_IX * ADD35_IY * ADD35_IC/*8x8x128*/, ADD35_SO/*3*/, (int8_t*)img_buffer0/*0*/
        , ADD35_SI0/*4*/, (int8_t*)img_buffer2/*2*/, ADD35_SI1/*3*/);

	// Block 36: Conv2D - conv2d_24
    arm_convolve_1x1_HWC_q7_fast_nonsquare((int8_t*)img_buffer1/*1*/, CONV36_IX/*8*/, CONV36_IY/*8*/, CONV36_IC/*128*/
        , cg_CONV36weit/*weit*/, CONV36_OC/*256*/, CONV36_KX/*1*/, CONV36_KY/*1*/, CONV36_PX/*0*/, CONV36_PY/*0*/
        , CONV36_SX/*1*/, CONV36_SY/*1*/, cg_CONV36bias/*bias*/, CONV36_SB/*5*/, CONV36_SO/*9*/, (int8_t*)img_buffer0/*0*/
        , CONV36_OX/*8*/, CONV36_OY/*8*/, (int16_t *) col_buf, NULL);

	// Block 36: Activation - re_lu_25
    aia_relu6_q7((int8_t*)img_buffer0/*0*/, (uint32_t)(ACT36_IX * ACT36_IY * ACT36_IC)/*8x8x256*/, ACT36_AI);

	// Block 37: DepthwiseConv2D - depthwise_conv2d_13
    arm_depthwise_separable_conv_HWC_q7((int8_t*)img_buffer0/*0*/, DSCONV37_IX/*8*/, DSCONV37_IC/*256*/, cg_DSCONV37weit/*weit*/
        , DSCONV37_OC/*256*/, DSCONV37_KX/*3*/, DSCONV37_PX/*1*/, DSCONV37_SX/*1*/, cg_DSCONV37bias/*bias*/, DSCONV37_SB/*4*/
        , DSCONV37_SO/*6*/, (int8_t*)img_buffer2/*2*/, DSCONV37_OX/*8*/, (int16_t *) col_buf, NULL);

	// Block 37: Activation - re_lu_26
    aia_relu6_q7((int8_t*)img_buffer2/*2*/, (uint32_t)(ACT37_IX * ACT37_IY * ACT37_IC)/*8x8x256*/, ACT37_AI);

	// Block 38: Conv2D - conv2d_25
    arm_convolve_1x1_HWC_q7_fast_nonsquare((int8_t*)img_buffer2/*2*/, CONV38_IX/*8*/, CONV38_IY/*8*/, CONV38_IC/*256*/
        , cg_CONV38weit/*weit*/, CONV38_OC/*128*/, CONV38_KX/*1*/, CONV38_KY/*1*/, CONV38_PX/*0*/, CONV38_PY/*0*/
        , CONV38_SX/*1*/, CONV38_SY/*1*/, cg_CONV38bias/*bias*/, CONV38_SB/*6*/, CONV38_SO/*7*/, (int8_t*)img_buffer0/*0*/
        , CONV38_OX/*8*/, CONV38_OY/*8*/, (int16_t *) col_buf, NULL);

	// Block 38: Add - add_9
    aia_HWC_q7_add2((int8_t*)img_buffer2/*2*/, ADD38_IX * ADD38_IY * ADD38_IC/*8x8x128*/, ADD38_SO/*2*/, (int8_t*)img_buffer0/*0*/
        , ADD38_SI0/*4*/, (int8_t*)img_buffer1/*1*/, ADD38_SI1/*3*/);

	// Block 39: Conv2D - conv2d_26
    arm_convolve_1x1_HWC_q7_fast_nonsquare((int8_t*)img_buffer2/*2*/, CONV39_IX/*8*/, CONV39_IY/*8*/, CONV39_IC/*128*/
        , cg_CONV39weit/*weit*/, CONV39_OC/*512*/, CONV39_KX/*1*/, CONV39_KY/*1*/, CONV39_PX/*0*/, CONV39_PY/*0*/
        , CONV39_SX/*1*/, CONV39_SY/*1*/, cg_CONV39bias/*bias*/, CONV39_SB/*4*/, CONV39_SO/*8*/, (int8_t*)img_buffer0/*0*/
        , CONV39_OX/*8*/, CONV39_OY/*8*/, (int16_t *) col_buf, NULL);

	// Block 39: Activation - re_lu_27
    aia_relu6_q7((int8_t*)img_buffer0/*0*/, (uint32_t)(ACT39_IX * ACT39_IY * ACT39_IC)/*8x8x512*/, ACT39_AI);

	// Block 40: DepthwiseConv2D - depthwise_conv2d_14
    arm_depthwise_separable_conv_HWC_q7((int8_t*)img_buffer0/*0*/, DSCONV40_IX/*8*/, DSCONV40_IC/*512*/, cg_DSCONV40weit/*weit*/
        , DSCONV40_OC/*512*/, DSCONV40_KX/*3*/, DSCONV40_PX/*1*/, DSCONV40_SX/*1*/, cg_DSCONV40bias/*bias*/, DSCONV40_SB/*4*/
        , DSCONV40_SO/*6*/, (int8_t*)img_buffer1/*1*/, DSCONV40_OX/*8*/, (int16_t *) col_buf, NULL);

	// Block 40: Activation - re_lu_28
    aia_relu6_q7((int8_t*)img_buffer1/*1*/, (uint32_t)(ACT40_IX * ACT40_IY * ACT40_IC)/*8x8x512*/, ACT40_AI);

	// Block 40: MaxPooling2D - max_pooling2d_3
    arm_maxpool_q7_HWC((int8_t*)img_buffer1/*1*/, MAXP40_IX/*8*/, MAXP40_IC/*512*/, MAXP40_KX/*2*/, 0, MAXP40_SX/*2*/
        , MAXP40_OX/*4*/, NULL, (int8_t*)img_buffer0/*0*/);

	// Block 41: Conv2D - conv2d_27
    arm_convolve_1x1_HWC_q7_fast_nonsquare((int8_t*)img_buffer0/*0*/, CONV41_IX/*4*/, CONV41_IY/*4*/, CONV41_IC/*512*/
        , cg_CONV41weit/*weit*/, CONV41_OC/*128*/, CONV41_KX/*1*/, CONV41_KY/*1*/, CONV41_PX/*0*/, CONV41_PY/*0*/
        , CONV41_SX/*1*/, CONV41_SY/*1*/, cg_CONV41bias/*bias*/, CONV41_SB/*7*/, CONV41_SO/*9*/, (int8_t*)img_buffer1/*1*/
        , CONV41_OX/*4*/, CONV41_OY/*4*/, (int16_t *) col_buf, NULL);

	// Block 42: Conv2D - conv2d_28
    arm_convolve_1x1_HWC_q7_fast_nonsquare((int8_t*)img_buffer1/*1*/, CONV42_IX/*4*/, CONV42_IY/*4*/, CONV42_IC/*128*/
        , cg_CONV42weit/*weit*/, CONV42_OC/*256*/, CONV42_KX/*1*/, CONV42_KY/*1*/, CONV42_PX/*0*/, CONV42_PY/*0*/
        , CONV42_SX/*1*/, CONV42_SY/*1*/, cg_CONV42bias/*bias*/, CONV42_SB/*6*/, CONV42_SO/*9*/, (int8_t*)img_buffer0/*0*/
        , CONV42_OX/*4*/, CONV42_OY/*4*/, (int16_t *) col_buf, NULL);

	// Block 42: Activation - re_lu_29
    aia_relu6_q7((int8_t*)img_buffer0/*0*/, (uint32_t)(ACT42_IX * ACT42_IY * ACT42_IC)/*4x4x256*/, ACT42_AI);

	// Block 43: DepthwiseConv2D - depthwise_conv2d_15
    arm_depthwise_separable_conv_HWC_q7((int8_t*)img_buffer0/*0*/, DSCONV43_IX/*4*/, DSCONV43_IC/*256*/, cg_DSCONV43weit/*weit*/
        , DSCONV43_OC/*256*/, DSCONV43_KX/*3*/, DSCONV43_PX/*1*/, DSCONV43_SX/*1*/, cg_DSCONV43bias/*bias*/, DSCONV43_SB/*3*/
        , DSCONV43_SO/*5*/, (int8_t*)img_buffer1/*1*/, DSCONV43_OX/*4*/, (int16_t *) col_buf, NULL);

	// Block 43: Activation - re_lu_30
    aia_relu6_q7((int8_t*)img_buffer1/*1*/, (uint32_t)(ACT43_IX * ACT43_IY * ACT43_IC)/*4x4x256*/, ACT43_AI);

	// Block 44: Conv2D - conv2d_29
    arm_convolve_1x1_HWC_q7_fast_nonsquare((int8_t*)img_buffer1/*1*/, CONV44_IX/*4*/, CONV44_IY/*4*/, CONV44_IC/*256*/
        , cg_CONV44weit/*weit*/, CONV44_OC/*128*/, CONV44_KX/*1*/, CONV44_KY/*1*/, CONV44_PX/*0*/, CONV44_PY/*0*/
        , CONV44_SX/*1*/, CONV44_SY/*1*/, cg_CONV44bias/*bias*/, CONV44_SB/*5*/, CONV44_SO/*7*/, (int8_t*)img_buffer0/*0*/
        , CONV44_OX/*4*/, CONV44_OY/*4*/, (int16_t *) col_buf, NULL);

	// Block 45: Conv2D - conv2d_30
    arm_convolve_1x1_HWC_q7_fast_nonsquare((int8_t*)img_buffer0/*0*/, CONV45_IX/*4*/, CONV45_IY/*4*/, CONV45_IC/*128*/
        , cg_CONV45weit/*weit*/, CONV45_OC/*256*/, CONV45_KX/*1*/, CONV45_KY/*1*/, CONV45_PX/*0*/, CONV45_PY/*0*/
        , CONV45_SX/*1*/, CONV45_SY/*1*/, cg_CONV45bias/*bias*/, CONV45_SB/*5*/, CONV45_SO/*9*/, (int8_t*)img_buffer1/*1*/
        , CONV45_OX/*4*/, CONV45_OY/*4*/, (int16_t *) col_buf, NULL);

	// Block 45: Activation - re_lu_31
    aia_relu6_q7((int8_t*)img_buffer1/*1*/, (uint32_t)(ACT45_IX * ACT45_IY * ACT45_IC)/*4x4x256*/, ACT45_AI);

	// Block 46: DepthwiseConv2D - depthwise_conv2d_16
    arm_depthwise_separable_conv_HWC_q7((int8_t*)img_buffer1/*1*/, DSCONV46_IX/*4*/, DSCONV46_IC/*256*/, cg_DSCONV46weit/*weit*/
        , DSCONV46_OC/*256*/, DSCONV46_KX/*3*/, DSCONV46_PX/*1*/, DSCONV46_SX/*1*/, cg_DSCONV46bias/*bias*/, DSCONV46_SB/*4*/
        , DSCONV46_SO/*6*/, (int8_t*)img_buffer2/*2*/, DSCONV46_OX/*4*/, (int16_t *) col_buf, NULL);

	// Block 46: Activation - re_lu_32
    aia_relu6_q7((int8_t*)img_buffer2/*2*/, (uint32_t)(ACT46_IX * ACT46_IY * ACT46_IC)/*4x4x256*/, ACT46_AI);

	// Block 47: Conv2D - conv2d_31
    arm_convolve_1x1_HWC_q7_fast_nonsquare((int8_t*)img_buffer2/*2*/, CONV47_IX/*4*/, CONV47_IY/*4*/, CONV47_IC/*256*/
        , cg_CONV47weit/*weit*/, CONV47_OC/*128*/, CONV47_KX/*1*/, CONV47_KY/*1*/, CONV47_PX/*0*/, CONV47_PY/*0*/
        , CONV47_SX/*1*/, CONV47_SY/*1*/, cg_CONV47bias/*bias*/, CONV47_SB/*6*/, CONV47_SO/*7*/, (int8_t*)img_buffer1/*1*/
        , CONV47_OX/*4*/, CONV47_OY/*4*/, (int16_t *) col_buf, NULL);

	// Block 47: Add - add_10
    aia_HWC_q7_add2((int8_t*)img_buffer2/*2*/, ADD47_IX * ADD47_IY * ADD47_IC/*4x4x128*/, ADD47_SO/*4*/, (int8_t*)img_buffer1/*1*/
        , ADD47_SI0/*5*/, (int8_t*)img_buffer0/*0*/, ADD47_SI1/*4*/);

	// Block 48: Conv2D - conv2d_32
    arm_convolve_1x1_HWC_q7_fast_nonsquare((int8_t*)img_buffer2/*2*/, CONV48_IX/*4*/, CONV48_IY/*4*/, CONV48_IC/*128*/
        , cg_CONV48weit/*weit*/, CONV48_OC/*512*/, CONV48_KX/*1*/, CONV48_KY/*1*/, CONV48_PX/*0*/, CONV48_PY/*0*/
        , CONV48_SX/*1*/, CONV48_SY/*1*/, cg_CONV48bias/*bias*/, CONV48_SB/*5*/, CONV48_SO/*9*/, (int8_t*)img_buffer0/*0*/
        , CONV48_OX/*4*/, CONV48_OY/*4*/, (int16_t *) col_buf, NULL);

	// Block 48: Activation - re_lu_33
    aia_relu6_q7((int8_t*)img_buffer0/*0*/, (uint32_t)(ACT48_IX * ACT48_IY * ACT48_IC)/*4x4x512*/, ACT48_AI);

	// Block 49: DepthwiseConv2D - depthwise_conv2d_17
    arm_depthwise_separable_conv_HWC_q7((int8_t*)img_buffer0/*0*/, DSCONV49_IX/*4*/, DSCONV49_IC/*512*/, cg_DSCONV49weit/*weit*/
        , DSCONV49_OC/*512*/, DSCONV49_KX/*4*/, DSCONV49_PX/*0*/, DSCONV49_SX/*1*/, cg_DSCONV49bias/*bias*/, DSCONV49_SB/*5*/
        , DSCONV49_SO/*5*/, (int8_t*)img_buffer1/*1*/, DSCONV49_OX/*1*/, (int16_t *) col_buf, NULL);

	// Block 50: Conv2D - conv2d_33
    arm_convolve_1x1_HWC_q7_fast_nonsquare((int8_t*)img_buffer1/*1*/, CONV50_IX/*1*/, CONV50_IY/*1*/, CONV50_IC/*512*/
        , cg_CONV50weit/*weit*/, CONV50_OC/*128*/, CONV50_KX/*1*/, CONV50_KY/*1*/, CONV50_PX/*0*/, CONV50_PY/*0*/
        , CONV50_SX/*1*/, CONV50_SY/*1*/, cg_CONV50bias/*bias*/, CONV50_SB/*5*/, CONV50_SO/*9*/, (int8_t*)img_buffer0/*0*/
        , CONV50_OX/*1*/, CONV50_OY/*1*/, (int16_t *) col_buf, NULL);

	return (q7_t*)img_buffer0;
}

