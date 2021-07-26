// ///////////////////////
// //                   //
// //  File Attributes  //
// //                   //
// ///////////////////////

// Filename: A48.png
// Pixel Width: 160px
// Pixel Height: 128px

// /////////////////
// //             //
// //  Constants  //
// //             //
// /////////////////

const int A48_tile_map_size = 0x0140;
const int A48_tile_map_width = 0x14;
const int A48_tile_map_height = 0x10;

const int A48_tile_data_size = 0x0FE0;
const int A48_tile_count = 0x0140;

// ////////////////
// //            //
// //  Map Data  //
// //            //
// ////////////////

const unsigned char A48_map_data[] ={
  0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,
  0x10,0x11,0x12,0x13,0x14,0x15,0x15,0x16,0x17,0x18,0x19,0x1A,0x1B,0x1C,0x1D,0x1E,
  0x1F,0x20,0x21,0x22,0x23,0x24,0x25,0x26,0x27,0x15,0x28,0x15,0x29,0x2A,0x2B,0x2C,
  0x2D,0x2E,0x2F,0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x15,0x15,0x39,0x3A,
  0x3B,0x3C,0x3D,0x3E,0x3F,0x40,0x41,0x42,0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x4A,
  0x15,0x15,0x15,0x4B,0x4C,0x4D,0x4E,0x4F,0x50,0x51,0x52,0x53,0x54,0x55,0x56,0x57,
  0x58,0x59,0x5A,0x5B,0x15,0x15,0x15,0x5C,0x5D,0x5E,0x15,0x5F,0x60,0x61,0x62,0x63,
  0x64,0x65,0x66,0x67,0x68,0x69,0x6A,0x6B,0x15,0x6C,0x5D,0x6D,0x15,0x6E,0x6F,0x70,
  0x71,0x72,0x73,0x74,0x75,0x76,0x77,0x78,0x79,0x7A,0x7B,0x7C,0x15,0x7D,0x7E,0x7F,
  0x15,0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8A,0x8B,0x7B,0x8C,0x8D,
  0x15,0x15,0x8E,0x8F,0x15,0x15,0x90,0x91,0x92,0x93,0x94,0x15,0x95,0x96,0x97,0x98,
  0x99,0x9A,0x9B,0x9C,0x15,0x15,0x9D,0x9E,0x9F,0xA0,0x6F,0xA1,0xA2,0xA3,0xA4,0xA5,
  0xA6,0xA7,0xA8,0xA9,0xAA,0xAB,0xAC,0xAD,0x15,0xAE,0x15,0xAF,0xB0,0xB1,0xB2,0xB3,
  0xB4,0xAD,0xB5,0xB6,0xB7,0xB8,0xB9,0xBA,0xBB,0xBC,0xBD,0xBE,0x15,0xBF,0x15,0xC0,
  0xC1,0xC2,0xC3,0xC4,0xAD,0xAD,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,
  0x15,0xCF,0x7E,0xD0,0xD1,0xD2,0xD3,0xD4,0xAD,0xAD,0xAD,0xAD,0xD5,0xD6,0xD7,0xD8,
  0xD9,0xDA,0xDB,0xAD,0x15,0x15,0x15,0xDC,0xDD,0xDE,0xDF,0xE0,0xAD,0xAD,0xAD,0xAD,
  0xAD,0xAD,0xE1,0xE2,0xE3,0xE4,0xE5,0xE6,0x15,0x15,0xE7,0xE8,0x15,0x15,0xE9,0xEA,
  0xAD,0xEB,0xAD,0xAD,0xAD,0xAD,0xEC,0xED,0xEE,0xEF,0xF0,0xF1,0x15,0x15,0xF2,0xF3,
  0x15,0x15,0xF4,0xF5,0x7B,0xF6,0xAD,0xF7,0xAD,0xF8,0xF9,0xFA,0xEE,0xFB,0xFC,0xFD
};

// /////////////////
// //             //
// //  Tile Data  //
// //             //
// /////////////////

