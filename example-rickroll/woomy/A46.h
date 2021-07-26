// ///////////////////////
// //                   //
// //  File Attributes  //
// //                   //
// ///////////////////////

// Filename: A46.png
// Pixel Width: 160px
// Pixel Height: 128px

// /////////////////
// //             //
// //  Constants  //
// //             //
// /////////////////

const int A46_tile_map_size = 0x0140;
const int A46_tile_map_width = 0x14;
const int A46_tile_map_height = 0x10;

const int A46_tile_data_size = 0x0FD0;
const int A46_tile_count = 0x0140;

// ////////////////
// //            //
// //  Map Data  //
// //            //
// ////////////////

const unsigned char A46_map_data[] ={
  0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,
  0x10,0x11,0x12,0x13,0x00,0x14,0x15,0x16,0x17,0x18,0x19,0x1A,0x1B,0x1C,0x1D,0x1E,
  0x1F,0x20,0x21,0x22,0x23,0x24,0x25,0x26,0x00,0x27,0x28,0x29,0x2A,0x2B,0x2C,0x2D,
  0x2E,0x2F,0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x00,0x3A,0x3B,0x3C,
  0x3D,0x3E,0x3F,0x40,0x41,0x42,0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x4A,0x4B,0x4C,
  0x00,0x4D,0x4E,0x4F,0x50,0x51,0x51,0x52,0x53,0x54,0x55,0x56,0x57,0x58,0x59,0x5A,
  0x5B,0x5C,0x5D,0x5E,0x00,0x5F,0x60,0x61,0x62,0x63,0x64,0x65,0x66,0x67,0x68,0x69,
  0x6A,0x6B,0x6C,0x6D,0x6E,0x6F,0x70,0x71,0x00,0x72,0x73,0x74,0x75,0x76,0x52,0x52,
  0x52,0x77,0x78,0x79,0x7A,0x7B,0x7C,0x7D,0x7E,0x7F,0x80,0x81,0x00,0x82,0x83,0x84,
  0x52,0x52,0x52,0x52,0x52,0x85,0x86,0x87,0x88,0x89,0x8A,0x8B,0x8C,0x8D,0x8E,0x8F,
  0x00,0x90,0x91,0x92,0x52,0x52,0x52,0x52,0x52,0x93,0x94,0x52,0x52,0x95,0x96,0x97,
  0x98,0x99,0x9A,0x9B,0x00,0x9C,0x9D,0x9E,0x9F,0x52,0x52,0x52,0xA0,0xA1,0xA2,0xA3,
  0xA4,0xA5,0x00,0xA6,0xA7,0xA8,0xA9,0xAA,0x00,0xAB,0xAC,0x00,0xAD,0x52,0x52,0x52,
  0xAE,0xAF,0xB0,0xB1,0xB2,0xB3,0xB4,0xB5,0xB6,0xB7,0xB8,0xB9,0xBA,0xBB,0x00,0x00,
  0xBC,0x52,0xBD,0xBE,0xBF,0xC0,0xC1,0xC1,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,
  0xCA,0xCB,0xCC,0x00,0xCD,0x52,0xCE,0xCF,0xD0,0xD1,0xC1,0xC1,0xC1,0xC1,0xC1,0xC1,
  0xD2,0xD3,0xD4,0xD5,0xD6,0xD7,0xD8,0x00,0x00,0xD9,0xDA,0xDB,0xDC,0xDD,0xC1,0xC1,
  0xC1,0xC1,0xC1,0xC1,0xDE,0xDF,0xE0,0xE1,0xE2,0xE3,0xE4,0x00,0x00,0xE5,0xE6,0xE7,
  0xE8,0xE9,0xC1,0xEA,0xEB,0xC1,0xC1,0xEC,0xED,0xEE,0xEF,0xF0,0xF1,0xF2,0x00,0x00,
  0x00,0x00,0xF3,0xF4,0xF5,0xF6,0xC1,0xEA,0xF7,0xC1,0xC1,0xF8,0xF9,0xFA,0xFB,0xFC
};

// /////////////////
// //             //
// //  Tile Data  //
// //             //
// /////////////////

