// ///////////////////////
// //                   //
// //  File Attributes  //
// //                   //
// ///////////////////////

// Filename: A66.png
// Pixel Width: 160px
// Pixel Height: 128px

// /////////////////
// //             //
// //  Constants  //
// //             //
// /////////////////

const int A66_tile_map_size = 0x0140;
const int A66_tile_map_width = 0x14;
const int A66_tile_map_height = 0x10;

const int A66_tile_data_size = 0x0F60;
const int A66_tile_count = 0x0140;

// ////////////////
// //            //
// //  Map Data  //
// //            //
// ////////////////

const unsigned char A66_map_data[] ={
  0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,
  0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x1A,0x1B,0x1C,0x1D,0x1E,0x1F,
  0x20,0x21,0x22,0x23,0x24,0x25,0x26,0x27,0x28,0x29,0x2A,0x2B,0x2C,0x2D,0x2E,0x2F,
  0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x3A,0x3B,0x3C,0x3D,0x3E,0x3F,
  0x40,0x41,0x42,0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x4A,0x4B,0x4C,0x4D,0x4E,0x4F,
  0x50,0x51,0x52,0x53,0x54,0x55,0x56,0x57,0x58,0x59,0x5A,0x5B,0x5B,0x5B,0x5C,0x5D,
  0x5E,0x5F,0x60,0x61,0x62,0x63,0x64,0x65,0x66,0x67,0x67,0x67,0x67,0x68,0x69,0x6A,
  0x5B,0x5B,0x6B,0x6C,0x6D,0x6E,0x6F,0x70,0x71,0x72,0x73,0x74,0x67,0x75,0x76,0x77,
  0x78,0x67,0x79,0x7A,0x5B,0x5B,0x7B,0x7C,0x7D,0x7E,0x7F,0x80,0x67,0x67,0x81,0x82,
  0x83,0x84,0x85,0x86,0x87,0x88,0x67,0x89,0x5B,0x5B,0x8A,0x8B,0x8C,0x8D,0x8E,0x8F,
  0x90,0x91,0x92,0x93,0x94,0x95,0x67,0x67,0x96,0x97,0x98,0x99,0x5B,0x5B,0x9A,0x9B,
  0x9C,0x9D,0x9E,0x9F,0xA0,0xA1,0x67,0x67,0x67,0x67,0x67,0xA2,0xA3,0x5B,0x5B,0x5B,
  0x5B,0x5B,0x8A,0xA4,0xA5,0xA6,0xA7,0xA8,0xA9,0xAA,0xAB,0x67,0x67,0x67,0xAC,0xAD,
  0x5B,0xAE,0xAF,0x5B,0x5B,0x5B,0xB0,0xB1,0xB2,0xB3,0xB4,0xB5,0xB6,0xB7,0xB8,0xB9,
  0xBA,0x67,0x67,0xBB,0xBC,0x5B,0xBD,0xBE,0x5B,0x5B,0x5B,0x5B,0x5B,0xBF,0xC0,0xC1,
  0xC2,0xC3,0xC4,0xC5,0xC6,0x67,0xC7,0x67,0xC8,0xC9,0xCA,0x5B,0x5B,0x5B,0x5B,0x5B,
  0x5B,0x5B,0xCB,0xCC,0xCD,0xCE,0xCF,0xD0,0xD1,0xD2,0xD3,0xD4,0xD5,0xD6,0xD7,0x5B,
  0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,0xD8,0xD9,0xDA,0xDB,0xDC,0xDD,0xDE,0xDF,0xE0,0xE1,
  0xE2,0xE3,0x67,0xE4,0x5B,0x5B,0x5B,0x5B,0x5B,0xE5,0xE6,0xE7,0xE8,0xE9,0xEA,0xEB,
  0xEC,0xED,0xEE,0xE7,0xEF,0xF0,0xF1,0xF2,0xF3,0x5B,0x5B,0x5B,0x5B,0xF4,0x67,0xF5
};

// /////////////////
// //             //
// //  Tile Data  //
// //             //
// /////////////////

