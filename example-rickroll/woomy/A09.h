// ///////////////////////
// //                   //
// //  File Attributes  //
// //                   //
// ///////////////////////

// Filename: A09.png
// Pixel Width: 160px
// Pixel Height: 128px

// /////////////////
// //             //
// //  Constants  //
// //             //
// /////////////////

const int A09_tile_map_size = 0x0140;
const int A09_tile_map_width = 0x14;
const int A09_tile_map_height = 0x10;

const int A09_tile_data_size = 0x0570;
const int A09_tile_count = 0x0140;

// ////////////////
// //            //
// //  Map Data  //
// //            //
// ////////////////

const unsigned char A09_map_data[] ={
  0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x06,0x06,0x07,0x08,0x09,0x06,0x06,0x06,0x06,
  0x06,0x06,0x06,0x06,0x0A,0x0B,0x0B,0x0C,0x04,0x0D,0x06,0x06,0x06,0x0E,0x0F,0x10,
  0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x0B,0x0B,0x0B,0x11,0x04,0x12,0x06,0x06,
  0x06,0x13,0x14,0x15,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x0B,0x0B,0x0B,0x16,
  0x04,0x17,0x06,0x06,0x06,0x18,0x14,0x19,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,
  0x0B,0x0B,0x0B,0x1A,0x04,0x1B,0x06,0x06,0x06,0x1C,0x14,0x1D,0x06,0x06,0x06,0x06,
  0x06,0x06,0x06,0x06,0x0B,0x0B,0x0B,0x1E,0x04,0x1F,0x06,0x06,0x06,0x20,0x21,0x06,
  0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x0B,0x0B,0x0B,0x22,0x04,0x23,0x06,0x06,
  0x06,0x24,0x25,0x26,0x27,0x28,0x06,0x06,0x06,0x06,0x06,0x06,0x0B,0x0B,0x0B,0x29,
  0x04,0x04,0x2A,0x06,0x06,0x2B,0x2C,0x2D,0x25,0x2E,0x2F,0x06,0x06,0x06,0x06,0x06,
  0x0B,0x0B,0x0B,0x30,0x04,0x04,0x31,0x06,0x06,0x06,0x06,0x32,0x33,0x25,0x25,0x34,
  0x35,0x06,0x06,0x06,0x0B,0x0B,0x36,0x37,0x04,0x04,0x38,0x06,0x06,0x06,0x06,0x06,
  0x39,0x33,0x25,0x25,0x3A,0x3B,0x06,0x06,0x3C,0x3D,0x3E,0x37,0x04,0x04,0x3F,0x06,
  0x06,0x06,0x06,0x06,0x06,0x40,0x25,0x25,0x25,0x41,0x06,0x06,0x04,0x42,0x43,0x37,
  0x04,0x04,0x44,0x06,0x06,0x06,0x06,0x06,0x06,0x45,0x46,0x25,0x25,0x47,0x06,0x06,
  0x04,0x04,0x48,0x49,0x04,0x04,0x4A,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x4B,0x25,
  0x4C,0x4D,0x06,0x06,0x04,0x04,0x04,0x4E,0x04,0x04,0x4A,0x06,0x06,0x06,0x06,0x06,
  0x06,0x4F,0x50,0x51,0x06,0x06,0x06,0x52,0x04,0x04,0x04,0x53,0x04,0x04,0x4A,0x06,
  0x06,0x06,0x06,0x06,0x06,0x06,0x54,0x06,0x06,0x06,0x55,0x56,0x04,0x04,0x04,0x53,
  0x04,0x04,0x4A,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06
};

// /////////////////
// //             //
// //  Tile Data  //
// //             //
// /////////////////