const unsigned char A46_tile_data[] ={
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x3E,0xF7,0x3E,0xF9,0x38,0xFF,0x3E,0xFB,0x37,0xFF,0x3E,0xFF,0x2F,0xFF,0x1F,0xFF,
  0x0D,0xF0,0x05,0xF8,0x01,0xFC,0x07,0xF8,0x0D,0xF0,0x17,0xE8,0xA7,0x58,0x45,0xB8,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFB,0x00,0xFF,0x00,0xFE,0x00,0x7F,0x00,0xBF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x00,0x7F,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFB,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x00,0xBF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x00,0xBF,0x00,0xFF,0x00,0xBF,0x00,
  0xFD,0x00,0xFA,0x01,0xFF,0x00,0x7F,0x00,0xBF,0x00,0xFF,0x00,0xFF,0x00,0xBF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xBF,0x00,0xDF,0x00,0xFF,0x00,0xFF,0x00,0xF7,0x08,
  0xFF,0x00,0xFF,0x00,0xDF,0x00,0xEF,0x00,0xF7,0x00,0xF7,0x08,0xE3,0x0C,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFD,0x02,0xFE,0x01,0xFF,0x00,
  0xBF,0x40,0x7F,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x01,0xFF,0x00,0x7B,0x84,
  0xF0,0x00,0xD0,0x20,0xB8,0x40,0x78,0x80,0x7C,0x80,0xBF,0x40,0xDF,0x20,0xEF,0x10,
  0x00,0x04,0x08,0x00,0x20,0x00,0x10,0x00,0x10,0x00,0x0E,0x00,0x87,0x00,0x9F,0x00,
  0x04,0x00,0x03,0x00,0x02,0x00,0x03,0x00,0x04,0x00,0x08,0x00,0x10,0x00,0xA0,0x00,
  0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x41,0x00,0x22,0x00,0x16,0x00,
  0x0F,0x00,0x2F,0x00,0x0F,0x00,0x4F,0x00,0x8F,0x00,0x0F,0x00,0x0F,0x00,0x00,0x00,
  0xF1,0x00,0xF1,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xF0,0x00,
  0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x09,0x00,0x0F,0x00,0xFB,0x04,
  0x1F,0xFF,0x3F,0xFF,0x2E,0xFF,0x35,0xFF,0x38,0xFF,0x39,0xFE,0x3D,0xFF,0x3B,0xFF,
  0x46,0xB8,0x87,0x78,0x07,0xF8,0x0F,0xF0,0x83,0xFC,0x07,0xF8,0x02,0xFD,0x07,0xF8,
  0xBF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x6B,0x80,0xBD,0x00,0xFD,0x02,0xDF,0x00,
  0xBF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x06,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x10,0x00,0x1F,0x00,0x9F,0x00,0xBF,0x00,
  0x7F,0x00,0xFF,0x00,0xF7,0x00,0xFF,0x00,0x14,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x7F,0x00,0xFF,0x00,0xF7,0x00,0xFF,0x00,0x23,0x00,0xFF,0x00,0xFF,0x00,0xBF,0x00,
  0xFF,0x00,0xFF,0x00,0xFB,0x00,0xFA,0x00,0xFF,0x00,0xFD,0x00,0xFF,0x00,0xBF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0x01,0x00,0xFF,0x00,0xFF,0x00,0xDF,0x00,0xEF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0x0A,0x05,0xFF,0x00,0xFF,0x00,0xF7,0x00,0xF9,0x00,
  0xFF,0x00,0xFF,0x00,0x53,0x00,0xCF,0x30,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xBF,0x40,0xD7,0x28,0x40,0x3F,0xEE,0x10,0xF3,0x00,0xC6,0x00,0xC6,0x00,0xC0,0x00,
  0xF6,0x09,0xF8,0x07,0x78,0x87,0x7F,0x00,0x7F,0x00,0x8F,0x00,0x2F,0x40,0x27,0x00,
  0xFF,0x00,0xF6,0x09,0xFF,0x00,0xFF,0x00,0xDE,0x21,0xFC,0x02,0xFC,0x00,0xFC,0x00,
  0xDF,0x20,0x10,0xE0,0xA8,0x50,0x6C,0x80,0xF2,0x00,0x1D,0x00,0x00,0x00,0x00,0x00,
  0x81,0x7E,0x08,0x05,0x08,0x00,0x10,0x00,0x20,0x00,0x40,0x00,0x80,0x00,0x80,0x00,
  0x0F,0x00,0x1F,0x00,0x9F,0x00,0x3F,0x00,0x1F,0x00,0x1F,0x00,0x1F,0x00,0x1F,0x00,
  0xF0,0x00,0xE8,0x00,0xE0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,
  0x02,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x40,0x00,0x20,0x00,
  0x17,0xFF,0x2F,0xFF,0x3F,0xFF,0x17,0xFF,0x3E,0xFF,0x3E,0xFF,0x3C,0xFF,0x3E,0xFF,
  0x0F,0xF0,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,
  0xEF,0x00,0xDF,0x00,0xCF,0x00,0xFF,0x00,0xFF,0x00,0xF9,0x00,0xE3,0x00,0xE6,0x00,
  0xDF,0x00,0xFF,0x00,0xFF,0x00,0xE7,0x18,0xFF,0x00,0xFB,0x00,0xFD,0x00,0xFF,0x00,
  0xDF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xF7,0x00,0xFB,0x00,0xFF,0x00,0xFD,0x00,
  0xFF,0x00,0xFF,0x00,0xBF,0x00,0xFF,0x00,0xF7,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xDF,0x00,0xFF,0x00,0xFF,0x00,0xF7,0x08,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xEF,0x00,0xFF,0x00,0xDF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xF7,0x00,0xEF,0x00,0xFF,0x00,0xFE,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFB,0x00,0xFE,0x01,0xFF,0x00,0xFF,0x00,0x7F,0x00,0xB8,0x07,0xE0,0x1F,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x00,0xFF,0x00,0xC0,0x3F,0x01,0xFF,0x00,0xFF,
  0xE0,0x00,0x78,0x80,0xF8,0x00,0xF8,0x00,0xF8,0x00,0x0F,0xF0,0x83,0xFC,0xF0,0xFF,
  0x27,0x00,0x53,0x00,0xEB,0x00,0x34,0x00,0x00,0x00,0x00,0x01,0xC1,0x00,0xC3,0x00,
  0xF0,0x0C,0xF0,0x02,0xC0,0x21,0x20,0x40,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
  0x01,0x00,0x02,0x00,0x00,0x00,0x00,0x80,0x40,0x00,0x20,0x00,0x20,0x00,0x50,0x00,
  0x40,0x00,0x20,0x00,0x00,0x00,0x09,0x00,0x02,0x00,0x02,0x04,0x06,0x00,0x01,0x08,
  0x3D,0x02,0x7F,0x00,0x3F,0x80,0x3F,0x00,0x3F,0x00,0x3F,0x00,0x3F,0x00,0x3F,0x00,
  0x80,0x00,0x84,0x00,0xC8,0x00,0xD0,0x00,0xA0,0x00,0x80,0x20,0xB0,0x00,0x88,0x00,
  0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x01,0x00,0x02,0x00,0x04,0x00,
  0x3E,0xFD,0x3A,0xFF,0x36,0xFF,0x1E,0xFF,0x0E,0xFF,0x0E,0xFF,0x16,0xFF,0x3A,0xFF,
  0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x16,0xE8,0x07,0xF8,0x26,0xD8,0x06,0xF8,
  0xE1,0x00,0xF6,0x00,0xFF,0x00,0xBF,0x00,0x3D,0x00,0x3D,0x00,0x3F,0x00,0x7F,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xF7,0x08,
  0xF9,0x02,0xFF,0x00,0x7F,0x00,0xBF,0x00,0xDF,0x00,0xFF,0x00,0x8F,0x30,0xFF,0x00,
  0xFB,0x00,0xFF,0x00,0x7F,0x00,0xBF,0x00,0xFF,0x00,0xFF,0x00,0xBF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0x7F,0x00,0xBF,0x00,0xDF,0x00,0xFF,0x00,0xBF,0x00,0x7F,0x00,
  0xFF,0x00,0xFF,0x00,0xBF,0x00,0xDF,0x00,0xFF,0x00,0xFF,0x00,0xDF,0x00,0xF7,0x08,
  0x7F,0x80,0xFE,0x01,0xDE,0x01,0xEF,0x00,0xFF,0x00,0xFC,0x03,0xFA,0x05,0xFA,0x05,
  0x00,0xFF,0x04,0xFB,0xB5,0x4A,0x20,0xDF,0x80,0x7F,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x01,0xFF,0xD0,0x2F,0x41,0xBE,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x06,0xFF,
  0x0E,0xFF,0x7F,0xFF,0x7F,0xFF,0x6F,0xFF,0x0F,0xFF,0x8F,0x7F,0x1F,0xFF,0x0F,0xFF,
  0x24,0xC0,0x18,0xE0,0x82,0xFC,0xC1,0xFE,0xF0,0xFF,0xF0,0xFF,0xF8,0xFF,0xFE,0xFF,
  0x80,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x88,0x00,0x88,0x00,0x10,0x84,0x62,0x80,
  0x08,0x00,0x04,0x00,0x02,0x00,0x01,0x00,0x01,0x00,0x00,0x01,0x02,0x00,0x04,0x00,
  0x10,0x00,0x20,0x00,0x40,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xBF,0x00,0x7F,0x00,0x3F,0x00,0x3F,0x00,0x3F,0x00,0x77,0x08,0x3B,0x04,0x7D,0x02,
  0x84,0x00,0x82,0x00,0x81,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x82,0x00,0x04,0x00,
  0x00,0x00,0x00,0x00,0x40,0x00,0x80,0x00,0x80,0x00,0x40,0x00,0x20,0x00,0x10,0x00,
  0x3E,0xFF,0x3E,0xFF,0x3E,0xFF,0x3E,0xFD,0x3A,0xFF,0x36,0xFF,0x1E,0xFF,0x2E,0xFF,
  0x86,0x78,0x07,0xF8,0x07,0xF8,0x06,0xF9,0x86,0x78,0x47,0xB8,0x07,0xF8,0x07,0xF8,
  0xDF,0x00,0x1F,0x00,0x3F,0x00,0x3F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFD,0x00,0xFF,0x00,0xFD,0x02,0xFF,0x00,0xBF,0x00,0xDF,0x00,
  0xF7,0x00,0xFB,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xBF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFD,0x00,0xFE,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xBF,0x00,0xDF,0x00,
  0xFC,0x03,0xFC,0x03,0xFC,0x03,0xFC,0x03,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x03,0xFC,0xCC,0x30,0x38,0x00,0x3F,0x00,
  0x3F,0xFF,0x3E,0xFF,0x03,0xFF,0x00,0xFF,0x80,0x7F,0x60,0x1F,0xE0,0x1F,0xF8,0x07,
  0xFE,0xFF,0xEF,0xFF,0xBE,0xFF,0x07,0xFF,0x0F,0xFF,0x07,0xFF,0x00,0xFF,0x04,0xFF,
  0x7E,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xBF,0xFF,
  0x41,0x80,0x00,0xC0,0x80,0xC0,0x80,0xC0,0xA0,0xC0,0x80,0xE0,0x80,0xE0,0x80,0xE0,
  0x00,0x00,0x80,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x90,0x00,0x00,0x00,0x04,0x00,
  0x01,0x00,0x02,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x12,0x00,0x01,0x20,0x00,0x40,
  0x7E,0x01,0x7F,0x00,0x7F,0x00,0x7F,0x00,0x7F,0x00,0x7F,0x00,0xFF,0x00,0xFF,0x00,
  0x08,0x00,0x80,0x00,0x60,0x00,0x40,0x00,0x60,0x00,0x90,0x00,0x08,0x00,0x04,0x00,
  0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x2E,0xFF,0x16,0xFF,0x3A,0xFF,0x3E,0xFF,0x3C,0xFF,0x3F,0xFE,0x3E,0xFD,0x3E,0xFB,
  0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x03,0xFC,0x05,0xFA,0x06,0xF9,0x87,0x78,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x00,0xFE,0x00,0xFE,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0x9F,0x00,0x87,0x00,0x0B,0x00,0x1F,0x00,0x3F,0x00,0x3F,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFB,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xF7,0x00,0xFB,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFB,0x00,0xFD,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xDF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xF7,0x00,0xEF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xF8,0x07,
  0x77,0x00,0xFF,0x00,0x8F,0x00,0xA3,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x70,0x8F,
  0xFC,0x03,0xFE,0x01,0xFE,0x01,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF8,0x07,0x3F,0xFF,
  0x00,0xFF,0x00,0xFF,0x01,0xFF,0x01,0xFF,0x01,0xFF,0x0B,0xFF,0x7F,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xBF,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0xFF,0xBF,0xFF,0xFF,0xFF,
  0x90,0xE0,0x98,0xE0,0x98,0xE0,0x88,0xF0,0xD4,0xE0,0xD2,0xE0,0xD1,0xE0,0xD0,0xE0,
  0x02,0x00,0x00,0x01,0x07,0x00,0x02,0x01,0x02,0x04,0x01,0x08,0x03,0x10,0x83,0x20,
  0x00,0x80,0x00,0x00,0x19,0x00,0xFF,0x00,0x7F,0x80,0xBF,0x40,0xFF,0x00,0xFF,0x00,
  0x7F,0x00,0xFE,0x00,0xFE,0x00,0xDE,0x00,0xF6,0x08,0xFE,0x00,0xFC,0x00,0xFF,0x00,
  0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x04,0x00,0x08,0x00,0x00,0x00,
  0x40,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,
  0x7E,0xD7,0x4E,0xFF,0x7E,0xEF,0x4E,0xFF,0x16,0xFF,0x3A,0xFF,0x7A,0xFF,0x7C,0xFF,
  0x4B,0xB4,0x11,0xEE,0x01,0xFE,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x04,0xFB,0x02,0xFD,
  0xFE,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x80,0x7F,0x80,0x4F,0xB0,0x0F,0xF0,0x1F,0xE0,
  0xFF,0x00,0x7F,0x00,0x9F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0x7F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xE8,0x1F,0xE2,0x1F,0xF0,0x0F,0xF0,0x0F,0xE8,0x07,0xF8,0x07,0xEE,0x01,0xDE,0x01,
  0x0F,0xFF,0x8C,0xFF,0x00,0xFF,0x20,0xDF,0x41,0x9E,0x30,0x8F,0xF8,0x07,0x7C,0x03,
  0x1F,0xFF,0x00,0xFF,0x04,0xFB,0x13,0xEC,0x1F,0xE0,0x1F,0xE0,0x0F,0xF0,0x47,0xB8,
  0xFF,0xFF,0x20,0xDF,0xE0,0x1F,0xC0,0x3F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x80,0x7F,
  0xC1,0xFF,0x1C,0xE3,0x42,0xBD,0x58,0xA7,0x08,0xF7,0x02,0xFD,0x40,0xBF,0x1C,0xE3,
  0xD0,0xE0,0x92,0xE0,0x1E,0xE0,0x1E,0xE1,0x3D,0xC2,0x3B,0xC4,0x37,0xC8,0x6F,0x90,
  0x43,0x00,0x03,0x40,0x23,0x80,0x18,0x00,0x88,0x00,0xC4,0x00,0xE7,0x00,0xC3,0x00,
  0xFF,0x00,0xF7,0x08,0xFB,0x04,0xFD,0x02,0x7F,0x00,0xFF,0x00,0x87,0x00,0x03,0x00,
  0xFE,0x00,0xFE,0x00,0xFE,0x00,0xFE,0x00,0xFE,0x00,0xFE,0x00,0xFE,0x00,0xDE,0x00,
  0x80,0x00,0x40,0x00,0x00,0x40,0x00,0x20,0x10,0x00,0x08,0x00,0x04,0x00,0x02,0x00,
  0x04,0x00,0x02,0x00,0x02,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,
  0x7C,0xFF,0x7E,0xFD,0x7E,0xBB,0x3E,0xD7,0x4E,0xFF,0x6E,0xFF,0x6E,0xDF,0x74,0xBF,
  0x01,0xFE,0x02,0xFD,0x84,0x7B,0x08,0xF7,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x10,0xEF,
  0x13,0xEC,0x0F,0xF0,0x0F,0xF0,0x7F,0x80,0x7F,0x80,0x3F,0xC0,0x3F,0xC0,0x7F,0x80,
  0xFF,0x00,0xFD,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x00,0xFD,0x00,0xFF,0x00,
  0xFF,0x00,0xCF,0x30,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x01,0xF1,0x0E,
  0xF9,0x06,0xFC,0x03,0xFE,0x01,0xFF,0x00,0xFF,0x00,0x3F,0xC0,0x7F,0x80,0xFF,0x00,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0xC0,0x3F,0xE0,0x1F,0xE0,0x1F,0xF0,0x0F,0xF9,0x06,
  0xE0,0x1F,0xF0,0x0F,0x60,0x9F,0x00,0xFF,0x00,0xFF,0x01,0xFE,0x01,0xFE,0x81,0x7E,
  0x6F,0x90,0x77,0x88,0xFB,0x04,0xFD,0x02,0xFE,0x01,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xC3,0x00,0xFE,0x01,0xFC,0x00,0xE8,0x00,0xF0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,
  0x03,0x00,0x03,0x00,0x87,0x00,0x53,0x00,0x21,0x00,0x13,0x00,0x0B,0x00,0x03,0x08,
  0xFF,0x00,0xDF,0x00,0xBF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x01,0x00,0x81,0x00,0x00,0x00,0x04,0x00,0x88,0x00,0x90,0x00,0xE0,0x00,0xC0,0x00,
  0x00,0x00,0x00,0x00,0x80,0x00,0x40,0x00,0x20,0x00,0x10,0x00,0x08,0x00,0x04,0x00,
  0x7C,0xFF,0x78,0xFF,0x7E,0xFD,0x7C,0xFF,0x7C,0xFF,0x38,0xFF,0x34,0xFF,0x4C,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x10,0xEF,
  0x1F,0xE0,0x1F,0xE0,0x3F,0xC0,0x17,0xE8,0x2F,0xD0,0x0B,0xF4,0x07,0xF8,0x2F,0xD0,
  0xFF,0x00,0xEF,0x00,0xFF,0x00,0xDF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x00,
  0xFF,0x00,0xFF,0x00,0xF7,0x00,0xF9,0x00,0xF1,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x81,0x7E,0x80,0x7F,0xC0,0x3F,0xC0,0x3F,0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,0xE4,0x1F,
  0xFF,0x00,0xFE,0x00,0xFC,0x00,0x7C,0x80,0x2C,0xD0,0x08,0xF0,0x0F,0xF0,0x01,0xFE,
  0x20,0x00,0x10,0x00,0x08,0x00,0x00,0x00,0x00,0x01,0x02,0x00,0x80,0x02,0x86,0x01,
  0x0F,0x00,0x03,0x00,0x43,0x00,0x83,0x00,0x23,0x00,0x7F,0x00,0x03,0x00,0x03,0x00,
  0xFF,0x00,0xFE,0x00,0xFD,0x00,0xFF,0x00,0xFF,0x00,0xAF,0x50,0xD9,0x20,0xD8,0x20,
  0xE0,0x00,0xE0,0x00,0xF0,0x00,0xF0,0x00,0xF8,0x00,0xF4,0x00,0xFA,0x00,0x45,0x00,
  0x02,0x00,0x00,0x00,0x01,0x00,0x10,0x00,0x20,0x00,0x40,0x00,0x00,0x00,0x00,0x00,
  0x5C,0xFF,0x5C,0xFF,0x7C,0xBF,0x74,0xFF,0xF8,0xFF,0xFC,0xFF,0xFC,0xFF,0xFC,0xFF,
  0x00,0xFF,0x00,0xFF,0x40,0xBF,0x80,0x7F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x4F,0xB0,0x07,0xF8,0x03,0xFC,0x01,0xFE,0x02,0xFD,0x01,0xFE,0x00,0xFF,0x00,0xFF,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x80,0xFF,0x00,0x7F,0x80,
  0xFF,0x00,0xFF,0x00,0xCF,0x00,0xCF,0x00,0xB7,0x00,0xE3,0x00,0xE3,0x00,0xF1,0x00,
  0xFF,0x00,0xFF,0x00,0xFD,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x00,0xE8,0x00,0xF1,0x00,0xC0,0x00,
  0xFF,0x00,0xFF,0x00,0xDF,0x00,0x0F,0x00,0x0F,0x00,0x07,0x00,0x03,0x04,0x04,0x03,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x01,0xFD,0x02,0xFB,0x04,
  0xC0,0x3F,0xC0,0x3F,0x80,0x7F,0x00,0xFF,0x32,0xCD,0xFE,0x01,0xF8,0x07,0xFC,0x03,
  0x88,0x00,0x30,0xC0,0x0C,0xF0,0x00,0xFE,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x03,0x80,0x03,0x40,0x23,0x00,0x17,0x00,0x8F,0x00,0x63,0x88,0x3F,0xC0,0x0F,0xF0,
  0xA8,0x50,0x70,0x88,0xF0,0x04,0xF0,0x02,0xF0,0x01,0xF0,0x00,0xF0,0x00,0xE0,0x00,
  0x00,0x01,0x02,0x00,0x00,0x00,0x10,0x00,0x20,0x00,0xC0,0x00,0x00,0x80,0x00,0x80,
  0x00,0x00,0x80,0x00,0x40,0x00,0x20,0x00,0x10,0x00,0x09,0x00,0x06,0x00,0x04,0x00,
  0xFC,0xFF,0xBC,0xFF,0xDC,0xFF,0xDC,0xFF,0xDC,0xFF,0xAC,0xFF,0x74,0xFF,0xF9,0xFE,
  0x00,0xFF,0x00,0xFF,0x40,0xBF,0x00,0xFF,0x00,0xFF,0x40,0xBF,0x80,0x7F,0x00,0xFF,
  0x3F,0xC0,0x7F,0x80,0x3F,0xC0,0x3F,0xC0,0x7F,0x80,0xFF,0x00,0xBF,0x40,0xCF,0x30,
  0xF9,0x00,0xFD,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xF9,0x00,
  0xFF,0x00,0xFE,0x00,0xFC,0x00,0xF8,0x00,0xF8,0x00,0xF0,0x00,0xE0,0x00,0xE0,0x00,
  0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x06,0x01,0x03,0x00,0x01,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
  0x6F,0x90,0x1F,0xE0,0xFF,0x00,0xE4,0x1B,0xF0,0x0F,0xF0,0x0F,0xB0,0x4F,0x78,0x07,
  0xF0,0x0F,0xC0,0x3F,0x80,0x7F,0x00,0xFF,0x00,0xFF,0x01,0xFE,0x07,0xF8,0x0F,0xF0,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x20,0xDF,0x03,0xFC,0xF1,0x0E,0xF1,0x0E,0xF1,0x0E,
  0x00,0xFF,0xA3,0x5C,0xB0,0x48,0xD0,0x20,0xD8,0x00,0xB0,0x40,0xF0,0x00,0xB0,0x00,
  0x63,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,
  0xE1,0x00,0xF0,0x00,0x08,0x00,0x10,0x00,0x18,0x00,0x38,0x00,0x7C,0x00,0xFE,0x00,
  0x20,0x00,0x10,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x01,0x00,0x00,0x01,
  0x04,0x00,0x09,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x01,0xFF,0x01,0xFF,0x01,0xFF,
  0xF8,0xFF,0xF8,0xFF,0xFC,0xFB,0x78,0xF7,0xA8,0xFF,0x98,0xFF,0xF8,0xFF,0x98,0xFF,
  0x2F,0xD0,0x1F,0xE0,0x5F,0xA0,0x1D,0xE2,0x73,0x8C,0x7F,0x80,0x3F,0xC0,0x0F,0xF0,
  0xFF,0x00,0xFF,0x00,0xF7,0x00,0x13,0x00,0x0B,0x00,0x87,0x00,0x07,0x00,0x07,0x00,
  0xF9,0x00,0xE7,0x00,0xF7,0x00,0xD7,0x00,0xC3,0x00,0xE1,0x00,0xE2,0x00,0xF4,0x00,
  0xF1,0x00,0xE1,0x00,0xA0,0x00,0x50,0x00,0x80,0x00,0x00,0x00,0x04,0x00,0xC0,0x00,
  0xC0,0x00,0xC0,0x00,0xA4,0x00,0x20,0x00,0x20,0x00,0x20,0x00,0x60,0x00,0x60,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x6C,0x13,0x3C,0x00,0x1C,0x00,0x0E,0x00,0x07,0x00,0x01,0x00,0x00,0x00,0x00,0x00,
  0x9F,0x20,0x7F,0x00,0x7F,0x00,0xFF,0x00,0xF8,0x00,0xF0,0x00,0x70,0x00,0x30,0x00,
  0xF1,0x0E,0xF3,0x0C,0xF3,0x0C,0xF3,0x0C,0xF2,0x0C,0x7F,0x00,0x0F,0x00,0x0B,0x00,
  0xB0,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0xE0,0x00,0xE0,0x00,0x20,0x00,
  0x0D,0x00,0x0D,0x00,0x0D,0x00,0x1D,0x00,0x1D,0x00,0x1D,0x00,0x1D,0x00,0x3D,0x00,
  0xFE,0x00,0xFF,0x00,0x5E,0xA1,0x4F,0xB0,0x4F,0xB0,0x0F,0xB0,0x04,0xB8,0x86,0x38,
  0x00,0x04,0x08,0x00,0x80,0x00,0x00,0xC0,0xC0,0x00,0x80,0x40,0xE0,0x00,0xC0,0x20,
  0x80,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x02,0x00,0x04,0x00,0x06,0x00,
  0x01,0xFF,0x01,0xFF,0x01,0xFF,0x01,0xFF,0x01,0xFF,0x00,0xFF,0x01,0xFF,0x01,0xFF,
  0x68,0xFF,0xF8,0xFF,0xF1,0xFE,0xFA,0xFD,0xF8,0xFF,0xF8,0xFF,0x78,0xF7,0x78,0xEF,
  0x40,0xBF,0x80,0x7F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x0F,0xF0,0x0F,0xF0,0x07,0xF8,0x07,0xF8,0x03,0xFC,0x03,0xFC,0x01,0xFE,0x01,0xFE,
  0x03,0x00,0xA1,0x00,0xE1,0x00,0xE1,0x00,0xE0,0x00,0xE0,0x00,0xF0,0x00,0xF9,0x00,
  0xF2,0x00,0xF9,0x00,0xF8,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x00,0xFF,0x00,0xFF,0x00,
  0x02,0x00,0x00,0x00,0x80,0x00,0x08,0x00,0x10,0x00,0x38,0x00,0xF8,0x00,0xFC,0x00,
  0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,
  0x3D,0x00,0x3D,0x00,0x3D,0x00,0x3D,0x00,0x39,0x00,0x39,0x00,0x38,0x00,0x38,0x00,
  0x8F,0x30,0x8E,0x30,0x8F,0x30,0xEF,0x10,0x67,0x18,0xEF,0x10,0xE7,0x18,0xE7,0x18,
  0x80,0x70,0x48,0xB0,0xE4,0x18,0xA6,0x58,0x33,0x4C,0x10,0x6E,0x09,0x76,0xC8,0x37,
  0x01,0x00,0x20,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,
  0x01,0xFF,0x01,0xFF,0x01,0xFF,0x01,0xFF,0x01,0xFE,0x01,0xFF,0x01,0xFF,0x01,0xFF,
  0xB0,0xDF,0xB0,0xFF,0xB0,0xFF,0xD0,0x7F,0xE0,0xFF,0xF1,0xFE,0xF2,0xFD,0xF0,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x80,0x7F,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x80,0x7F,0x80,
  0xF2,0x00,0xFC,0x00,0xFC,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x00,
  0x7F,0x00,0x77,0x00,0x7B,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x00,
  0xFE,0x00,0xF6,0x00,0xFF,0x00,0xFD,0x00,0xFD,0x00,0xFD,0x00,0xFD,0x00,0xFF,0x00,
  0x20,0x00,0xE0,0x00,0xE0,0x00,0xC0,0x00,0xC0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,
  0x38,0x00,0x3C,0x00,0x3C,0x00,0x3C,0x00,0x7C,0x00,0x79,0x00,0xF8,0x00,0xF8,0x00,
  0xE7,0x18,0x67,0x18,0xE7,0x18,0xE3,0x1C,0xE3,0x1C,0xE3,0x1C,0xE3,0x1C,0xE3,0x1C,
  0x8C,0x33,0x84,0x3B,0x86,0x39,0xE2,0x1D,0xE3,0x1C,0xC1,0x1E,0xC1,0x1E,0xD1,0x0E,
  0x80,0x40,0x00,0xA0,0x50,0x80,0x49,0x80,0x04,0xC0,0x24,0xC0,0x00,0xE0,0x90,0x60,
  0x01,0xFF,0x02,0xFF,0x03,0xFF,0x03,0xFF,0x03,0xFF,0x03,0xFF,0x03,0xFF,0x03,0xFE,
  0xF0,0xFF,0xF0,0xFF,0x60,0xFF,0xD0,0xFF,0xB0,0xFF,0xB0,0xFF,0xB0,0x7F,0xD0,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x80,0x7F,
  0x7F,0x80,0x3F,0xC0,0x3F,0xC0,0x1F,0xE0,0x1F,0xE0,0x07,0xF8,0x03,0xFC,0x07,0xF8,
  0xFD,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFB,0x00,
  0xFF,0x00,0xBF,0x00,0xFF,0x00,0xFE,0x00,0xFE,0x00,0xEE,0x00,0xFE,0x00,0xFE,0x00,
  0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,
  0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,
  0x01,0x00,0x01,0x00,0x03,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x0F,0x00,0x0F,0x00,
  0xF8,0x00,0xFA,0x00,0xFE,0x00,0xFC,0x00,0xFC,0x00,0xFC,0x00,0xFE,0x00,0xFE,0x00,
  0xE3,0x1C,0xF3,0x0C,0xF1,0x0E,0xF1,0x0E,0x71,0x0E,0x71,0x0E,0x73,0x0C,0x73,0x0C,
  0xF1,0x0E,0xF9,0x06,0xF9,0x06,0xFD,0x02,0xFC,0x03,0xFE,0x01,0xFF,0x00,0xFF,0x00,
  0x80,0x70,0x80,0x70,0x88,0x70,0x80,0x78,0xC0,0x38,0xC4,0x38,0x44,0xB8,0x24,0xD8,
  0x01,0xFF,0x03,0xFF,0x03,0xFF,0x03,0xFF,0x01,0xFF,0x02,0xFF,0x12,0xEF,0x03,0xFF,
  0xE1,0xFE,0xE2,0xFD,0xE0,0xFF,0xE0,0xFF,0xE8,0xF7,0xF0,0xEF,0xC0,0xFF,0x20,0xFF,
  0xFF,0x00,0xFF,0x00,0xDF,0x20,0xAF,0x50,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFA,0x00,0xFE,0x00,0xFA,0x00,0xF6,0x00,0xEE,0x00,0x5E,0x00,0xFF,0x00,0xFD,0x02,
  0xE0,0x00,0xC0,0x00,0xFC,0x00,0xC0,0x20,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,
  0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,
  0x0F,0x00,0x0F,0x00,0x1F,0x00,0x3F,0x00,0x3F,0x00,0x7F,0x00,0xFF,0x00,0xFF,0x00,
  0xFE,0x00,0xFE,0x00,0xFE,0x00,0xFE,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x73,0x0C,0x73,0x0C,0x7B,0x04,0x7B,0x04,0x7B,0x04,0x7B,0x04,0x3B,0x04,0x3B,0x04,
  0xFF,0x00,0xFF,0x00,0xF7,0x00,0xF7,0x00,0xF7,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xB0,0x4C,0xC0,0x3C,0xE0,0x1D,0xF2,0x0C,0xF2,0x0C,0xFA,0x04,0xFC,0x02,0xFD,0x02
};