const unsigned char A48_tile_data[] ={
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x3F,0xC0,0x82,0x00,0x7F,0x80,0x38,0xC7,
  0xFF,0x00,0xEF,0x10,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x0F,0x00,0x81,0x7E,0x7F,0x80,
  0xFF,0x00,0xF7,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xC7,0x38,0x7E,0x00,0xFF,0x00,
  0xFF,0x00,0xFD,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x30,0x00,0xDF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xBF,0x00,0xFF,0x00,0xEF,0x00,0x84,0x00,0xFF,0x00,
  0xFF,0x00,0xBF,0x00,0xFE,0x00,0xFC,0x00,0xFE,0x00,0xFA,0x00,0x38,0x00,0xFF,0x00,
  0xFF,0x00,0xFE,0x00,0xDF,0x00,0x7F,0x00,0x7F,0x00,0xFF,0x00,0x8F,0x00,0xFF,0x00,
  0x01,0x00,0x01,0x00,0x02,0x00,0xE0,0x00,0xE0,0x00,0x50,0x00,0x20,0x00,0xFF,0x00,
  0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x01,0x00,0x02,0x00,0x04,0x00,0xF2,0x01,
  0x00,0x00,0x00,0x00,0x40,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x02,0x00,0x00,0x06,0x01,0x08,0x00,0x10,0x20,0x00,0x00,0x00,0xA0,0x00,0x60,0x80,
  0x00,0x00,0x00,0x00,0x00,0x00,0x81,0x00,0x40,0x02,0x20,0x04,0x9A,0x60,0x0E,0x00,
  0x27,0x00,0x47,0x00,0x8B,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x40,0x3F,0x0F,0x00,
  0xF8,0x00,0xF9,0x00,0xF0,0x00,0xF0,0x00,0xF0,0x00,0xF0,0x00,0x00,0xFF,0x10,0xE0,
  0x00,0x00,0x00,0x00,0x80,0x00,0x40,0x00,0x31,0x00,0x02,0x00,0x73,0x8C,0x00,0x04,
  0x10,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x03,0x00,0x80,0x00,0x80,0x00,
  0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x08,0x90,0x00,0x00,0xFF,0x20,0x58,0x04,0x20,
  0x40,0x00,0x20,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x01,0x00,0x00,
  0x07,0x00,0x07,0x08,0x13,0x00,0x21,0x00,0x00,0x40,0x8F,0x70,0x20,0x80,0x10,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x3F,0x00,0x1F,0x00,
  0xBF,0x40,0xFF,0x00,0x7F,0x80,0x7F,0x80,0x6F,0x90,0xEF,0x10,0x7F,0x80,0x7F,0x80,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x00,0xFD,0x00,0xFF,0x00,
  0xFF,0x00,0xFE,0x00,0xBF,0x00,0x7F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x00,
  0xFF,0x00,0xFF,0x00,0xBF,0x00,0xFF,0x00,0xFF,0x00,0xDF,0x00,0xBF,0x00,0xEF,0x00,
  0xCF,0x00,0xCF,0x00,0x8F,0x00,0xFF,0x00,0xFF,0x00,0xFB,0x00,0xF7,0x00,0xFF,0x00,
  0xE8,0x00,0xE4,0x00,0xC0,0x00,0xE0,0x00,0xF0,0x00,0xF8,0x00,0xF8,0x00,0xF8,0x00,
  0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x08,0x00,0x14,0x00,0x00,0x00,
  0x10,0x80,0x00,0x00,0x02,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x07,0x00,0x87,0x00,0x07,0x00,0x1F,0x00,0x0F,0x00,0x0F,0x00,0x0F,0x00,0x4F,0x00,
  0x78,0x80,0xF4,0x00,0xF2,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,
  0x00,0x08,0x00,0x10,0x20,0x00,0x40,0x00,0x00,0x80,0x80,0x00,0x40,0x00,0x20,0x00,
  0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x04,0x00,0x00,0x00,0x00,0x00,
  0x00,0x40,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x84,0x00,0x48,0x00,0x10,0x00,0x00,0x00,0x10,0x20,0x48,0x00,0x04,0x00,
  0x04,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x1F,0x00,0x1F,0x00,0xBF,0x00,0xE0,0x00,0x40,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,
  0x3F,0xC0,0x7F,0x80,0x3F,0xC0,0x3F,0xC0,0x7F,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x1F,0x00,0x1F,0x00,
  0xF7,0x00,0xFB,0x00,0xFF,0x00,0xFA,0x00,0xF6,0x00,0xFC,0x00,0xF8,0x00,0xF8,0x00,
  0xC1,0x00,0x86,0x00,0x07,0x00,0x01,0x00,0x00,0x00,0x02,0x00,0x04,0x00,0x08,0x00,
  0xFF,0x00,0xFF,0x00,0x7F,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x00,0x3F,0x00,0x31,0x00,
  0xFC,0x00,0xFC,0x00,0xEE,0x00,0xFC,0x00,0xD8,0x00,0xBC,0x00,0xF8,0x00,0xF0,0x00,
  0x00,0x00,0x00,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x01,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x18,0x07,0x10,0x2F,
  0x00,0x00,0x10,0x00,0x20,0x00,0x00,0x00,0x40,0x3F,0x00,0xFF,0x00,0xFF,0x44,0xBB,
  0x00,0x00,0x10,0x01,0x00,0x02,0x04,0x00,0x2C,0xD0,0x04,0xFB,0x00,0xFF,0x3C,0xC3,
  0x0F,0x80,0x0F,0x00,0x1F,0x00,0x1F,0x00,0x1F,0x00,0x1F,0x00,0x0E,0x81,0x0D,0xE2,
  0xE8,0x00,0x60,0x90,0x80,0x60,0xE0,0x00,0xA0,0x40,0x60,0x80,0xE0,0x00,0xC4,0x00,
  0x10,0x00,0x08,0x00,0x00,0x00,0x02,0x00,0x02,0x00,0x05,0x00,0x00,0x00,0x00,0x00,
  0x40,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,
  0x02,0x00,0x00,0x04,0x08,0x00,0x10,0x00,0x00,0x00,0x20,0x00,0x40,0x00,0x01,0x00,
  0x02,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,
  0x08,0x00,0x10,0x00,0x00,0x00,0x40,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x7E,0x00,
  0xDF,0x00,0xFF,0x00,0xF7,0x00,0xEF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFE,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xDF,0x00,0xFF,0x00,
  0xF8,0x00,0xFC,0x00,0xFC,0x00,0xFE,0x00,0xEE,0x00,0xFF,0x00,0xFA,0x00,0xFE,0x00,
  0x10,0x00,0x00,0x00,0x00,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x03,0x00,0x04,0x00,0x02,0x00,0x03,0x00,0x01,0x00,0x20,0x00,0x40,0x00,0xF0,0x00,
  0xE0,0x00,0xE0,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x08,0x00,0x10,0x00,
  0x00,0x00,0x00,0x00,0x81,0x00,0x40,0x01,0x20,0x01,0x00,0x03,0x06,0x01,0x00,0x07,
  0x43,0x3C,0x9F,0x60,0x1C,0xE3,0x34,0xCB,0x64,0x9B,0x40,0xBF,0x00,0xFF,0x00,0xFF,
  0x7D,0x82,0xA0,0x5F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x80,0x7F,0x80,0x7F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x03,0xFF,
  0x07,0xF8,0x07,0xF8,0x01,0xFE,0x00,0xFF,0x86,0xFF,0x06,0xFF,0x00,0xFF,0x80,0xFF,
  0xE2,0x00,0xE1,0x00,0xE0,0x00,0xC1,0x00,0xC0,0x02,0x40,0x84,0x20,0xC8,0x00,0xC0,
  0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x04,0x00,0x08,0x00,0x08,0x00,0x00,0x10,0x20,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,
  0x80,0x08,0x40,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x04,0x00,0x02,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x00,0x3F,0x00,0x3F,0x00,0x1F,0x00,
  0xDF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x00,
  0xFB,0x00,0xF7,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x00,0xFF,0x00,0xFF,0x00,
  0x61,0x00,0xE0,0x00,0xFB,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xDF,0x00,
  0xE0,0x00,0xF0,0x00,0xF0,0x00,0xFE,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x20,0x00,0x00,0x00,0x08,0x00,0x84,0x00,0x00,0x00,0x80,0x00,0x80,0x00,0xE0,0x00,
  0x00,0x0F,0x0C,0x03,0x07,0x00,0x12,0x01,0x21,0x00,0x41,0x00,0x01,0x00,0x81,0x00,
  0x00,0xFF,0x80,0x7F,0x00,0xFF,0x0D,0xF2,0x00,0xE0,0x00,0xC0,0x40,0x80,0x01,0x80,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x9D,0x62,0x7F,0x00,0x1F,0x00,0xFF,0x00,
  0x1F,0xFF,0x03,0xFF,0x00,0xFF,0x00,0xFF,0xC0,0x3F,0xE0,0x1F,0xF0,0x0F,0xF8,0x07,
  0xFC,0xFF,0xEA,0xFF,0xE0,0xFF,0xB2,0xFF,0x7E,0xFF,0x2A,0xFF,0x14,0xFF,0x24,0xFF,
  0x00,0xC0,0x40,0x80,0x40,0x80,0x60,0x80,0x50,0x80,0x48,0x80,0x44,0x80,0x40,0x80,
  0x06,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x10,0x00,0x20,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x04,0x00,
  0x20,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x04,0x00,0x00,0x80,0x00,
  0x00,0x00,0x00,0x00,0x00,0x80,0x40,0x00,0x20,0x00,0x10,0x00,0x08,0x00,0x00,0x00,
  0x0F,0x00,0x03,0x00,0x03,0x00,0x01,0x02,0x04,0x00,0x00,0x00,0x20,0x00,0x40,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xDF,0x00,0xFF,0x00,0xFB,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFB,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x00,0xFF,0x00,
  0xF8,0x00,0xF8,0x00,0xFC,0x00,0xFE,0x00,0xFF,0x00,0xFF,0x00,0xDF,0x00,0xFF,0x00,
  0x81,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x84,0x00,0x80,0x07,
  0x18,0x80,0xB8,0x00,0xF8,0x00,0xF0,0x00,0xE7,0x00,0xFF,0x00,0x71,0x8E,0x20,0xCF,
  0xFF,0x00,0x1F,0x00,0x0F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xF8,0x07,0xE1,0x1C,
  0xFC,0x03,0xFC,0x03,0xF8,0x07,0xF8,0x07,0xF0,0x0F,0xF0,0x0F,0x0C,0xF3,0xF0,0x0F,
  0x18,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x10,0xFF,0x04,0xFF,0x00,0xFF,
  0x41,0x80,0x41,0x80,0x42,0x80,0x40,0x80,0x40,0x80,0x20,0x80,0x40,0x80,0x00,0x80,
  0x00,0x00,0x00,0x00,0x80,0x00,0x40,0x00,0x20,0x00,0x11,0x00,0x0A,0x00,0x04,0x00,
  0x08,0x00,0x08,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x04,0x00,0x00,0x00,0x00,
  0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x01,0x00,
  0x00,0x00,0x01,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xDF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xDF,0x00,0xFF,0x00,0xDF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xF7,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFD,0x00,0xFB,0x00,
  0xC2,0x05,0xF0,0x03,0xF0,0x03,0x70,0x01,0xF8,0x01,0xF9,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x02,0xFD,0x00,0xFF,0x01,0xFE,0xC3,0x3C,
  0xE0,0x1F,0x20,0xDF,0x40,0xBF,0x40,0xBF,0xA0,0x1F,0x30,0x0F,0x78,0x07,0x7C,0x03,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x06,0xF9,0x06,0xF9,0x07,0xF8,
  0x06,0xFF,0x01,0xFE,0x01,0xFE,0x07,0xF8,0x05,0xFA,0x01,0xFE,0x00,0xFF,0xC9,0x36,
  0x00,0x80,0xC0,0x00,0x50,0x80,0x40,0x80,0x40,0x80,0x00,0x80,0x00,0x80,0x80,0x00,
  0x04,0x00,0x0A,0x00,0x11,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x42,0x00,0x24,0x00,0x08,0x00,0x10,0x00,
  0x00,0x20,0x00,0x00,0x00,0x00,0x04,0x00,0x02,0x00,0x01,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x10,0x00,0x80,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,
  0x00,0x00,0x00,0x00,0x03,0x00,0x09,0x00,0x11,0x00,0x01,0x00,0x81,0x00,0x01,0x00,
  0xFF,0x00,0xFF,0x00,0xFE,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xEF,0x00,
  0xFF,0x00,0x7F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFB,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFE,0x00,0xFF,0x00,0xFD,0x00,0xFE,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x0F,0x00,0x0F,0x00,0x07,0x00,
  0xF7,0x00,0xFF,0x00,0xDF,0x00,0xFF,0x00,0xBF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFB,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xDF,0x00,0xBF,0x00,
  0xFF,0x00,0xFF,0x00,0xFD,0x00,0xFD,0x00,0xFC,0x00,0xFD,0x00,0xFD,0x02,0xFE,0x01,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xF9,0x06,0xF8,0x07,0xFF,0x00,0xFC,0x03,0x78,0x87,
  0xFF,0x00,0xFE,0x01,0xFE,0x01,0xFE,0x01,0xFF,0x00,0xFF,0x00,0x7F,0x80,0xFF,0x00,
  0x87,0x78,0x1F,0xE0,0x3F,0xC0,0x6F,0x90,0xC7,0x38,0xCF,0x30,0xCF,0x30,0xCC,0x31,
  0x00,0x00,0x00,0x00,0x10,0x00,0x20,0x00,0x40,0x00,0x80,0x00,0x60,0x80,0xE0,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x02,0x04,0x00,0x00,0x00,0x0C,0x00,
  0x08,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x08,0x40,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,
  0x01,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFB,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x00,0xFF,0x00,0x7F,0x00,0xFF,0x00,
  0xFF,0x00,0xFD,0x00,0xFF,0x00,0xF7,0x00,0xFF,0x00,0xDF,0x00,0xFF,0x00,0xFF,0x00,
  0x07,0x00,0xDF,0x00,0xEF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFE,0x00,0xFF,0x00,0xFF,0x00,0xFD,0x00,0xFB,0x00,0xFF,0x00,0xFF,0x00,0xDF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xE1,0x00,0xF2,0x00,
  0xFF,0x00,0xFF,0x00,0xF5,0x00,0xD4,0x00,0xFC,0x00,0xE6,0x00,0x01,0x00,0x00,0x00,
  0x43,0x3C,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x3F,0x00,0x07,0x00,0xFF,0x00,0xFF,0x00,
  0xCB,0x30,0xCF,0x30,0xC7,0x38,0xCF,0x38,0xCB,0x3C,0xCB,0x3C,0xC9,0x3E,0xC0,0x3F,
  0xF0,0x00,0xF8,0x00,0xF8,0x00,0xFC,0x01,0xFE,0x00,0xFD,0x00,0xF1,0x00,0x7C,0x80,
  0x02,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,
  0x00,0x00,0x00,0x00,0x02,0x00,0x04,0x00,0x20,0x00,0x10,0x00,0x10,0x00,0x08,0x00,
  0x10,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x80,0x40,0x00,
  0x00,0x00,0x40,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x02,0x00,0x01,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0x00,0xFE,0x00,0xFF,0x00,0xFB,0x00,0xFF,0x00,0xF7,0x00,0xEF,0x00,0xFF,0x00,
  0x7F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x00,0xFD,0x00,0xFB,0x00,
  0xEF,0x00,0xDF,0x00,0xBF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFB,0x00,0xFF,0x00,0xFF,0x00,0xB3,0x00,0xE7,0x00,0xB7,0x00,0x78,0x00,
  0xFF,0x00,0xBF,0x00,0xFC,0x00,0xE3,0x00,0xE3,0x00,0xE1,0x00,0xE0,0x00,0xF1,0x00,
  0xFC,0x00,0xF4,0x00,0xEA,0x00,0xF9,0x00,0xFC,0x00,0x7E,0x00,0xBC,0x00,0x30,0x00,
  0x01,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xDF,0x00,0x7F,0x00,0x7F,0x00,0x3F,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x01,0xFE,0x01,0xFD,0x02,
  0xC0,0x3F,0xC0,0x3F,0x80,0x7F,0x90,0x6F,0x30,0xCF,0x74,0x8B,0xFC,0x03,0xF8,0x07,
  0x0C,0xF0,0x02,0xFC,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x40,0x00,0x21,0x00,0x82,0x00,0x20,0xC0,0x08,0xF0,0x02,0xFC,0x01,0xFE,0x00,0xFF,
  0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x80,
  0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x10,0x00,
  0x20,0x00,0x10,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,
  0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x80,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x00,0xFF,0x00,0xE7,0x00,0xEF,0x00,0x97,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xBF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFE,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xF7,0x00,0xEF,0x00,0xFF,0x00,0xFF,0x00,
  0xF0,0x00,0xF0,0x00,0xE0,0x00,0xE0,0x00,0xE3,0x00,0xF1,0x00,0xFC,0x00,0xFC,0x00,
  0x7F,0x00,0x7F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xBF,0x00,0xFF,0x00,0x7E,0x00,
  0xF0,0x00,0xF0,0x00,0xE8,0x00,0xD0,0x00,0xA0,0x00,0xC0,0x00,0xE0,0x00,0x90,0x00,
  0x81,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x1F,0x00,0x07,0x00,0x30,0x03,0x08,0x01,0x03,0x00,0x03,0x00,0x03,0x04,0x0F,0x00,
  0xF3,0x0C,0xEF,0x10,0x9F,0x60,0x7F,0x80,0xFF,0x00,0xFC,0x03,0xE0,0x1F,0xE0,0x1F,
  0xF0,0x0F,0xE0,0x1F,0xC0,0x3F,0xC0,0x3F,0x00,0xFF,0x00,0xFF,0x01,0xFE,0x0F,0xF0,
  0x00,0xFF,0x02,0xFD,0x00,0xFF,0x41,0xBE,0xCD,0x32,0xCF,0x30,0xCF,0x30,0xE7,0x18,
  0x00,0xFF,0x00,0xFF,0xC0,0x3E,0x47,0xB8,0x7B,0x80,0xFB,0x00,0xFB,0x00,0xF1,0x00,
  0x32,0xC0,0x0C,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x61,0x00,0xE0,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x80,0x00,0x80,0x00,0x40,0x00,0x20,0x00,
  0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x02,0x00,0x00,0x00,
  0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xF3,0x00,0xFB,0x00,0xED,0x00,0xE3,0x00,0xE3,0x00,0xC1,0x00,0x81,0x00,0x81,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x00,0xF8,0x00,
  0xF8,0x00,0xF0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0x00,0x00,0x02,0x00,0x04,0x00,
  0x7C,0x00,0x7F,0x00,0xE7,0x00,0x27,0x00,0x03,0x00,0x03,0x00,0x01,0x00,0x01,0x00,
  0xF1,0x00,0xFE,0x00,0xFC,0x00,0xF8,0x00,0xEF,0x00,0xFE,0x00,0xFE,0x00,0xFF,0x00,
  0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x0F,0x00,0x1C,0x00,0x31,0x00,0x21,0x00,0x40,0x00,0x40,0x00,0x00,0x00,0x00,0x00,
  0x30,0x0F,0xD0,0x0F,0x99,0x06,0x0C,0x03,0x17,0x00,0x66,0x00,0x83,0x00,0x01,0x00,
  0x5F,0xA0,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xE7,0x18,0xF7,0x08,0xF7,0x08,0xF7,0x08,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xF8,0x00,
  0xF1,0x00,0xF1,0x00,0xE1,0x00,0xE3,0x00,0xEF,0x00,0xFF,0x00,0x3C,0x00,0x38,0x00,
  0x0D,0x00,0x0D,0x00,0x8D,0x00,0x8D,0x00,0x9D,0x00,0x1D,0x00,0x1D,0x00,0x1D,0x00,
  0xF8,0x00,0xF8,0x00,0xF8,0x00,0x74,0x80,0xFC,0x00,0xF8,0x02,0xB6,0x00,0xBB,0x00,
  0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x08,
  0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x40,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
  0xC5,0x00,0xFE,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xF8,0x00,0xF8,0x00,0xFC,0x00,0xFE,0x00,0xCF,0x00,0xCF,0x00,0x9F,0x00,0x3F,0x00,
  0x08,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0xF0,0x00,
  0x00,0x00,0x01,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x00,0xFE,0x00,0xFE,0x00,0x7E,0x00,0x7E,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x30,0x00,0x70,0x00,0x70,0x00,0x70,0x00,
  0xFF,0x00,0x7F,0x00,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xF8,0x00,0xF8,0x00,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x20,0x00,0x20,0x00,0x20,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x38,0x00,
  0x1D,0x00,0x1D,0x00,0x1D,0x00,0x1D,0x00,0x19,0x00,0x31,0x08,0x21,0x18,0x20,0x18,
  0xBB,0x00,0xBD,0x00,0xBD,0x00,0x3D,0x00,0x7C,0x01,0x7E,0x01,0xFF,0x00,0xFE,0x00,
  0x00,0x10,0x40,0x80,0x00,0x80,0x80,0x40,0x80,0x40,0xE0,0x00,0xC0,0x20,0xD0,0x20,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,
  0xBF,0x00,0xBF,0x00,0xFF,0x00,0xF7,0x00,0xE7,0x00,0xE7,0x00,0xF3,0x00,0xFF,0x00,
  0xFC,0x00,0xFC,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x83,0x00,0xC7,0x00,0xEF,0x00,0xFF,0x00,
  0xFE,0x00,0xFC,0x00,0xFC,0x00,0xFC,0x00,0xFC,0x00,0xFD,0x00,0xFD,0x00,0xF9,0x00,
  0x70,0x00,0xF0,0x00,0x70,0x00,0x30,0x00,0x10,0x00,0xD0,0x00,0xD0,0x00,0x80,0x00,
  0x28,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x28,0x10,0x28,0x10,0x29,0x10,0x3C,0x00,0x3C,0x00,0x3D,0x00,0x39,0x00,0x49,0x30,
  0xFE,0x00,0xFE,0x00,0xFE,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xEF,0x10,0xEF,0x10,
  0xA8,0x50,0xE4,0x10,0xEA,0x11,0xF0,0x0A,0x71,0x0A,0x78,0x04,0x78,0x04,0x7A,0x04,
  0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x40,0x00,0x20,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xEC,0x00,0xDF,0x00,0xE3,0x00,0xC1,0x00,0xC0,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x3F,0x00,0xBF,0x00,
  0xF9,0x00,0xFB,0x00,0xFB,0x00,0xFB,0x00,0xFB,0x00,0xFB,0x00,0xFB,0x00,0xFB,0x00,
  0xD0,0x00,0xF0,0x00,0xC0,0x00,0xC0,0x00,0xC8,0x00,0xC8,0x00,0xC8,0x00,0xC8,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,
  0x00,0x00,0x00,0x00,0x20,0x00,0x21,0x00,0x27,0x00,0x6F,0x00,0x4F,0x00,0x7F,0x00,
  0x4A,0x30,0xC8,0x30,0xDA,0x20,0xDA,0x20,0x9C,0x60,0xB8,0x40,0x38,0xC0,0x3E,0xC0,
  0xEF,0x10,0xEF,0x10,0xEF,0x10,0xEF,0x10,0xEF,0x10,0xEF,0x10,0xEF,0x10,0xEF,0x10,
  0x7C,0x02,0x7C,0x02,0xFF,0x00,0xFF,0x00,0xEF,0x10,0xBF,0x00,0xB7,0x08,0xBF,0x00,
  0x10,0x00,0x08,0x00,0x06,0x00,0x04,0x00,0x00,0x04,0x08,0x00,0x80,0x10,0xC0,0x00,
  0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xC0,0x00,0xF0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE3,0x00,0xC7,0x00,0xCE,0x00,
  0x3F,0x00,0x7F,0x00,0x7F,0x00,0x7F,0x00,0xFF,0x00,0x3F,0x00,0x3F,0x00,0x3F,0x00,
  0xFB,0x00,0xFB,0x00,0xFB,0x00,0xF3,0x00,0xF3,0x00,0xF3,0x00,0xF3,0x00,0xF3,0x00,
  0xC0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,
  0x02,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0xFE,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x01,0x00,0x00,0x00,0x00,0x00,
  0xFF,0x00,0x0F,0x00,0x3F,0x00,0x0E,0x01,0x7E,0x01,0x1F,0x00,0x3E,0x01,0x7D,0x02,
  0x3E,0xC0,0x3E,0xC0,0x3E,0xC0,0x7E,0x80,0x7E,0x80,0xFE,0x00,0xFF,0x00,0xFF,0x00,
  0xBF,0x00,0xBF,0x00,0xBF,0x00,0xBF,0x00,0xBF,0x00,0xBF,0x00,0xBF,0x00,0xDF,0x00,
  0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0xC0,0x00,0xC0,0x00,0xE0,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x04,0x00,0x00,0x00,0x00,0x00
};