const unsigned char A66_tile_data[] ={
  0xE6,0x00,0xF8,0x00,0xC5,0x00,0xA9,0x00,0x84,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x00,
  0x46,0x00,0x77,0x00,0xCE,0x00,0x9D,0x00,0x20,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x66,0x00,0x8F,0x00,0xCC,0x00,0x99,0x00,0x64,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xC2,0x04,0xEF,0x00,0xCC,0x00,0xB3,0x00,0x6E,0x00,0xFE,0x00,0xFF,0x00,0xE8,0x00,
  0xCE,0x00,0xCB,0x00,0xEC,0x00,0x75,0x02,0xF6,0x00,0x0F,0x00,0xFF,0x00,0x7F,0x00,
  0x47,0x00,0x9F,0x00,0xEF,0x00,0x7F,0x00,0x67,0x00,0x7F,0x00,0xFF,0x00,0xFF,0x00,
  0x5C,0x00,0x6F,0x00,0x5F,0x00,0x6C,0x00,0xBF,0x00,0x4F,0x00,0xFF,0x00,0xA7,0x00,
  0x99,0x00,0xBF,0x00,0xDF,0x00,0xFF,0x00,0x6E,0x00,0x5D,0x20,0xFF,0x00,0xFF,0x00,
  0xBF,0x00,0xEF,0x00,0xEB,0x00,0xFF,0x00,0xCD,0x00,0xDB,0x00,0xFF,0x00,0xFF,0x00,
  0x9F,0x00,0xFD,0x00,0x83,0x00,0x9E,0x00,0xBF,0x00,0x9B,0x00,0x1F,0x80,0xFF,0x00,
  0xFE,0x00,0x20,0x00,0x6D,0x00,0x27,0x00,0xDD,0x00,0xC7,0x00,0xFE,0x00,0xFF,0x00,
  0x1B,0x00,0x7E,0x00,0xF9,0x00,0xE4,0x00,0x33,0x00,0xEF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xD9,0x00,0x27,0x00,0xFD,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xCD,0x00,0x99,0x00,0x55,0x00,0xBB,0x00,0xF7,0x00,0x93,0x00,0xFD,0x00,0xFF,0x00,
  0xF2,0x00,0x1D,0x00,0x92,0x00,0x76,0x00,0xBF,0x00,0x74,0x00,0xFF,0x00,0xFF,0x00,
  0xFE,0x00,0x7E,0x00,0xFF,0x00,0x7E,0x00,0xFE,0x00,0x3E,0x00,0xFF,0x00,0xFF,0x00,
  0xED,0x00,0xBF,0x00,0xFB,0x00,0xBF,0x00,0xDA,0x00,0xC6,0x00,0xFF,0x00,0xFF,0x00,
  0xDB,0x00,0xEF,0x00,0xEE,0x00,0xAD,0x40,0x32,0x00,0xA9,0x40,0xFC,0x00,0xFF,0x00,
  0xFF,0x00,0xF7,0x00,0xD9,0x00,0xFF,0x00,0xA9,0x00,0xF7,0x00,0xB8,0x00,0xFF,0x00,
  0x8C,0x00,0xDF,0x00,0x25,0x00,0xFF,0x00,0xE0,0x00,0xFF,0x00,0x7D,0x00,0xFF,0x00,
  0x00,0x00,0xBC,0x00,0xFD,0x02,0xF1,0x00,0xFF,0x00,0xB2,0x00,0xFF,0x00,0xFD,0x00,
  0x7F,0x00,0x80,0x00,0xEF,0x00,0xAA,0x00,0x7E,0x00,0x22,0x00,0xFC,0x00,0x36,0x00,
  0xFF,0x00,0x00,0x00,0x01,0x00,0xFB,0x00,0xDD,0x00,0x66,0x00,0xCA,0x01,0x73,0x00,
  0xE0,0x00,0x37,0x00,0x9B,0x00,0x1F,0x20,0x9F,0x00,0x77,0x00,0x73,0x00,0x33,0x00,
  0x00,0x00,0x60,0x00,0x47,0x00,0x5D,0x00,0xCF,0x00,0x01,0x00,0xCB,0x00,0x22,0x00,
  0x02,0x00,0x38,0x00,0xE7,0x00,0xC1,0x00,0x2B,0x00,0x2B,0x00,0x33,0x00,0x28,0x00,
  0x80,0x00,0x00,0x00,0x7F,0x00,0x99,0x00,0x2F,0x00,0x72,0x00,0x23,0x00,0x6A,0x00,
  0x00,0x00,0x00,0x00,0xFF,0x00,0x93,0x00,0x7F,0x00,0xB0,0x00,0x06,0x20,0x5E,0x00,
  0x77,0x00,0x00,0x00,0xFF,0x00,0xA6,0x00,0xFF,0x00,0x59,0x00,0x66,0x00,0xBF,0x00,
  0x85,0x00,0x19,0x00,0xEB,0x00,0x76,0x00,0xBF,0x40,0x8E,0x00,0x5C,0x00,0xA7,0x10,
  0xFF,0x00,0x40,0x00,0x14,0x00,0xEF,0x00,0xFC,0x00,0x3F,0x00,0xEC,0x00,0x3D,0x00,
  0xFF,0x00,0x00,0x00,0x00,0x00,0x3D,0x00,0x1F,0x80,0xDF,0x00,0xFF,0x00,0x7F,0x00,
  0xFF,0x00,0x03,0x00,0x76,0x00,0xFA,0x00,0xA6,0x00,0xFE,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0x13,0x00,0x5D,0x00,0xFB,0x00,0x3F,0x00,0xDF,0x00,0x5D,0x00,
  0xFF,0x00,0xBF,0x40,0xEA,0x00,0x86,0x00,0xFE,0x00,0x86,0x00,0x8F,0x00,0xA3,0x00,
  0xFF,0x00,0xFC,0x00,0x00,0x00,0xCB,0x00,0xFB,0x00,0x90,0x00,0x7F,0x00,0xFF,0x00,
  0x3F,0x00,0x00,0x00,0x00,0x00,0xFB,0x00,0xFF,0x00,0x32,0x00,0xFD,0x00,0xFD,0x00,
  0xFF,0x00,0x1F,0x00,0x13,0x00,0x78,0x00,0xE2,0x00,0x76,0x00,0xE2,0x00,0xE6,0x00,
  0xFF,0x00,0xFF,0x00,0x80,0x00,0x4D,0x00,0x7F,0x00,0x5E,0x00,0x2F,0x00,0xDF,0x00,
  0xFF,0x00,0xFF,0x00,0x10,0x00,0xBF,0x00,0xDD,0x00,0xD7,0x00,0x10,0x00,0xBF,0x00,
  0x36,0x00,0xD3,0x00,0xEB,0x00,0xFF,0x00,0x33,0x00,0x1B,0x80,0x04,0x00,0x7F,0x00,
  0xFF,0x00,0x30,0x00,0xF6,0x00,0x17,0x00,0x3F,0x00,0x7A,0x00,0x06,0x00,0xFE,0x00,
  0xEF,0x10,0x22,0x00,0xD9,0x00,0xF3,0x00,0x39,0x02,0x23,0x00,0xCC,0x00,0x93,0x00,
  0xFF,0x00,0x3F,0x00,0x91,0x00,0xA7,0x00,0xFF,0x00,0x23,0x00,0x99,0x00,0x3E,0x00,
  0xEE,0x00,0x23,0x00,0x68,0x00,0xEF,0x00,0x6E,0x00,0x63,0x00,0x62,0x00,0xFD,0x00,
  0xBF,0x00,0x36,0x00,0xC0,0x00,0xFF,0x00,0x9F,0x00,0x33,0x00,0x05,0x00,0x3B,0x00,
  0xD4,0x00,0xBF,0x00,0x99,0x00,0x9F,0x00,0x41,0x00,0x22,0x00,0x64,0x00,0x81,0x00,
  0xFB,0x00,0x67,0x00,0x11,0x00,0xF7,0x00,0xCA,0x00,0x36,0x00,0xCC,0x00,0x37,0x00,
  0xBD,0x00,0xFF,0x00,0x22,0x00,0x7D,0x00,0x10,0x00,0x07,0x00,0x9B,0x00,0xA2,0x00,
  0xCB,0x00,0xFF,0x00,0x66,0x00,0x6C,0x00,0x3F,0x00,0xEF,0x00,0xB7,0x00,0x7F,0x00,
  0x6C,0x00,0x6C,0x80,0x6F,0x00,0xCF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFE,0x01,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x9F,0x00,0x3F,0x00,0x7F,0x00,
  0xFF,0x00,0xEF,0x10,0xE7,0x18,0xF9,0x06,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,
  0xC3,0x08,0xF7,0x00,0xFF,0x00,0xED,0x00,0xFB,0x00,0x7F,0x80,0x7F,0x80,0x0F,0xF0,
  0xAF,0x10,0xA4,0x00,0x9F,0x00,0xAF,0x00,0x8C,0x00,0x99,0x20,0xBA,0x01,0x8F,0x00,
  0xFF,0x00,0x8F,0x40,0xFF,0x00,0xFF,0x00,0x99,0x00,0xB3,0x08,0xFF,0x00,0xB9,0x00,
  0xEC,0x00,0xE9,0x10,0xFF,0x00,0xBF,0x00,0x1F,0x00,0xFD,0x02,0xEF,0x00,0x32,0x00,
  0xEB,0x00,0x65,0x00,0x63,0x80,0xE7,0x00,0x6E,0x00,0xEC,0x00,0xE0,0x02,0xE5,0x00,
  0xEE,0x00,0x9F,0x00,0x6C,0x00,0x4C,0x00,0x57,0x00,0x3E,0x00,0x4D,0x00,0xCF,0x00,
  0xC8,0x00,0xFF,0x00,0x45,0x00,0xBF,0x00,0xB9,0x00,0xEF,0x00,0xDB,0x00,0xB3,0x00,
  0xFF,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xC2,0x00,0x64,0x00,0xFD,0x00,0xF4,0x00,
  0xFF,0x00,0xFF,0x00,0x00,0x00,0x01,0x00,0x08,0x00,0xCB,0x00,0xD8,0x00,0x6E,0x00,
  0xFF,0x00,0xFF,0x00,0x00,0x00,0x80,0x00,0x05,0x00,0xFD,0x00,0xB0,0x00,0x66,0x00,
  0xFF,0x00,0xFF,0x00,0x00,0x00,0xC0,0x00,0x08,0x00,0xBF,0x00,0x34,0x00,0x6E,0x00,
  0xFF,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x89,0x00,0xB8,0x00,0x7F,0x00,0xFF,0x00,
  0xFD,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0x02,0x00,0x47,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0x81,0x00,0x8F,0x00,0x89,0x00,0x00,0x00,
  0xC0,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0xF8,0x00,0x66,0x00,0x80,0x00,0x00,0x00,
  0x1F,0x00,0xFF,0x00,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0x00,0xFF,0x00,0x1F,0x00,0x3F,0x00,0x3F,0x00,0x3F,0x00,0x7F,0x00,0x7F,0x00,
  0xFE,0x00,0xFC,0x00,0xF9,0x00,0xF3,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x30,0xCF,
  0xF8,0x07,0xF0,0x0F,0xF0,0x0F,0xE0,0x1F,0xE0,0x1F,0xC0,0x3F,0x80,0x7F,0x00,0xFF,
  0x07,0xF8,0x07,0xF8,0x04,0xFB,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xA3,0x10,0xEF,0x00,0xFE,0x00,0x7F,0x80,0x29,0xC0,0x20,0xC0,0x1D,0xE0,0x1F,0xE0,
  0xD6,0x20,0xFB,0x00,0xFF,0x00,0xFF,0x00,0x24,0x00,0x0F,0x00,0xF9,0x00,0x7D,0x00,
  0xF7,0x08,0xDD,0x22,0xFF,0x00,0x80,0x00,0x47,0x00,0x44,0x00,0xD2,0x00,0xFD,0x00,
  0xFF,0x00,0x4E,0x00,0xCF,0x00,0xFF,0x00,0xE0,0x00,0xD8,0x00,0xC8,0x00,0xFF,0x00,
  0x5F,0x00,0xA8,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0xE0,0x00,0x1A,0x00,0xFF,0x00,
  0x9B,0x00,0x75,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0x20,0x00,0x01,0x00,0xFB,0x00,
  0xD7,0x00,0x54,0x00,0xFC,0x00,0xEE,0x00,0xE6,0x00,0x4C,0x00,0xCC,0x00,0x75,0x00,
  0xF3,0x00,0x08,0x00,0x8A,0x00,0x6E,0x00,0x64,0x00,0xC4,0x00,0xBC,0x00,0x63,0x00,
  0x58,0x00,0x4C,0x00,0x80,0x00,0x66,0x00,0x00,0x00,0xFC,0x00,0x20,0x00,0x60,0x00,
  0x31,0x00,0x8F,0x00,0x77,0x00,0x66,0x00,0x00,0x00,0x20,0x00,0x40,0x00,0x00,0x00,
  0xFF,0x00,0xF0,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x7F,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x0F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0x00,0x01,0x00,0x0F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x7F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xBF,0x00,0xFF,0x00,
  0xF8,0x07,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xC0,0x3F,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x19,0xE0,0x0F,0xF0,0x07,0xF8,0x03,0xFC,0x01,0xFE,0x01,0xFE,0x01,0xFE,0x01,0xFE,
  0xBD,0x00,0x5B,0x00,0xDB,0x00,0xFB,0x00,0xF8,0x00,0xBF,0x40,0xD8,0x00,0xFA,0x00,
  0x32,0x00,0xD0,0x24,0x96,0x00,0x40,0x00,0xF8,0x00,0xD6,0x20,0x7D,0x00,0x6C,0x00,
  0x6E,0x00,0x90,0x49,0x30,0x00,0x90,0x00,0x22,0x00,0xCF,0x00,0x09,0x00,0x91,0x00,
  0x9B,0x00,0xFE,0x00,0x91,0x00,0x24,0x00,0x49,0x00,0xB0,0x00,0x9D,0x00,0x14,0x00,
  0x65,0x00,0xCE,0x01,0x01,0x00,0x93,0x00,0xB7,0x00,0xFF,0x00,0xC5,0x00,0x49,0x00,
  0xF8,0x00,0xEE,0x00,0x7E,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,
  0xE3,0x00,0x64,0x00,0xEC,0x00,0xFF,0x00,0xFE,0x00,0xFC,0x00,0x00,0x00,0x00,0x00,
  0xC0,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x07,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x03,0x00,0x0F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFC,0x03,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0xFF,0x00,0xFF,0xF0,0x0F,0xF8,0x07,0xFE,0x01,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xE0,0x1F,0xF0,0x0F,0xF0,0x0F,
  0x01,0xFE,0x01,0xFE,0x01,0xFE,0x01,0xFE,0x01,0xFE,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xD9,0x00,0xFB,0x00,0xFF,0x00,0xFA,0x00,0xFD,0x00,0xFF,0x00,0xFF,0x00,0x80,0x00,
  0xDB,0x00,0x76,0x00,0x67,0x00,0x56,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,
  0xDB,0x00,0xC1,0x00,0xE7,0x00,0x93,0x00,0x9B,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,
  0xF4,0x00,0x10,0x00,0xFF,0x00,0xFC,0x00,0xA7,0x00,0xFF,0x00,0xFF,0x00,0x0F,0x00,
  0x0F,0x00,0x05,0x00,0x67,0x00,0x0F,0x00,0xFA,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xC0,0x00,0xE0,0x00,0xE0,0x00,0xFC,0x00,0xFC,0x00,0xFE,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0xE7,0x00,0xFF,0x00,
  0x0F,0x00,0x0F,0x00,0x0F,0x00,0x0F,0x00,0xF8,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x00,0xC0,0x00,0x00,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x03,0x00,0x03,0x00,0x07,0x00,0x07,0x00,
  0xFF,0x00,0xFF,0x00,0xFE,0x01,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x80,0x7F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xF8,0x07,0xFE,0x01,0xFE,0x01,0xFC,0x03,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x01,0xFE,0x01,0xFE,0x01,0xFE,
  0xF7,0x00,0xE8,0x00,0x7F,0x80,0xE0,0x00,0xFF,0x00,0xFB,0x00,0xFF,0x00,0xF9,0x00,
  0x7F,0x00,0x7F,0x00,0xFF,0x00,0x3C,0x00,0xFF,0x00,0xB0,0x00,0xDB,0x00,0x66,0x00,
  0x40,0x00,0xE0,0x00,0xEB,0x00,0x6F,0x00,0xE3,0x00,0x6F,0x00,0xEF,0x00,0xEE,0x00,
  0x00,0x00,0x36,0x00,0xFF,0x00,0x6D,0x00,0xC9,0x00,0x34,0x00,0xFF,0x00,0x6C,0x00,
  0x00,0x00,0x73,0x00,0xFD,0x00,0x92,0x00,0xC5,0x00,0x99,0x00,0x1B,0x00,0xF0,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFC,0x00,0xF8,0x00,0xF0,0x00,0xF0,0x00,
  0xFF,0x00,0xFE,0x00,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x0F,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0xFF,0x00,0xFF,0x00,
  0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xCF,0x00,0x01,0x00,0x07,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xF8,0x07,0xF0,0x0F,0xE0,0x1F,0x80,0x7F,0x80,0x7F,0x80,0x7F,0xC0,0x3F,0xC0,0x3F,
  0x03,0xFC,0x03,0xFC,0x03,0xFC,0x03,0xFC,0x03,0xFC,0x03,0xFC,0x03,0xFC,0x01,0xFE,
  0xDF,0x00,0xB3,0x00,0xFF,0x00,0xCE,0x00,0xFB,0x00,0xF7,0x00,0x76,0x00,0xFF,0x00,
  0xFE,0x00,0xF3,0x00,0x97,0x00,0xF4,0x00,0x37,0x00,0x36,0x00,0xEF,0x00,0x8F,0x00,
  0xEA,0x00,0x69,0x00,0xE7,0x00,0xEB,0x00,0xF3,0x00,0xE8,0x00,0x6F,0x00,0xFF,0x00,
  0x6B,0x00,0x44,0x00,0xBF,0x00,0x2C,0x00,0x2F,0x00,0x32,0x00,0x7D,0x00,0xEF,0x00,
  0xFD,0x00,0x59,0x00,0x07,0x00,0x93,0x00,0xF7,0x00,0xC9,0x00,0x4F,0x00,0xDF,0x00,
  0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x4F,0x00,0xEF,0x00,0xE1,0x00,0xBF,0x00,
  0xFF,0x00,0x1F,0x00,0x0F,0x00,0x03,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xF8,0x00,0xFC,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0x00,0x03,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0x00,0xC0,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x1F,0x00,0x7F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x01,0xFC,0x03,0xF0,0x0F,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFC,0x03,0xC0,0x3F,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xFF,0x00,0xFF,0x00,0xFE,0x01,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xE0,0x1F,0x80,0x7F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x01,0xFE,0x01,0xFE,0x00,0xFE,0x01,0xFE,0x01,0xFE,0x03,0xFC,0x03,0xFC,0x03,0xFC,
  0xFF,0x00,0xFF,0x00,0xA7,0x00,0xA0,0x00,0xDA,0x00,0xEE,0x00,0xFE,0x00,0xEF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0x04,0x00,0x50,0x01,0x06,0x30,0x6C,0x00,0x6B,0x00,
  0xFF,0x00,0xFF,0x00,0xFE,0x00,0x00,0x00,0x24,0x00,0xEB,0x00,0x97,0x00,0xCD,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0x81,0x00,0x65,0x00,0x7F,0x00,0x68,0x00,
  0x77,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0x21,0x00,0x93,0x00,0xEF,0x00,0x41,0x00,
  0x61,0x00,0xFE,0x00,0x77,0x00,0xCB,0x00,0xB6,0x00,0xEF,0x00,0xFF,0x00,0xEB,0x00,
  0xFF,0x00,0xFF,0x00,0xEF,0x00,0x7F,0x00,0x9F,0x00,0xFF,0x00,0x7F,0x00,0x0B,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFC,0x03,0xE0,0x1F,0xC0,0x3F,
  0xF0,0x0F,0xE0,0x1F,0xE0,0x1F,0xC0,0x3F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xAC,0x00,0x4D,0x00,0xBE,0x00,0x2F,0x40,0x7E,0x00,0xEF,0x00,0x9E,0x20,0xDE,0x21,
  0xDD,0x00,0x7C,0x00,0x2F,0x40,0xF4,0x00,0xFD,0x00,0x6D,0x00,0x97,0x40,0xF4,0x00,
  0x7F,0x00,0xD2,0x00,0xFE,0x00,0x18,0x00,0xDF,0x00,0xB1,0x00,0x9E,0x00,0xE8,0x00,
  0xDF,0x00,0x4C,0x00,0xFF,0x00,0x10,0x00,0xBC,0x00,0x4D,0x00,0xBE,0x00,0xB7,0x00,
  0xBD,0x00,0x85,0x00,0xFD,0x00,0xC9,0x00,0xE1,0x00,0xB3,0x00,0x69,0x00,0xFF,0x00,
  0x42,0x00,0x9D,0x00,0xFE,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x04,0x00,0x64,0x00,
  0x7F,0x00,0x99,0x00,0x77,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x05,0x00,0x0A,0x00,
  0xFF,0x00,0xFF,0x00,0x7F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x67,0x00,0x0F,0x00,
  0xFF,0x00,0xFE,0x01,0xFC,0x03,0xF0,0x0F,0xC0,0x3F,0xC0,0x3F,0x80,0x7F,0xF0,0x0F,
  0x80,0x7F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x18,0xE7,0x18,0xE7,0x10,0xEF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x10,0xEF,0x30,0xCF,0x20,0xDF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x01,0xFE,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xAE,0x10,0xDF,0x00,0x7F,0x80,0x1F,0xE0,0x07,0xF8,0x01,0xFE,0x00,0xFF,0x00,0xFF,
  0xFF,0x00,0xAC,0x40,0x6D,0x00,0xFF,0x00,0xCD,0x00,0x7F,0x00,0x20,0xC0,0x03,0xFC,
  0xEF,0x00,0x9B,0x00,0xB6,0x00,0x7B,0x80,0xFA,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,
  0xFC,0x00,0x26,0x00,0xDB,0x00,0x1C,0x00,0x7F,0x00,0xFF,0x00,0x01,0x00,0x00,0x00,
  0x01,0x00,0x93,0x00,0x69,0x00,0xEB,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,
  0xED,0x00,0x7E,0x00,0xFC,0x00,0x90,0x00,0xFE,0x00,0x46,0x00,0xDD,0x00,0x68,0x00,
  0xFD,0x00,0x67,0x00,0xFF,0x00,0x51,0x00,0xDC,0x00,0x66,0x00,0xFC,0x00,0x50,0x00,
  0xDD,0x00,0x03,0x00,0xCC,0x00,0x34,0x00,0x4C,0x00,0x76,0x00,0xCF,0x00,0x00,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x1F,0xE0,
  0xFE,0x01,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0xFF,0xC0,0x3F,0xF8,0x07,0xF8,0x07,0xF0,0x0F,0xF0,0x0F,0xF8,0x07,0xFC,0x03,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x01,0xFE,0x03,0xFC,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x08,0xF7,0x10,0xEF,0xE0,0x1F,0x80,0x7F,
  0x6F,0x80,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x22,0x00,0xF9,0x00,0x7F,0x80,0x7C,0x83,0x7C,0x83,0x3E,0xC1,0x3E,0xC1,0x3F,0xC0,
  0x8B,0x00,0xE0,0x00,0xF0,0x00,0x01,0xFE,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x87,0x00,0xCE,0x00,0x98,0x00,0x70,0x00,0x2F,0x00,0xDF,0x00,0xFF,0x00,0xFF,0x00,
  0xF9,0x00,0xE4,0x00,0xCD,0x00,0x62,0x00,0xFF,0x00,0x77,0x00,0xFF,0x00,0xFF,0x00,
  0xD9,0x00,0xEE,0x00,0x4D,0x00,0xE0,0x00,0x8D,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x9F,0x00,0xFF,0x00,0xFF,0x00,0x3F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x0F,0xF0,0x07,0xF8,0x8F,0x70,0xC7,0x38,0xE7,0x18,0xF7,0x08,0xF7,0x08,0xF7,0x08,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFD,0x00,0xFF,0x00,0xFF,0x00,
  0xFC,0x03,0xFC,0x03,0xF8,0x07,0xF8,0x07,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x0F,0xF0,0xFF,0x00,0xFF,0x00,0xE0,0x1F,0x00,0xFF,
  0x0F,0xF0,0x3E,0xC1,0xFC,0x03,0xF0,0x0F,0xC0,0x3F,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x3F,0xC0,0x3F,0xC0,0x3F,0xC0,0x3F,0xC0,0x3F,0xC0,0x3F,0xC0,0x3F,0xC0,0x3F,0xC0,
  0x00,0xFF,0x00,0xFF,0x80,0x7F,0x80,0x7F,0x80,0x7F,0xC0,0x3F,0xC0,0x3F,0xC0,0x3F,
  0x00,0x00,0x00,0x00,0x2C,0x00,0xFF,0x00,0x3D,0x00,0x4C,0x00,0xD7,0x00,0xB7,0x00,
  0x00,0x00,0x00,0x00,0xC8,0x00,0x7E,0x00,0xD7,0x00,0xA4,0x00,0xB1,0x00,0x7E,0x00,
  0x2C,0x00,0x00,0x00,0xCD,0x00,0x6B,0x00,0xF8,0x00,0xCC,0x00,0x2C,0x00,0x47,0x00,
  0x7F,0x00,0x0F,0x00,0x3F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x00,0x7F,0x00,
  0xF7,0x08,0xF7,0x08,0xE3,0x1C,0xE3,0x1C,0xE3,0x1C,0xE3,0x1C,0xE3,0x1C,0xE3,0x1C,
  0x80,0x00,0x01,0x00,0xE7,0x00,0xD9,0x00,0xC7,0x00,0xFB,0x00,0xCD,0x00,0xF3,0x00,
  0x00,0x00,0x80,0x00,0x04,0x00,0x3C,0x00,0x3B,0x00,0xF7,0x00,0x0F,0x00,0x4E,0x00,
  0x0F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xBF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFC,0x03,0xF0,0x0F,0xE0,0x1F,0xF0,0x0F,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x80,0x7F,0xF0,0x0F,0xFF,0x00,0xFF,0x00,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x40,0xBF,0xFF,0x00,
  0x3F,0xC0,0x3F,0xC0,0x3F,0xC0,0x3F,0xC0,0x3F,0xC0,0x3F,0xC0,0xBF,0xC0,0xBF,0xC0,
  0xC0,0x3F,0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,0xF0,0x0F,0xF0,0x0F,
  0xBD,0x00,0xF7,0x00,0x33,0x00,0xF7,0x00,0x80,0x00,0xFF,0x00,0xF3,0x00,0xB7,0x00,
  0x8A,0x00,0xCF,0x00,0x31,0x00,0x63,0x00,0x00,0x00,0xFF,0x00,0xA2,0x00,0x76,0x00,
  0x17,0x00,0xEF,0x00,0x20,0x00,0x7F,0x00,0x22,0x00,0xEE,0x00,0x21,0x00,0xCF,0x00,
  0x7F,0x00,0xFF,0x00,0x7F,0x00,0xFF,0x00,0x3F,0x00,0x7F,0x00,0xFF,0x00,0xFF,0x00,
  0xE1,0x1E,0xE1,0x1E,0xE1,0x1E,0xE1,0x1E,0xE1,0x1E,0xE0,0x1F,0xF0,0x0F,0xF0,0x0F,
  0xED,0x00,0xFF,0x00,0xEF,0x00,0xF3,0x00,0xF7,0x00,0xF7,0x00,0xEF,0x00,0xF7,0x00,
  0x11,0x00,0x3E,0x00,0x4D,0x00,0x04,0x00,0x7B,0x00,0x1C,0x00,0x59,0x00,0x17,0x00,
  0x7F,0x00,0x79,0x06,0xF9,0x06,0x78,0x07,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,
  0xE7,0x00,0xF7,0x00,0xEF,0x00,0xF3,0x00,0xF1,0x00,0x74,0x80,0x3F,0xC0,0x3C,0xC0,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x00,0x3F,0x00,0x1F,0x00,
  0xE0,0x1F,0xE0,0x1F,0xF0,0x0F,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xFC,0x03,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x01,0xFF,0x00,0xFF,
  0xFF,0x80,0xFF,0x80,0xFF,0x80,0x7F,0x80,0x7F,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,
  0xF2,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0xDC,0x00,
  0x11,0x00,0xFF,0x00,0xFB,0x00,0xFF,0x00,0x3E,0x00,0x00,0x00,0x00,0x00,0xDD,0x00,
  0x1D,0x00,0xFF,0x00,0x37,0x00,0xFF,0x00,0x3D,0x00,0x00,0x00,0x04,0x00,0xB9,0x00,
  0x1F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x00,0x7F,0x00,0xFF,0x00,0xFF,0x00,
  0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xFC,0x03,
  0x7F,0x80,0x7F,0x80,0x7F,0x80,0x3F,0xC0,0x3F,0xC0,0x3E,0xC0,0x30,0xC0,0x1E,0xE0,
  0x93,0x00,0x8D,0x00,0xFF,0x00,0xFF,0x00,0xBF,0x00,0x07,0x00,0x07,0x00,0x0F,0x00,
  0x1C,0xE0,0x0F,0xF0,0x0F,0xF0,0x06,0xF8,0x03,0xFC,0x03,0xFC,0x01,0xFE,0x00,0xFF,
  0x7F,0x00,0xFF,0x00,0xFF,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x98,0x00,0x81,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x00,0x3F,0x00,0x0F,0x00,0x03,0x00,0xF0,0x00,
  0xFC,0x03,0xFC,0x03,0xFE,0x01,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x80,0x7F,0x80,0x7F,0xC0,0x3F,
  0x01,0xFE,0x01,0xFE,0x01,0xFE,0x03,0xFC,0x03,0xFC,0x07,0xF8,0x0F,0xF0,0x0F,0xF0,
  0xFC,0x03,0xFC,0x03,0xFC,0x03,0xFC,0x03,0xFC,0x03,0xFE,0x01,0xFE,0x01,0xFE,0x01
};