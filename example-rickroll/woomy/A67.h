// ///////////////////////
// //                   //
// //  File Attributes  //
// //                   //
// ///////////////////////

// Filename: A67.png
// Pixel Width: 160px
// Pixel Height: 128px

// /////////////////
// //             //
// //  Constants  //
// //             //
// /////////////////

const int A67_tile_map_size = 0x0140;
const int A67_tile_map_width = 0x14;
const int A67_tile_map_height = 0x10;

const int A67_tile_data_size = 0x0FB0;
const int A67_tile_count = 0x0140;

// ////////////////
// //            //
// //  Map Data  //
// //            //
// ////////////////

const unsigned char A67_map_data[] ={
  0x00,0x01,0x02,0x03,0x04,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x07,0x00,
  0x00,0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,0x00,0x00,0x00,0x10,0x11,0x12,0x00,
  0x00,0x00,0x13,0x00,0x14,0x15,0x16,0x17,0x00,0x18,0x00,0x19,0x00,0x00,0x00,0x1A,
  0x1B,0x1C,0x1D,0x1E,0x00,0x00,0x1F,0x20,0x00,0x21,0x22,0x23,0x24,0x25,0x26,0x00,
  0x27,0x28,0x00,0x29,0x2A,0x2B,0x2C,0x2D,0x2E,0x00,0x00,0x00,0x00,0x2F,0x1D,0x30,
  0x31,0x32,0x33,0x00,0x34,0x35,0x36,0x37,0x38,0x39,0x3A,0x3B,0x3C,0x00,0x00,0x00,
  0x3D,0x3E,0x3B,0x3F,0x40,0x41,0x42,0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x4A,0x3B,
  0x4B,0x00,0x00,0x4C,0x4D,0x4E,0x3B,0x3B,0x4F,0x50,0x51,0x52,0x53,0x54,0x55,0x56,
  0x57,0x58,0x59,0x3B,0x4B,0x00,0x00,0x5A,0x5B,0x5C,0x3B,0x3B,0x5D,0x5E,0x5F,0x60,
  0x61,0x62,0x63,0x64,0x65,0x66,0x67,0x68,0x4B,0x00,0x00,0x69,0x6A,0x6B,0x3B,0x3B,
  0x6C,0x6D,0x6E,0x6F,0x70,0x71,0x72,0x73,0x74,0x75,0x76,0x77,0x78,0x00,0x00,0x79,
  0x7A,0x7B,0x3B,0x3B,0x7C,0x7D,0x7E,0x7F,0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,
  0x88,0x00,0x00,0x89,0x8A,0x8B,0x3B,0x3B,0x8C,0x8D,0x8E,0x8F,0x90,0x91,0x92,0x93,
  0x94,0x95,0x96,0x97,0x98,0x99,0x9A,0x9B,0x9C,0x9D,0x9E,0x3B,0x9F,0xA0,0xA1,0x00,
  0x00,0xA2,0xA3,0xA4,0xA5,0xA6,0xA7,0xA8,0xA9,0xAA,0xAB,0xAC,0xAD,0xAE,0xAF,0xB0,
  0xB1,0xB2,0xB3,0x00,0xB4,0xB5,0xB6,0xB7,0xB8,0xB9,0xBA,0xBB,0xBC,0xBD,0xBE,0xBF,
  0xC0,0xC1,0xC2,0xC3,0xC4,0x00,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xCB,0x3B,0xCC,0xCD,
  0xCE,0xCF,0xD0,0xD1,0xD2,0xD3,0xD4,0xD5,0xD6,0xD7,0xD8,0xD9,0xDA,0xDB,0xDC,0xDD,
  0xDE,0x3B,0xDF,0xE0,0xE1,0xE2,0x3B,0xE3,0xE4,0xE5,0xE6,0xE7,0xE8,0xE9,0xEA,0xEB,
  0xEC,0xED,0xEE,0xEF,0xF0,0x3B,0xF1,0xF2,0xF3,0xF4,0xF5,0xF6,0xF7,0xF8,0xF9,0xFA
};

// /////////////////
// //             //
// //  Tile Data  //
// //             //
// /////////////////

