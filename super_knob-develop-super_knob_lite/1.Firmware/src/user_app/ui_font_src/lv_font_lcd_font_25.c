/*******************************************************************************
 * Size: 25 px
 * Bpp: 4
 * Opts: 
 ******************************************************************************/


#include "lvgl.h"

#ifndef LV_FONT_LCD_FONT_25
#define LV_FONT_LCD_FONT_25 1
#endif

#if LV_FONT_LCD_FONT_25

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0030 "0" */
    0x1, 0xae, 0x9f, 0xff, 0x2e, 0xc4, 0x0, 0x2e,
    0xff, 0xcb, 0xfa, 0xbf, 0xff, 0x70, 0xbf, 0xff,
    0xce, 0xc7, 0xcf, 0xff, 0xf1, 0xde, 0xee, 0x77,
    0x35, 0x41, 0x11, 0x10, 0xff, 0xff, 0x40, 0x0,
    0xf, 0xff, 0xf4, 0xff, 0xff, 0x40, 0x0, 0xf,
    0xff, 0xf4, 0x47, 0x77, 0x20, 0x0, 0xb, 0xcc,
    0x90, 0xdd, 0xff, 0x40, 0x0, 0xf, 0xfd, 0xa5,
    0xfc, 0x7c, 0x30, 0x0, 0xc, 0xb7, 0xf5, 0xf4,
    0xbc, 0x40, 0x0, 0xe, 0x4b, 0xc5, 0x1f, 0xf7,
    0x30, 0x0, 0x1, 0xff, 0x74, 0x15, 0x54, 0x10,
    0x0, 0x6, 0xcc, 0xb0, 0xad, 0xf3, 0x40, 0x0,
    0xa, 0xcf, 0x25, 0xf7, 0xf, 0x40, 0x0, 0xf,
    0x91, 0xf5, 0xfb, 0xbf, 0x40, 0x0, 0xf, 0xbb,
    0xf5, 0xce, 0xfb, 0x40, 0x0, 0xb, 0xef, 0xb4,
    0xab, 0xbb, 0x7, 0x77, 0x32, 0x11, 0x11, 0xcf,
    0xff, 0x1d, 0xff, 0x4f, 0xff, 0xf1, 0x2e, 0xff,
    0x2b, 0xf3, 0xcf, 0xff, 0x60, 0x2, 0xae, 0x2f,
    0x9d, 0xce, 0xc4, 0x0,

    /* U+0031 "1" */
    0x1, 0xae, 0x9f, 0xff, 0x22, 0xef, 0xfc, 0xbf,
    0xab, 0xbf, 0xff, 0xce, 0xc7, 0xc7, 0x77, 0x78,
    0xe9, 0x10, 0x0, 0x0, 0x7f, 0xff, 0xc0, 0x0,
    0x7, 0xff, 0xfc, 0x0, 0x0, 0x1b, 0xcc, 0x0,
    0x0, 0x7, 0x5e, 0x2c, 0x0, 0x0, 0x5c, 0x20,
    0x0, 0x0, 0x7, 0xce, 0xc, 0x0, 0x0, 0x5d,
    0xff, 0x20, 0x0, 0x1, 0x67, 0x71, 0x0, 0x0,
    0x70, 0xf9, 0xb0, 0x0, 0x7, 0xf1, 0xcd, 0x0,
    0x0, 0x7e, 0xbb, 0xd0, 0x0, 0x6, 0xcf, 0xe9,
    0x0, 0x0, 0x13, 0x33, 0x10, 0x0, 0x5, 0xdf,
    0xf5, 0x0, 0x0, 0x7b, 0xf3, 0xc0, 0x0, 0x7,
    0xf8, 0xdc,

    /* U+0032 "2" */
    0x1, 0xae, 0x9f, 0xff, 0x2e, 0xc4, 0x0, 0x2e,
    0xff, 0xcb, 0xfa, 0xbf, 0xff, 0x70, 0xbf, 0xff,
    0xce, 0xc7, 0xcf, 0xff, 0xf1, 0xde, 0xee, 0x77,
    0x35, 0x41, 0x11, 0x10, 0xff, 0xff, 0x40, 0x0,
    0xf, 0xff, 0xf4, 0xff, 0xff, 0x40, 0x0, 0xf,
    0xff, 0xf4, 0x0, 0x0, 0x0, 0x0, 0x2b, 0xcc,
    0x90, 0x0, 0x0, 0x0, 0x4, 0xcf, 0xfd, 0x10,
    0x0, 0x0, 0x0, 0x10, 0xc, 0xb2, 0x0, 0x0,
    0x0, 0x1, 0xe1, 0xce, 0x30, 0x0, 0x0, 0x0,
    0xc, 0xff, 0x35, 0x0, 0x0, 0x0, 0x0, 0x25,
    0x55, 0x20, 0x0, 0x0, 0x0, 0x7, 0xb0, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0x5f, 0xbf, 0x21, 0x0,
    0x0, 0x0, 0x3, 0xbf, 0xbe, 0x10, 0x0, 0x0,
    0x0, 0x2e, 0xfb, 0xa3, 0x0, 0x0, 0x0, 0x0,
    0x9b, 0xbb, 0x7, 0x77, 0x37, 0x77, 0x72, 0xdf,
    0xff, 0x1d, 0xff, 0x5f, 0xff, 0xf2, 0xbe, 0xff,
    0x2c, 0xf3, 0xcf, 0xff, 0xa4, 0xfc, 0xce, 0x2f,
    0x9d, 0xce, 0xdb, 0xf5,

    /* U+0033 "3" */
    0x1, 0xae, 0x9f, 0xff, 0x2e, 0xc4, 0x0, 0x2e,
    0xff, 0xcb, 0xfa, 0xbf, 0xff, 0x70, 0xbf, 0xff,
    0xce, 0xc7, 0xcf, 0xff, 0xf1, 0xde, 0xee, 0x77,
    0x35, 0x41, 0x11, 0x10, 0xff, 0xff, 0x40, 0x0,
    0xf, 0xff, 0xf4, 0xff, 0xff, 0x40, 0x0, 0xf,
    0xff, 0xf4, 0x0, 0x0, 0x0, 0x0, 0x2b, 0xcc,
    0x90, 0x0, 0x0, 0x0, 0x4, 0xcf, 0xfd, 0x10,
    0x0, 0x0, 0x0, 0x10, 0xc, 0xb0, 0x0, 0x0,
    0x0, 0x1, 0xe1, 0xce, 0x4c, 0x0, 0x0, 0x0,
    0xc, 0xff, 0x31, 0xff, 0x90, 0x0, 0x0, 0x3,
    0x33, 0x16, 0xcc, 0xb0, 0x0, 0x0, 0x0, 0x0,
    0xa, 0xcf, 0x25, 0x0, 0x0, 0x0, 0x0, 0xf,
    0x91, 0xf5, 0x3, 0x70, 0x0, 0x0, 0xf, 0xbb,
    0xf5, 0x2e, 0xf5, 0x0, 0x0, 0xb, 0xef, 0xb4,
    0x9b, 0xbb, 0x7, 0x77, 0x32, 0x11, 0x11, 0xcf,
    0xff, 0x1d, 0xff, 0x4f, 0xff, 0xf1, 0x2e, 0xff,
    0x2b, 0xf3, 0xcf, 0xff, 0x60, 0x2, 0xae, 0x2f,
    0x9d, 0xce, 0xc4, 0x0,

    /* U+0034 "4" */
    0xfc, 0xce, 0x40, 0x0, 0x0, 0x0, 0x0, 0xbe,
    0xff, 0x40, 0x0, 0x0, 0x0, 0x0, 0xcf, 0xff,
    0x40, 0x0, 0x0, 0x0, 0x0, 0xde, 0xee, 0x40,
    0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0x40, 0x0,
    0x0, 0x0, 0x0, 0xff, 0xff, 0x40, 0x0, 0x0,
    0x0, 0x0, 0x47, 0x77, 0x20, 0x0, 0x6, 0x66,
    0x60, 0xdd, 0xff, 0x40, 0x0, 0xf, 0xfe, 0xc5,
    0xfc, 0x7c, 0x5, 0x25, 0x4c, 0xb7, 0xf5, 0xf4,
    0xbc, 0x2c, 0xe1, 0xce, 0x4c, 0xc5, 0xf, 0xf7,
    0x1d, 0xff, 0x20, 0xff, 0x83, 0x22, 0x22, 0x12,
    0x22, 0x15, 0xcc, 0xb0, 0x0, 0x0, 0x0, 0x0,
    0xb, 0xbf, 0x35, 0x0, 0x0, 0x0, 0x0, 0xf,
    0x90, 0xf5, 0x0, 0x0, 0x0, 0x0, 0xf, 0xbb,
    0xe5, 0x0, 0x0, 0x0, 0x0, 0xb, 0xef, 0xb4,
    0x0, 0x0, 0x0, 0x0, 0x4, 0x33, 0x31, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xff, 0xf2, 0x0, 0x0,
    0x0, 0x0, 0xf, 0xff, 0xa4, 0x0, 0x0, 0x0,
    0x0, 0xe, 0xdb, 0xf5,

    /* U+0035 "5" */
    0xfc, 0xce, 0x9f, 0xff, 0x2e, 0xdb, 0xf5, 0xbe,
    0xff, 0xcb, 0xfa, 0xbf, 0xff, 0xa4, 0xcf, 0xff,
    0xce, 0xc6, 0xcf, 0xff, 0xf2, 0xde, 0xee, 0x77,
    0x37, 0x67, 0x77, 0x72, 0xff, 0xff, 0x40, 0x0,
    0x0, 0x0, 0x0, 0xff, 0xff, 0x40, 0x0, 0x0,
    0x0, 0x0, 0x47, 0x77, 0x10, 0x0, 0x0, 0x0,
    0x0, 0xb, 0xff, 0x26, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x8c, 0x2c, 0x45, 0x45, 0x41, 0x0, 0x0,
    0xd, 0x2c, 0xe0, 0xce, 0x4c, 0x0, 0x0, 0x2,
    0x1d, 0xff, 0x31, 0xff, 0xa0, 0x0, 0x0, 0x2,
    0x22, 0x15, 0xcc, 0xb0, 0x0, 0x0, 0x0, 0x0,
    0xb, 0xcf, 0x25, 0x0, 0x0, 0x0, 0x0, 0xf,
    0x90, 0xf5, 0x3, 0x70, 0x0, 0x0, 0xf, 0xbb,
    0xf5, 0x2e, 0xf5, 0x0, 0x0, 0xb, 0xef, 0xb4,
    0x9b, 0xbb, 0x7, 0x77, 0x32, 0x11, 0x11, 0xcf,
    0xff, 0x1d, 0xff, 0x4f, 0xff, 0xf1, 0x2e, 0xff,
    0x2b, 0xf3, 0xcf, 0xff, 0x60, 0x2, 0xae, 0x2f,
    0x9d, 0xce, 0xc4, 0x0,

    /* U+0036 "6" */
    0x1, 0xae, 0x9f, 0xff, 0x2e, 0xc4, 0x0, 0x2e,
    0xff, 0xcb, 0xfa, 0xbf, 0xff, 0x70, 0xbf, 0xff,
    0xce, 0xc7, 0xcf, 0xff, 0xf1, 0xde, 0xee, 0x77,
    0x35, 0x41, 0x11, 0x10, 0xff, 0xff, 0x40, 0x0,
    0xf, 0xff, 0xf4, 0xff, 0xff, 0x40, 0x0, 0xf,
    0xff, 0xf4, 0x47, 0x77, 0x20, 0x0, 0x0, 0x0,
    0x0, 0xce, 0xff, 0x40, 0x0, 0x0, 0x0, 0x0,
    0xfb, 0xff, 0x40, 0x0, 0x0, 0x0, 0x0, 0xf7,
    0x2c, 0x2c, 0x88, 0xac, 0x55, 0x0, 0xad, 0xf3,
    0x2b, 0xfa, 0xaa, 0xdf, 0x40, 0x26, 0x65, 0x19,
    0x99, 0x26, 0xcc, 0xb0, 0x4f, 0xf3, 0x40, 0x0,
    0x5, 0xff, 0x54, 0xf2, 0x5f, 0x40, 0x0, 0xf,
    0x46, 0xe5, 0xfb, 0xaf, 0x40, 0x0, 0xf, 0xca,
    0xf5, 0xce, 0xfb, 0x40, 0x0, 0xc, 0xef, 0xb5,
    0xab, 0xbb, 0x7, 0x77, 0x32, 0x11, 0x11, 0xcf,
    0xff, 0x1d, 0xff, 0x4f, 0xff, 0xf1, 0x2e, 0xff,
    0x2b, 0xf3, 0xcf, 0xff, 0x60, 0x2, 0xae, 0x2f,
    0x9d, 0xce, 0xc4, 0x0,

    /* U+0037 "7" */
    0xfc, 0xce, 0x9f, 0xff, 0x2e, 0xdb, 0xf5, 0xbe,
    0xff, 0xcb, 0xfa, 0xbf, 0xff, 0xb4, 0xcf, 0xff,
    0xce, 0xc7, 0xcf, 0xff, 0xf2, 0x77, 0x77, 0x57,
    0x35, 0x41, 0x11, 0x10, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xff, 0xf4, 0x0, 0x0, 0x0, 0x0, 0xf,
    0xff, 0xf4, 0x0, 0x0, 0x0, 0x0, 0x2b, 0xcc,
    0x90, 0x0, 0x0, 0x0, 0x4, 0xcf, 0xfd, 0x10,
    0x0, 0x0, 0x0, 0x10, 0xc, 0xb2, 0x0, 0x0,
    0x0, 0x1, 0xe1, 0xce, 0x30, 0x0, 0x0, 0x0,
    0xc, 0xff, 0x25, 0x0, 0x0, 0x0, 0x0, 0x16,
    0x66, 0x10, 0x0, 0x0, 0x0, 0x0, 0x70, 0xfa,
    0xa0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0x1b, 0xd0,
    0x0, 0x0, 0x0, 0x0, 0x7e, 0xbb, 0xd0, 0x0,
    0x0, 0x0, 0x0, 0x6c, 0xfe, 0x90, 0x0, 0x0,
    0x0, 0x0, 0x13, 0x33, 0x10, 0x0, 0x0, 0x0,
    0x0, 0x5d, 0xff, 0x50, 0x0, 0x0, 0x0, 0x0,
    0x7b, 0xf3, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x7f,
    0x8d, 0xc0, 0x0, 0x0,

    /* U+0038 "8" */
    0x1, 0xae, 0x9f, 0xff, 0x2e, 0xc4, 0x0, 0x2e,
    0xff, 0xcb, 0xfa, 0xbf, 0xff, 0x70, 0xbf, 0xff,
    0xce, 0xc7, 0xcf, 0xff, 0xf1, 0xde, 0xee, 0x77,
    0x35, 0x41, 0x11, 0x10, 0xff, 0xff, 0x40, 0x0,
    0xf, 0xff, 0xf4, 0xff, 0xff, 0x40, 0x0, 0xf,
    0xff, 0xf4, 0x47, 0x77, 0x10, 0x0, 0xb, 0xcc,
    0x90, 0xb, 0xff, 0x26, 0x3, 0xbf, 0xfd, 0x10,
    0x0, 0x7c, 0x2c, 0x40, 0xc, 0xb0, 0x0, 0x8,
    0xbc, 0x2c, 0xe0, 0xce, 0x4c, 0x0, 0x4f, 0xf7,
    0x1d, 0xff, 0x31, 0xff, 0xa0, 0x16, 0x64, 0x12,
    0x22, 0x15, 0xcc, 0xb0, 0xac, 0xf3, 0x40, 0x0,
    0xb, 0xcf, 0x25, 0xf8, 0xf, 0x40, 0x0, 0xf,
    0x90, 0xf5, 0xfb, 0xbf, 0x40, 0x0, 0xf, 0xbb,
    0xf5, 0xce, 0xfb, 0x40, 0x0, 0xb, 0xef, 0xb4,
    0xab, 0xbb, 0x7, 0x77, 0x32, 0x11, 0x11, 0xcf,
    0xff, 0x1d, 0xff, 0x4f, 0xff, 0xf1, 0x2e, 0xff,
    0x2b, 0xf3, 0xcf, 0xff, 0x60, 0x2, 0xae, 0x2f,
    0x9d, 0xce, 0xc4, 0x0,

    /* U+0039 "9" */
    0x1, 0xae, 0x9f, 0xff, 0x2e, 0xc4, 0x0, 0x2e,
    0xff, 0xcb, 0xfa, 0xbf, 0xff, 0x70, 0xbf, 0xff,
    0xce, 0xc7, 0xcf, 0xff, 0xf1, 0xde, 0xee, 0x77,
    0x35, 0x41, 0x11, 0x10, 0xff, 0xff, 0x40, 0x0,
    0xf, 0xff, 0xf4, 0xff, 0xff, 0x40, 0x0, 0xf,
    0xff, 0xf4, 0x47, 0x77, 0x10, 0x0, 0xb, 0xcc,
    0x90, 0xb, 0xff, 0x26, 0x0, 0xf, 0xfd, 0xa5,
    0x0, 0x8c, 0x2c, 0x45, 0x4c, 0xb7, 0xf5, 0x0,
    0xd, 0x2c, 0xe0, 0xce, 0x4c, 0xc5, 0x0, 0x2,
    0x1d, 0xff, 0x31, 0xff, 0x83, 0x0, 0x0, 0x2,
    0x22, 0x15, 0xcc, 0xb0, 0x0, 0x0, 0x0, 0x0,
    0xb, 0xcf, 0x25, 0x0, 0x0, 0x0, 0x0, 0xf,
    0x90, 0xf5, 0x3, 0x70, 0x0, 0x0, 0xf, 0xbb,
    0xf5, 0x2e, 0xf5, 0x0, 0x0, 0xb, 0xef, 0xb4,
    0x9b, 0xbb, 0x7, 0x77, 0x32, 0x11, 0x11, 0xcf,
    0xff, 0x1d, 0xff, 0x4f, 0xff, 0xf1, 0x2e, 0xff,
    0x2b, 0xf3, 0xcf, 0xff, 0x60, 0x2, 0xae, 0x2f,
    0x9d, 0xce, 0xc4, 0x0,

    /* U+003A ":" */
    0x7e, 0xa8, 0xc6, 0xbf, 0xc8, 0x17, 0x77, 0x30,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x1, 0x77, 0x73, 0x5d, 0xff, 0x57, 0xbf,
    0x3c, 0x7f, 0x8d, 0xc0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 260, .box_w = 14, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 140, .adv_w = 240, .box_w = 9, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 230, .adv_w = 253, .box_w = 14, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 370, .adv_w = 259, .box_w = 14, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 510, .adv_w = 255, .box_w = 14, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 650, .adv_w = 253, .box_w = 14, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 790, .adv_w = 256, .box_w = 14, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 930, .adv_w = 253, .box_w = 14, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1070, .adv_w = 259, .box_w = 14, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1210, .adv_w = 260, .box_w = 14, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1350, .adv_w = 262, .box_w = 5, .box_h = 11, .ofs_x = 4, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 48, .range_length = 11, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t lv_font_lcd_font_25 = {
#else
lv_font_t lv_font_lcd_font_25 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 20,          /*The maximum line height required by the font*/
    .base_line = 0,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -3,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if LV_FONT_LCD_FONT_25*/