const unsigned char A09_tile_data[] ={
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x00,0xFC,0x00,0xF0,0x00,0xE0,0x00,
  0xFF,0x00,0xF0,0x00,0xC0,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0x00,0x3F,0x00,0x03,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x00,0x00,0x00,0x00,
  0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x7F,0xFF,0x7F,0xFF,0x7F,0xFF,0x7F,0xBF,0x7F,0xBF,0x7F,0xBF,0x7F,0xBF,0x7F,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xC0,0xFF,0xC0,0xFF,0xC0,0xFF,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x0F,0xFF,0x01,0xFF,0x01,0xFF,0x01,0xFF,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xF0,0x00,0xE0,0x00,0xC0,0x00,0x80,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,0x60,0x1F,0xE0,0x1F,
  0xBF,0x7F,0xFF,0x3F,0xFF,0x3F,0xFF,0x3F,0xDF,0x3F,0xDF,0x3F,0xDF,0x3F,0xDF,0x3F,
  0xE0,0xFF,0xE0,0xFF,0xE0,0xFF,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x7F,0xFF,0x07,0xFF,0x07,0xFF,0x07,0xFF,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x61,0x1E,0x61,0x1E,0x61,0x1E,0x61,0x1E,0xE1,0x1E,0xE1,0x1E,0xE1,0x1E,0xE1,0x1E,
  0xDF,0x3F,0xFF,0x1F,0xFF,0x1F,0xFF,0x1F,0xFF,0x1F,0xEF,0x1F,0xEF,0x1F,0xEF,0x1F,
  0xE0,0xFF,0xF0,0xFF,0xF0,0xFF,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x7F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xE1,0x1E,0xE1,0x1E,0xE1,0x1E,0xE1,0x1E,0xE1,0x1E,0xE1,0x1E,0xE1,0x1E,0x61,0x1E,
  0xEF,0x1F,0xEF,0x1F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xF7,0x0F,0xF7,0x0F,0xF7,0x0F,
  0xE0,0xFF,0xF0,0xFF,0xF0,0xFF,0xF8,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x3F,0xFF,0x3F,0xFF,0x3F,0xFF,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x61,0x1E,0xC1,0x3E,0xC1,0x3E,0x41,0x3E,0xC1,0x3E,0x41,0x3E,0x45,0x3A,0x41,0x3E,
  0xF7,0x0F,0xFF,0x07,0xFF,0x07,0xFB,0x07,0xFB,0x07,0xFB,0x07,0xFB,0x07,0xFB,0x07,
  0xE0,0xFF,0xE0,0xFF,0xF0,0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x7F,0xFF,0x7F,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xC1,0x3E,0x45,0x3A,0x41,0x3E,0x41,0x3E,0x41,0x3E,0x41,0x3E,0x41,0x3E,0x41,0x3E,
  0xFF,0x03,0xFF,0x03,0xFF,0x03,0xFD,0x03,0xFD,0x03,0xFD,0x03,0xFD,0x03,0xFF,0x01,
  0xF0,0xFF,0xF8,0xFF,0xF8,0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xE3,0xFF,0x00,0xFF,
  0x41,0x3E,0x41,0x3E,0x41,0x3E,0x41,0x3E,0xC1,0x3E,0x41,0x3E,0x41,0x3E,0xC1,0x3E,
  0xFF,0x01,0xFF,0x01,0xFE,0x01,0xFE,0x01,0xFE,0x01,0xFE,0x01,0xFF,0x00,0xFF,0x00,
  0xF0,0xFF,0xF0,0xFF,0xF0,0xFF,0xF8,0xFF,0xFE,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x3F,0xFF,0x1F,0xFF,0x07,0xFF,0x03,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x03,0xFF,0x00,0xFF,0x00,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x03,0xFF,0x03,0xFF,
  0xC1,0x3E,0xC3,0x3C,0xC3,0x3C,0xC3,0x3C,0xC3,0x3C,0xC3,0x3C,0xC3,0x3C,0xC3,0x3C,
  0x7F,0xFF,0x7F,0xFF,0x7F,0xFF,0x7F,0xFF,0xFF,0x7F,0xBF,0x7F,0xBF,0x7F,0xBF,0x7F,
  0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x80,0xFF,0xE0,0xFF,0xF0,0xFF,0xFC,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x80,0xFF,0xC0,0xFF,
  0x01,0xFF,0x01,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0x3F,0xFF,0x1F,0xFF,0x0F,0xFF,0x03,0xFF,
  0xC3,0x3C,0xC3,0x3C,0xC3,0x3C,0xC3,0x3C,0xC3,0x3C,0x83,0x7C,0x83,0x7C,0x83,0x7C,
  0xBF,0x7F,0xBF,0x7F,0xBF,0x7F,0xBF,0x7F,0xDF,0x3F,0xDF,0x3F,0xDF,0x3F,0xDF,0x3F,
  0xF0,0xFF,0xF8,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x80,0xFF,0xC0,0xFF,0xE0,0xFF,0xF0,0xFF,
  0xFF,0xFF,0x3F,0xFF,0x0F,0xFF,0x03,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0x0F,0xFF,0x07,0xFF,0x03,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,
  0x83,0x7C,0x83,0x7C,0x83,0x7C,0x83,0x7C,0x83,0x7C,0x83,0x7C,0x83,0x7C,0x83,0x7C,
  0xDF,0x3F,0xDF,0x3F,0xEF,0x1F,0xEF,0x1F,0xEF,0x1F,0xEF,0x1F,0xEF,0x1F,0xEF,0x1F,
  0xF8,0xFF,0xFC,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x01,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0x7F,0xFF,0x3F,0xFF,0x1F,0xFF,0x1F,0xFF,0x0F,0xFF,
  0x00,0x00,0x80,0x00,0x80,0x00,0xC0,0x00,0xF8,0x00,0xFC,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0xE0,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x01,0x00,
  0xEF,0x1F,0xEF,0x1F,0xE7,0x1F,0xE7,0x1F,0xE7,0x1F,0xE7,0x1F,0xF1,0x0F,0xF1,0x0F,
  0xF8,0xFF,0xFE,0xFF,0xFE,0xFF,0xFF,0xFF,0xFE,0xFF,0xFC,0xFF,0xF0,0xFF,0xF0,0xFF,
  0x0F,0xFF,0x07,0xFF,0x07,0xFF,0x07,0xFF,0x07,0xFF,0x07,0xFF,0x03,0xFF,0x03,0xFF,
  0xC0,0x00,0xE0,0x00,0xF0,0x00,0xF0,0x00,0xF8,0x00,0xF8,0x00,0xFC,0x00,0xFE,0x00,
  0x01,0x00,0x01,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x83,0x00,0x17,0x00,0x47,0x00,
  0xF7,0x0F,0xF7,0x0F,0xF7,0x0F,0xE7,0x1F,0xE7,0x1F,0xE7,0x1F,0xE7,0x1F,0xE7,0x1F,
  0xF0,0xFF,0xF8,0xFF,0xF8,0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xC0,0xFF,0xF0,0xFF,0xF0,0xFF,
  0x07,0xFF,0x07,0xFF,0x07,0xFF,0x07,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x1F,0xFF,
  0x5F,0x00,0x7F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x83,0x7C,0x83,0x7C,0x83,0x7C,0x83,0x7C,0x83,0x7C,0x83,0x7C,0x87,0x78,0x83,0x7C,
  0xF7,0x0F,0xF7,0x0F,0xF7,0x0F,0xF7,0x0F,0xF7,0x0F,0xF7,0x0F,0xF7,0x0F,0xF7,0x0F,
  0xF8,0xFF,0xF8,0xFF,0xF0,0xFF,0xE0,0xFF,0xE0,0xFF,0xC0,0xFF,0x80,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x0F,0xFF,0x3F,0xFF,0x7F,0xFF,0x7F,0xFF,0xFF,0xFF,
  0x3F,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x83,0x7C,0x83,0x7C,0x87,0x78,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,
  0xFE,0xFF,0xFC,0xFF,0xFC,0xFF,0xFC,0xFF,0xFC,0xFF,0xFC,0xFF,0xFE,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x80,0xFF,
  0x01,0xFF,0x01,0xFF,0x03,0xFF,0x07,0xFF,0x0F,0xFF,0x3F,0xFF,0x3F,0xFF,0x7F,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE3,0xFF,
  0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,
  0xE1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xF0,0xFF,0xE0,0xFF,0xCC,0xF3,0xDC,0xE3,0xC1,0xFF,0xFF,0xFF,
  0xDD,0xE3,0xBD,0xC3,0x79,0x87,0x37,0xCF,0x5F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF
};