const unsigned char A67_tile_data[] ={
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x01,0xFF,0x10,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x80,0xFF,0x20,0xFF,0x00,0xFF,
  0x10,0xFF,0x00,0xFF,0x01,0xFF,0x42,0xFF,0x00,0xFF,0x00,0xFF,0x10,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x08,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x60,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x04,0xFB,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x18,0xE7,0x00,0xFF,0xC0,0x3F,0x00,0xFF,
  0x17,0xFF,0x1E,0xFF,0x1C,0xFF,0x05,0xFF,0x0C,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,
  0x80,0xFF,0x00,0xFF,0x00,0xFF,0x60,0xFF,0x03,0xFF,0x80,0xFF,0x81,0xFF,0x80,0xFF,
  0x10,0xFF,0x00,0xFF,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x18,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x01,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x11,0xFF,0x10,0xFF,0x98,0xFF,0xC8,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x54,0xFF,0x60,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x40,0xFF,0x20,0xFF,0x01,0xFF,0x08,0xFF,0x10,0xFF,0x30,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x04,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x07,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x7F,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xC0,0xFF,0xF8,0xFF,
  0x00,0xFF,0x08,0xF7,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x03,0xFC,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x02,0xFD,0x00,0xFF,
  0x1F,0xFF,0x1F,0xFF,0x1F,0xFF,0x3F,0xFF,0x1E,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x80,0xFF,0x00,0xFF,0x00,0xFF,0x01,0xFF,0x03,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0xC0,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x04,0xFF,0x00,0xFF,0x00,0xFF,0x20,0xFF,0x00,0xFF,0x00,0xFF,0x80,0xFF,
  0x60,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x01,0xFF,0x01,0xFF,0x03,0xFF,0x07,0xFF,0x0F,0xFF,
  0x1F,0xFF,0x7F,0xFF,0x7F,0xFF,0x8F,0xFF,0xC3,0xFF,0xF0,0xFF,0xF8,0xFF,0xFC,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0xFF,0x1F,0xFF,
  0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x80,0xFF,0xC0,0xFF,0xE0,0xFF,0xF0,0xFF,0xF8,0xFF,0xFE,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x40,0xBF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x06,0xF9,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x10,0xEF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0xFF,0xFF,0x0F,0xFF,0x00,0xFF,0x04,0xFF,0xE0,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x06,0xF9,
  0x00,0xFF,0x00,0xFF,0x03,0xFF,0x04,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x10,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x20,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x04,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x0F,0xFF,0x1F,0xFF,0x1F,0xFF,0x3E,0xFF,0x3F,0xFF,0x78,0xFF,0x7C,0xFB,0xC7,0xFF,
  0xF6,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x8F,0xFF,0x03,0xFF,0x81,0xFF,0xC1,0xFF,
  0x0F,0xFF,0x07,0xFF,0x83,0xFF,0xC1,0xFF,0xC0,0xFF,0xF0,0xEF,0xE0,0xFF,0xF0,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0x7F,0xFF,0x3F,0xFF,
  0xFE,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x80,0xFF,0x80,0xFF,0xC0,0xFF,0xC0,0xFF,0xC0,0xFF,
  0x07,0xFF,0x1F,0xFF,0x3F,0xFF,0x3F,0xFF,0x7F,0xFF,0xFF,0xFF,0x7F,0xFF,0x3F,0xFF,
  0x00,0xFF,0x00,0xFF,0x81,0xFE,0xC0,0xFF,0xE0,0xFF,0xE0,0xFF,0xF0,0xFF,0xF0,0xFF,
  0x07,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xC1,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xC0,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x10,0xFF,0x80,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x10,0xFF,0x10,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x01,0xFF,
  0x00,0xFF,0x01,0xFF,0x01,0xFF,0x03,0xFF,0x42,0xFF,0x00,0xFF,0x00,0xFF,0x41,0xFF,
  0xEF,0xFF,0xFF,0xFF,0x38,0xFF,0xED,0xF0,0x9D,0xE0,0xDF,0xE0,0xBB,0xC0,0xBD,0xC0,
  0x00,0xFF,0x00,0xFF,0x78,0x87,0x7C,0x03,0xFC,0x03,0x76,0x01,0xFC,0x01,0xF3,0x0C,
  0xF0,0xFF,0xF9,0xFE,0xF8,0xFF,0x7D,0xFE,0x7D,0xFE,0x7D,0xFE,0x7F,0xFE,0x7E,0xFF,
  0xDF,0x3F,0xDF,0x3F,0xFF,0x0F,0xFF,0x0F,0xF7,0x0F,0xCF,0x37,0xF3,0x0F,0x43,0xBF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xE0,0xFF,0xE0,0xFF,0xE0,0xFF,0xE0,0xFF,0xF0,0xFF,0xF0,0xFF,0xF0,0xFF,0xF0,0xFF,
  0x00,0xFF,0x02,0xFF,0x03,0xFF,0x03,0xFF,0x07,0xFF,0x07,0xFF,0x07,0xFF,0x04,0xFF,
  0x1F,0xFF,0x0F,0xFF,0x0F,0xFF,0x07,0xFF,0x83,0xFF,0x83,0xFF,0xC1,0xFF,0x81,0xFF,
  0xF8,0xFF,0xF8,0xFF,0xFC,0xFF,0xFC,0xFF,0xFE,0xFF,0xFE,0xFF,0xFE,0xFF,0xFF,0xFF,
  0xC0,0xFF,0x00,0xFF,0xA0,0xFF,0x30,0xFF,0x00,0xFF,0xF9,0xFF,0xFC,0xFF,0xF0,0xFF,
  0xC0,0xFF,0x00,0xFF,0x06,0xFF,0x02,0xFF,0x03,0xFF,0x00,0xFF,0x00,0xFF,0x04,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x88,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x09,0xFF,0x00,0xFF,0x10,0xFF,0x18,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x20,0xFF,0x04,0xFF,0x00,0xFF,0xC4,0xFF,0x0F,0xFF,
  0x00,0xFF,0xC0,0xFF,0x00,0xFF,0x00,0xFF,0x60,0xFF,0x02,0xFF,0x00,0xFF,0x20,0xFF,
  0x01,0xFF,0x01,0xFF,0x01,0xFF,0x01,0xFF,0x01,0xFF,0x01,0xFF,0x00,0xFF,0x00,0xFF,
  0xBC,0xC3,0xFF,0xC0,0xD9,0xE6,0xDF,0xE0,0xDA,0xE0,0xFF,0x80,0xFF,0x80,0x3F,0xC0,
  0xC1,0x3C,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x00,0xDF,0x20,0xF5,0x00,0xE5,0x18,
  0x7F,0xFE,0xFE,0x3F,0x7E,0xBF,0xEE,0x3F,0xC0,0x3F,0xC0,0x3F,0x00,0xFF,0x00,0xFF,
  0xFF,0x03,0x77,0x8B,0xFD,0x03,0xF9,0x07,0xFD,0x03,0xFD,0x03,0xFF,0x01,0x7F,0x81,
  0xF8,0xFF,0xF8,0xFF,0xF8,0xFF,0xF8,0xFF,0xF8,0xFF,0xF8,0xFF,0xF8,0xFF,0xF8,0xFF,
  0x00,0xFF,0x18,0xE7,0x00,0xFF,0x80,0x7F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x20,0xDF,
  0x00,0xFF,0x08,0xF7,0x00,0xFF,0x00,0xFF,0x08,0xF7,0x0C,0xF3,0x08,0xF7,0x08,0xF7,
  0x01,0xFF,0x40,0xFF,0xC0,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x60,0xFF,0x00,0xFF,
  0x00,0xFF,0x04,0xFF,0x1C,0xFF,0x00,0xFF,0xFE,0xFF,0xFA,0xFF,0x00,0xFF,0xBB,0xFF,
  0x20,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x28,0xFF,0x28,0xFF,0x00,0xFF,0x83,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xFA,0xFF,0xDB,0xFF,0x00,0xFF,0x08,0xFF,
  0x00,0xFF,0x21,0xFF,0x00,0xFF,0x00,0xFF,0x7A,0xFF,0x7F,0xFF,0x00,0xFF,0x7B,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x64,0xFF,0x76,0xFF,0x00,0xFF,0xFE,0xFF,
  0x3D,0xFF,0x40,0xFF,0xE0,0xFF,0x01,0xFF,0x20,0xFF,0x1C,0xFF,0x00,0xFF,0x00,0xFF,
  0x80,0xFF,0x20,0xFF,0x00,0xFF,0x00,0xFF,0x20,0xFF,0xCA,0xFF,0x02,0xFF,0xDC,0xFF,
  0x3F,0xC0,0x1F,0xE0,0x07,0xF8,0x15,0xEA,0x17,0xE0,0x37,0xC0,0x23,0xC4,0x29,0xC6,
  0x9E,0x60,0xFF,0x00,0xCD,0x30,0xFD,0x00,0xFE,0x00,0x0F,0xF0,0xE5,0x38,0xF9,0x1D,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xEC,0xD3,0xD0,0xE3,0x58,0xE1,
  0xFF,0x01,0xFD,0x03,0xFF,0x01,0xFD,0x03,0xFF,0x01,0xFF,0x01,0xBD,0x43,0xFF,0x01,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x02,0xFD,0x3F,0xC0,0x00,0xFF,0x1F,0xE0,0x00,0xFF,
  0x0E,0xF1,0x0F,0xF0,0x08,0xF7,0x08,0xF7,0xEC,0x13,0x0E,0xF1,0xE0,0x1F,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x20,0xFF,0x20,0xFF,0x00,0xFF,0x00,0xFF,0x20,0xFF,0x20,0xFF,
  0xFA,0xFF,0xFC,0xFF,0x40,0xFF,0xFE,0xFF,0xFF,0xFF,0x00,0xFF,0x8B,0xFF,0x03,0xFF,
  0x81,0xFF,0x03,0xFF,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0xFF,0xA0,0xFF,0xEA,0xFF,
  0xFE,0xFF,0xFF,0xFF,0x4C,0xFF,0x84,0xFF,0xBF,0xFF,0x01,0xFF,0x21,0xFF,0x3F,0xFF,
  0x13,0xFF,0xF8,0xFF,0x6C,0xFF,0x7E,0xFF,0x7F,0xFF,0x00,0xFF,0xA0,0xFF,0xB8,0xFF,
  0xB8,0xFF,0x00,0xFF,0xE3,0xFF,0xE8,0xFF,0xE4,0xFF,0x00,0xFF,0x26,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x1A,0xFF,0x15,0xFF,0x00,0xFF,0x81,0xFF,0xE4,0xFF,0x00,0xFF,
  0x0C,0xFF,0x00,0xFF,0x00,0xFF,0x01,0xFE,0x00,0xFC,0x02,0xF8,0x09,0xF0,0x08,0xE0,
  0x25,0x87,0x27,0x87,0x2D,0x03,0x23,0x03,0x5B,0x03,0x4B,0x03,0x17,0x01,0x52,0x01,
  0x7B,0x87,0xF6,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xEA,0xE0,0xEA,0xE0,0xF5,0xE0,0xF5,0xE0,0xF6,0xE0,0xF2,0xF0,0xEB,0xF0,0xE4,0xF1,
  0x7D,0x03,0x9F,0x01,0x5D,0x03,0x66,0x01,0x97,0x01,0xB2,0x01,0xB5,0x00,0xD9,0x20,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0xFF,0x3F,0x7F,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x1C,0xE3,
  0x08,0xF7,0x04,0xFB,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x08,0xF7,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0xE0,0xFF,0xE0,0xFF,0x00,0xFF,0x00,0xFF,0xA0,0xFF,
  0x03,0xFF,0x00,0xFF,0x24,0xFF,0x3E,0xFF,0x00,0xFF,0x0A,0xFF,0x09,0xFF,0x07,0xFF,
  0x00,0xFF,0xFF,0xFF,0x3F,0xFF,0x80,0xFF,0x3D,0xFF,0xE1,0xFF,0x80,0xFF,0xFF,0xFF,
  0x00,0xFF,0xFE,0xFF,0x7E,0xFF,0x00,0xFF,0x8C,0xFF,0xD9,0xFF,0x00,0xFF,0xD2,0xFF,
  0x02,0xFF,0xFE,0xFF,0xFF,0xFF,0x28,0xFF,0x99,0xFF,0xD8,0xFF,0x3F,0xFF,0x44,0xFF,
  0xF8,0xFF,0x68,0xFF,0x80,0xFF,0x00,0xFF,0x0A,0xFF,0x00,0xFF,0xF3,0xFF,0x08,0xFF,
  0x04,0xFF,0xC0,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x01,0xFE,0x02,0xFC,0x70,0xFC,
  0x12,0xC0,0x40,0x80,0x15,0x80,0x01,0x00,0x28,0x00,0x0A,0x00,0x81,0x00,0x55,0x00,
  0x89,0x00,0x20,0x0F,0x42,0x0C,0x20,0x0E,0x09,0x00,0xA8,0x00,0x14,0x00,0x42,0x00,
  0xFF,0x7F,0xDF,0x3F,0xBF,0x1F,0x47,0x1F,0x3F,0x0F,0xAF,0x0F,0xAF,0x0F,0xAF,0x0F,
  0xEE,0xF0,0xFE,0xE0,0xED,0xF2,0xEE,0xF0,0xEE,0xF0,0xFD,0xF0,0xE6,0xF8,0xF4,0xF8,
  0x45,0xB0,0x5A,0xA0,0x1E,0x20,0xB1,0x04,0x4C,0x00,0x55,0x00,0xD5,0x00,0x95,0x00,
  0x40,0x3F,0x9F,0x3F,0x83,0x1F,0x47,0x0F,0x9F,0x0F,0x43,0x07,0x5D,0x07,0x4A,0x03,
  0x38,0xFF,0xF8,0xFF,0xF8,0xFF,0xF8,0xFF,0xF8,0xFF,0xF8,0xFF,0xF8,0xFF,0x00,0xFF,
  0x00,0xFF,0x0C,0xF3,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x01,0xFF,0x00,0xFF,0x00,0xFF,0x71,0x8F,0x03,0xFF,0x01,0xFF,0x00,0xFF,0x03,0xFF,
  0x81,0xFF,0x01,0xFF,0x03,0xFF,0x83,0xFF,0x83,0xFF,0x83,0xFF,0x03,0xFF,0x83,0xFF,
  0x94,0xFF,0xFC,0xFF,0xF8,0xFF,0xF5,0xFF,0xF5,0xFF,0xF2,0xFF,0x00,0xFF,0x7C,0xFF,
  0x08,0xFF,0x84,0xFF,0x00,0xFF,0xFC,0xFF,0xA3,0xFF,0x00,0xFF,0x5F,0xFF,0x0E,0xFF,
  0x40,0xFF,0x60,0xFF,0x00,0xFF,0x00,0xFF,0x1E,0xFF,0x00,0xFF,0x81,0xFF,0x40,0xFF,
  0x04,0xFF,0x00,0xFF,0x00,0xFF,0x08,0xFF,0x00,0xFF,0x01,0xFF,0x00,0xFF,0x00,0xFF,
  0xE0,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x80,0xFF,0x80,0xFF,0x00,0xFF,
  0x04,0xF8,0x01,0xF8,0x00,0xF8,0x02,0xF0,0x04,0xF0,0x1A,0xE0,0x11,0xE0,0x08,0xE0,
  0x08,0x00,0x4D,0x00,0x12,0x00,0x94,0x00,0x55,0x00,0x0A,0x00,0x2A,0x00,0x8E,0x00,
  0x18,0x00,0x45,0x00,0x94,0x00,0x52,0x00,0x49,0x00,0x64,0x00,0xC9,0x00,0x54,0x00,
  0xAF,0x0F,0x2F,0x0F,0xAF,0x0F,0x2F,0x0F,0xAF,0x0F,0xAF,0x0F,0x5F,0x0F,0xAF,0x0F,
  0xF5,0xF8,0xFE,0xF0,0xF5,0xF0,0xFE,0xF0,0xFD,0xF8,0xFB,0xF8,0xFA,0xFC,0xFD,0xFC,
  0x3A,0x00,0xBA,0x00,0x62,0x10,0x4A,0x10,0x5A,0x00,0x4E,0x11,0xCF,0x10,0x5D,0x02,
  0x89,0x13,0xCC,0x01,0x88,0x01,0xAE,0x01,0xA2,0x01,0x72,0x07,0xC9,0x00,0xEA,0x00,
  0xF8,0xFF,0xF8,0xFF,0xF8,0xFF,0x78,0xFF,0x00,0xFF,0x18,0xFF,0x40,0x7F,0xA0,0x3F,
  0x3C,0xC3,0x00,0xFF,0x0F,0xF0,0x00,0xFF,0x03,0xFC,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x03,0xFF,0x03,0xFF,0x83,0x7F,0x03,0xFF,0xE3,0x1F,0x03,0xFF,0x34,0xCB,0x00,0xFF,
  0x83,0xFF,0x83,0xFF,0x97,0xEB,0x83,0xFF,0x8B,0xF7,0x83,0xFF,0x3F,0xC3,0x3B,0xC7,
  0xFC,0xFF,0xF0,0xFF,0x70,0xFF,0x70,0xFF,0xF2,0xFF,0xC0,0xFF,0xFD,0xFF,0xFD,0xFF,
  0x4D,0xFF,0x02,0xFF,0xA3,0xFF,0x1F,0xFF,0x00,0xFF,0x40,0xFF,0xBE,0xFF,0x80,0xFF,
  0x80,0xFF,0x08,0xFF,0x08,0xFF,0x00,0xFF,0x00,0xFF,0x08,0xFF,0x9C,0xFF,0x00,0xFF,
  0x00,0xFF,0x18,0xFF,0x80,0xFF,0x20,0xFF,0xE0,0xFF,0x34,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xE0,0x36,0xC0,0x49,0xC0,0x00,0xC0,0x28,0x80,0x0A,0x80,0x6A,0x80,0x24,0x80,
  0x46,0x00,0x50,0x02,0x0E,0x00,0xA2,0x00,0x2A,0x00,0x88,0x02,0xFF,0x00,0x0C,0x02,
  0xCD,0x00,0x58,0x00,0xD5,0x00,0x4A,0x00,0xD4,0x00,0x56,0x00,0x2E,0x00,0xA4,0x00,
  0x5F,0x0F,0xAF,0x0F,0x5F,0x0F,0xAF,0x0F,0xFF,0x0F,0xAF,0x0F,0xBF,0x0F,0xAF,0x0F,
  0xFD,0xFE,0xFF,0xFE,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x61,0x0E,0xA7,0x08,0xA3,0x0C,0x6B,0x04,0xD2,0x0D,0xE3,0x0C,0x35,0x8A,0x53,0x8C,
  0x55,0x00,0x55,0x00,0xAA,0x00,0xAA,0x00,0xAD,0x00,0xD6,0x00,0xB5,0x00,0xF6,0x00,
  0x50,0x1F,0x50,0x0F,0xD0,0x07,0xBC,0x07,0xD4,0x03,0xBE,0x01,0xF9,0x06,0xEA,0x15,
  0x00,0xFF,0x00,0xFF,0x01,0xFE,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x01,0xFE,
  0x00,0xFF,0x00,0xFF,0x80,0x7F,0x00,0xFF,0x0E,0xF1,0x00,0xFF,0x03,0xFC,0xC0,0x3F,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x13,0xEC,0x00,0xFF,0x00,0xFF,0x20,0xDF,0x00,0xFF,
  0x3C,0xC3,0x00,0xFF,0x08,0xF7,0x00,0xFF,0x04,0xFB,0xA0,0x5F,0x00,0xFF,0x7A,0x87,
  0x73,0x8F,0x03,0xFF,0x7F,0x83,0x03,0xFF,0x03,0xFF,0x03,0xFF,0x03,0xFF,0x73,0x8F,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xBF,0xFF,0xF7,0xFF,
  0xE0,0xFF,0xF0,0xFF,0xF0,0xFF,0xF0,0xFF,0x00,0xFF,0xFC,0xFF,0xFD,0xFF,0xE0,0xFF,
  0x39,0xFF,0x32,0xFF,0x60,0xFF,0x00,0xFF,0x50,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x80,0xFF,0x04,0xFF,0x00,0xFF,
  0x12,0x80,0x29,0x80,0xAF,0x80,0x5D,0x80,0x78,0x80,0x6A,0x80,0x55,0x80,0x35,0xC0,
  0xE4,0x02,0xD6,0x00,0x2E,0x00,0x2A,0x00,0x91,0x00,0x55,0x00,0x56,0x00,0x3A,0x00,
  0xB5,0x00,0xAA,0x00,0x48,0x02,0x56,0x00,0x49,0x00,0x55,0x00,0xAB,0x00,0xAB,0x00,
  0x5F,0x0F,0xAF,0x0F,0xAC,0x0F,0xBE,0x01,0x7F,0x00,0xFB,0x04,0xFE,0x01,0xDB,0x24,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0x7B,0xFF,0xAF,0x7F,0x7F,0xFF,0xFF,0x7F,
  0xF3,0x8C,0xF4,0x8B,0xB2,0xCD,0xF6,0x89,0xF3,0x8C,0xD6,0xA8,0x92,0xAC,0xD6,0xA8,
  0xAB,0x00,0xFD,0x00,0x1B,0xE0,0x02,0xFC,0x01,0xFE,0x01,0xFE,0x00,0xFF,0x00,0xFF,
  0xC5,0x3A,0xF2,0x0D,0xCB,0x74,0xC1,0x3E,0xE9,0x16,0xE0,0x1F,0xB0,0x8F,0x1C,0xE3,
  0x80,0x7F,0x80,0x7F,0xBC,0x43,0x80,0x7F,0x82,0x7D,0xF0,0x0F,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0xFC,0x03,0x00,0xFF,0x0C,0xF3,0xC0,0x3F,0x03,0xFC,0x80,0x7F,0x02,0xFD,
  0x40,0xBF,0x00,0xFF,0x10,0xEF,0x20,0xDF,0x00,0xFF,0xE0,0x1F,0x00,0xFF,0x82,0x7D,
  0x00,0xFF,0x20,0xDF,0x03,0xFF,0x03,0xFF,0x00,0xFF,0x03,0xFF,0x00,0xFF,0x80,0x7F,
  0x0D,0xF3,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0xFF,0xFF,0xFF,0x00,0xFF,0x01,0xFE,
  0xFF,0xFF,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0xFF,0xFF,0xFF,0x1B,0xE7,0x87,0x7F,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0xFF,0xF0,0xFF,0xF0,0xFF,0xF7,0xFF,
  0x70,0xFF,0xF0,0xFF,0xF8,0xFF,0x80,0xFF,0xFC,0xFF,0xFC,0xFF,0xC0,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x03,0xFF,0x02,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x06,0xFF,0x8E,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x01,0xFF,0x01,0xFF,0x01,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x0D,0xF0,0x07,0xF8,0x00,0xFF,0x80,0xFF,0x01,0xFE,0x01,0xFE,0xC2,0xFC,0x03,0xFC,
  0x44,0x00,0x55,0x00,0xFB,0x00,0xAF,0x50,0xAD,0x80,0x2A,0x40,0x8F,0x10,0x51,0x04,
  0xAA,0x01,0x5C,0x03,0x6D,0x02,0xB4,0x03,0xA8,0x07,0xF9,0x06,0xB3,0x04,0xE3,0x14,
  0xBD,0x42,0x8D,0x72,0x56,0xA9,0x15,0xEA,0x41,0xBE,0x00,0xFF,0x7F,0xBF,0x7F,0xBF,
  0xFF,0x7F,0xFF,0x7F,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x9E,0xE0,0xD7,0xE0,0xFB,0xC0,0xC9,0xF0,0xDD,0xE0,0xCA,0xF0,0xEA,0xD0,0xCA,0xF0,
  0x00,0xFF,0x00,0xFF,0x81,0x7F,0x7F,0x7F,0x3F,0x7F,0x3F,0x7F,0x9F,0x7F,0x00,0x7F,
  0x02,0xFD,0x00,0xFF,0x80,0xFF,0x80,0xFF,0x80,0xFF,0xC0,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x06,0xF9,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x20,0xDF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x06,0xF9,
  0x02,0xFD,0x03,0xFC,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x0F,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x03,0xFF,0x3E,0xFF,0xF0,0xFF,0xFE,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x1F,0xFF,0xFF,0xFF,0x01,0xFF,0x03,0xFF,0x00,0xFF,
  0x07,0xFF,0xF0,0x0F,0x7F,0xFF,0xE6,0xFF,0xFF,0xFF,0x7F,0xFF,0xFF,0xFF,0x00,0xFF,
  0xFF,0xFF,0xC0,0xFF,0x00,0xFF,0x8F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0xC0,0xFF,0xD0,0xFF,0x80,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x40,0xFF,0x00,0xFF,0x01,0xFF,0x00,0xFF,0x00,0xFF,0x01,0xFF,0x18,0xFF,
  0x00,0xFF,0x00,0xFF,0x3A,0xFF,0x3B,0xFF,0x30,0xFF,0x05,0xFF,0x0F,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x10,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x01,0xFC,0x02,0xFC,0x03,0xFC,0x03,0xFC,0x02,0xFC,0x07,0xF8,0x05,0xF8,0x06,0xF8,
  0x69,0x02,0x99,0x00,0x6B,0x00,0x5A,0x00,0xED,0x00,0x6E,0x00,0xBB,0x00,0xEE,0x00,
  0xE7,0x10,0xE9,0x12,0xBF,0x40,0xB5,0x08,0xFE,0x00,0xBC,0x01,0xF6,0x00,0xBE,0x00,
  0xFF,0x3F,0xBF,0x3F,0x7F,0xBF,0xFF,0x3F,0xBF,0x3F,0xFF,0x3F,0xFF,0x3F,0xBF,0x3F,
  0xCD,0xF0,0xEA,0xF0,0xE4,0xF8,0xEE,0xF0,0xE5,0xF8,0xE6,0xF8,0xF5,0xF8,0xF5,0xF8,
  0x00,0x7F,0x80,0x7F,0x80,0x7F,0x00,0x7F,0x04,0x7B,0x83,0x7F,0x1F,0x7F,0x3F,0x7F,
  0x00,0xFF,0x06,0xFF,0x04,0xFF,0x1F,0xFF,0xF8,0xFF,0x80,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x03,0xFF,0xFE,0xFF,0xF0,0xFF,0x00,0xFF,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x3F,0xFF,0xFF,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0x0F,0xFF,0x40,0xFF,0x00,0xFF,0x2C,0xFF,0x00,0xFF,0xF9,0xFF,0xDF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0x04,0xFF,0x00,0xFF,0x00,0xFF,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFE,0xFF,0x80,0xFF,0x08,0xFF,0x00,0xFF,0x03,0xFF,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x83,0xFF,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x03,0xFF,0x00,0xFF,0x9F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xC1,0xFF,0xCB,0xFF,0xCA,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x38,0xFF,0xB8,0xFF,0xA4,0xFF,
  0xC0,0xFF,0x80,0xFF,0x03,0xFF,0x01,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x05,0xFF,0x04,0xFF,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x0F,0xFF,0x7F,0xFF,
  0xF8,0xFF,0xA8,0xFF,0x8A,0xFF,0x18,0xFF,0x08,0xFF,0x00,0xFF,0xC4,0xFF,0xC7,0xFF,
  0x07,0xF8,0x07,0xF8,0x05,0xF8,0x06,0xF8,0x07,0xF8,0x87,0xF8,0x86,0xF8,0xC7,0xF8,
  0x7B,0x00,0xBF,0x00,0xF7,0x00,0xBF,0x00,0xFF,0x00,0xEF,0x00,0xFF,0x00,0xFF,0x00,
  0xF4,0x00,0x7E,0x00,0xF5,0x00,0xFD,0x00,0xFD,0x00,0xFD,0x00,0xFD,0x00,0xFE,0x00,
  0xDF,0x3F,0xBF,0x3F,0x5F,0x3F,0x5F,0x3F,0x1F,0x7F,0x5F,0x7F,0x5F,0x7F,0x5F,0x7F,
  0xF6,0xF8,0xFE,0xF8,0xFE,0xF8,0xFE,0xF8,0xFB,0xFC,0xFA,0xFC,0xFA,0xFC,0xFF,0xFC,
  0xFF,0x3F,0x5F,0x3F,0xFF,0x3F,0x1F,0x7F,0x9F,0x7F,0x5F,0x3F,0x9F,0x3F,0x5F,0x3F,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0xFF,0x00,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,0x03,0xFF,0xFF,0xFF,
  0xE0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x67,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x9F,0xFF,0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xDF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0x0C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x9F,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x43,0xFF,0xFF,0xFF,
  0x21,0xFF,0x21,0xFF,0x0F,0xFF,0x9F,0xFF,0xBF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFB,0xFF,
  0x40,0xFF,0xF0,0xFF,0xF1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x7F,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xF0,0xFF,0x97,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xF7,0xF8,0xFF,0xF0,0xFF,0xF0,0xFF,0xF0,0xFF,0xF0,0xFF,0xF0,0xFF,0xF0,0xF7,0xF8,
  0xF7,0x00,0xFF,0x00,0xFB,0x04,0xFF,0x00,0xED,0x12,0xFF,0x00,0xF7,0x08,0xBB,0x44,
  0xFD,0x00,0xFC,0x00,0xFE,0x00,0xFE,0x00,0x7C,0x80,0xDE,0x20,0xF9,0x00,0xDC,0x20,
  0x5F,0x7F,0xBF,0x7F,0xAF,0x7F,0xAF,0x7F,0xAF,0x7F,0x77,0xFF,0xA7,0xFF,0xEB,0xFF,
  0xFE,0xFC,0xFF,0xFC,0xFE,0xFC,0xFB,0xF4,0xE7,0xF8,0xE3,0xFC,0xEC,0xF2,0xFF,0xFE,
  0x4F,0x3F,0x0F,0x3F,0x87,0x3F,0x4F,0x3F,0x07,0x3F,0x40,0x3F,0xA0,0x1F,0x00,0x1F,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0xFF,0xF0,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xFF,0xFF,0xFF,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x01,0xFF,0x04,0xFF,
  0xFF,0xFF,0xFF,0xFF,0x5F,0xFF,0x1F,0xFF,0x0F,0xFF,0x1E,0xFF,0x80,0xFF,0x80,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xEC,0xFF,0x80,0xFF,0x00,0xFF,0x00,0xFF,
  0xCF,0xFF,0x87,0xFF,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xFF,0xFF,0xFF,0xFF,0x0F,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x8F,0xFF,0x07,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xC0,0xFF,0x10,0xFF,0x00,0xFF,0x00,0xFF
};