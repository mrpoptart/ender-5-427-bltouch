/**
 * Made with Marlin Bitmap Converter
 * https://marlinfw.org/tools/u8glib/converter.html
 *
 * This bitmap from the file 'pyf.png'
 */
#pragma once

#define STATUS_LOGO_WIDTH 40

const unsigned char status_logo_bmp[] PROGMEM = {
  B00011001,B11000011,B10011100,B10100010,B11111000,
  B00100101,B00100010,B01010010,B10110010,B00100000,
  B00001001,B00100010,B01010010,B10101010,B00100000,
  B00000101,B00100011,B10011100,B10101010,B00100000,
  B00100101,B00100010,B00010100,B10100110,B00100000,
  B00011001,B11000010,B00010010,B10100010,B00100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B01000100,B11001001,B01110000,B00000000,
  B00000000,B00101001,B00101001,B01001000,B00000000,
  B00000000,B00101001,B00101001,B01001000,B00000000,
  B00000000,B00010001,B00101001,B01110000,B00000000,
  B00000000,B00010001,B00101001,B01010000,B00000000,
  B00000000,B00010000,B11000110,B01001000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,
  B00011101,B11011101,B00010100,B01001100,B01110000,
  B00010001,B00010001,B00010110,B01010000,B10000000,
  B00011001,B10011001,B00010101,B01010000,B01000000,
  B00010001,B00010001,B00010101,B01010110,B00100000,
  B00010001,B00010001,B00010100,B11010010,B00010000,
  B00010001,B11011101,B11010100,B01001100,B11100000
};



//
// Use default bitmaps
//
#define STATUS_HOTEND_ANIM
#define STATUS_BED_ANIM
#define STATUS_HEATERS_XSPACE   20
#if HOTENDS < 2
  #define STATUS_HEATERS_X      48
  #define STATUS_BED_X          73
#else
  #define STATUS_HEATERS_X      40
  #define STATUS_BED_X          81
#endif
