// ///////////////////////
// //                   //
// //  File Attributes  //
// //                   //
// ///////////////////////

// Filename: A61.png
// Pixel Width: 160px
// Pixel Height: 128px

// /////////////////
// //             //
// //  Constants  //
// //             //
// /////////////////

const int A61_tile_map_size = 0x0140;
const int A61_tile_map_width = 0x14;
const int A61_tile_map_height = 0x10;

const int A61_tile_data_size = 0x0A60;
const int A61_tile_count = 0x0140;

// ////////////////
// //            //
// //  Map Data  //
// //            //
// ////////////////

const unsigned char A61_map_data[] ={
  0x00,0x01,0x02,0x03,0x04,0x05,0x00,0x01,0x02,0x03,0x04,0x06,0x00,0x01,0x02,0x03,
  0x04,0x05,0x00,0x01,0x07,0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,0x10,0x11,0x12,
  0x13,0x08,0x09,0x0A,0x0B,0x0C,0x07,0x08,0x14,0x15,0x16,0x17,0x18,0x19,0x1A,0x1B,
  0x1C,0x1D,0x1E,0x1F,0x20,0x21,0x16,0x17,0x22,0x23,0x14,0x15,0x24,0x25,0x26,0x27,
  0x28,0x29,0x2A,0x2A,0x2B,0x2C,0x2D,0x2E,0x2F,0x30,0x26,0x27,0x31,0x32,0x24,0x25,
  0x33,0x34,0x35,0x36,0x37,0x38,0x2A,0x2A,0x2A,0x39,0x3A,0x3B,0x3C,0x34,0x35,0x3D,
  0x3E,0x3F,0x33,0x34,0x40,0x41,0x42,0x43,0x2A,0x2A,0x2A,0x2A,0x44,0x45,0x2E,0x2E,
  0x46,0x41,0x42,0x47,0x48,0x49,0x40,0x41,0x4A,0x4B,0x4C,0x4D,0x2A,0x2A,0x2A,0x4E,
  0x4F,0x2E,0x2E,0x50,0x51,0x4B,0x4C,0x52,0x53,0x54,0x4A,0x4B,0x55,0x56,0x57,0x58,
  0x59,0x5A,0x5B,0x5C,0x2E,0x2E,0x5D,0x5E,0x55,0x56,0x57,0x5F,0x60,0x61,0x55,0x56,
  0x62,0x63,0x64,0x65,0x66,0x67,0x68,0x69,0x6A,0x6B,0x6C,0x67,0x62,0x63,0x64,0x6D,
  0x6E,0x6F,0x62,0x63,0x00,0x01,0x02,0x03,0x04,0x05,0x00,0x70,0x71,0x72,0x73,0x74,
  0x00,0x01,0x02,0x75,0x76,0x05,0x00,0x01,0x07,0x08,0x09,0x0A,0x0B,0x0C,0x07,0x77,
  0x78,0x79,0x2E,0x7A,0x07,0x08,0x7B,0x7C,0x7D,0x0C,0x07,0x08,0x14,0x15,0x16,0x17,
  0x22,0x23,0x7E,0x7F,0x80,0x81,0x2E,0x82,0x83,0x15,0x84,0x85,0x86,0x23,0x14,0x15,
  0x24,0x25,0x26,0x27,0x31,0x32,0x87,0x88,0x89,0x2E,0x2E,0x8A,0x8B,0x8C,0x2E,0x8D,
  0x31,0x32,0x24,0x25,0x33,0x34,0x35,0x3D,0x3E,0x8E,0x8F,0x90,0x91,0x92,0x93,0x94,
  0x2A,0x95,0x96,0x97,0x3E,0x3F,0x33,0x34,0x40,0x41,0x42,0x47,0x48,0x49,0x98,0x99,
  0x9A,0x9B,0x9C,0x2A,0x2A,0x9D,0x9E,0x47,0x48,0x49,0x40,0x41,0x4A,0x4B,0x4C,0x52,
  0x53,0x54,0x9F,0xA0,0xA1,0xA2,0xA3,0x2A,0x2A,0xA4,0xA5,0x52,0x53,0x54,0x4A,0x4B
};

// /////////////////
// //             //
// //  Tile Data  //
// //             //
// /////////////////

const unsigned char A61_tile_data[] ={
  0xFF,0x00,0xFC,0x00,0xE7,0x00,0xFF,0x00,0xC0,0x00,0x9F,0x00,0xFF,0x00,0xF0,0x00,
  0xFF,0x00,0x5F,0x00,0xFF,0x00,0xFD,0x00,0x2F,0x00,0x6C,0x00,0xFF,0x00,0x6F,0x00,
  0x7F,0x00,0xFF,0x00,0xFE,0x00,0x7C,0x00,0xFF,0x00,0x78,0x00,0xF8,0x00,0xE3,0x00,
  0x87,0x00,0x7D,0x00,0x0B,0x00,0x2F,0x00,0xFF,0x00,0x03,0x00,0x37,0x08,0x7F,0x00,
  0x70,0x00,0x73,0x00,0x1F,0x00,0x7B,0x00,0x7E,0x00,0x17,0x00,0x3F,0x00,0x3F,0x00,
  0x7D,0x02,0xE6,0x00,0xEF,0x00,0x6B,0x04,0xF7,0x00,0xEF,0x00,0xEF,0x00,0xE5,0x00,
  0x7D,0x02,0xE6,0x00,0xEF,0x00,0x6B,0x04,0xF7,0x00,0xEF,0x00,0xEF,0x00,0xDD,0x00,
  0x77,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0x14,0x00,0xF3,0x00,0x17,0x00,
  0xFF,0x00,0x64,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xDE,0x00,0xD7,0x00,
  0xAC,0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0x03,0x00,0xBF,0x00,0xF8,0x00,
  0x07,0x00,0x8E,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0xFF,0x00,0x5D,0x00,0x07,0x00,
  0x5F,0x00,0x1C,0x00,0xFF,0x00,0x3F,0x00,0x00,0x00,0xDC,0x00,0xE7,0x00,0xF7,0x00,
  0xEF,0x00,0x6F,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0x08,0x00,0xFE,0x00,0xFF,0x00,
  0x77,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0x14,0x00,0xF1,0x00,0x13,0x00,
  0xFF,0x00,0x64,0x00,0xFF,0x00,0xED,0x00,0x00,0x00,0x07,0x00,0xCF,0x00,0x60,0x00,
  0xAC,0x00,0x3F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x8F,0x00,0x1D,0x00,
  0x6F,0x10,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x01,0xF9,0x06,0xF3,0x0C,
  0xFE,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x01,0x86,0x79,0x7E,0x81,0xFD,0x02,0xFD,0x02,
  0x5F,0x00,0xFF,0x00,0xF7,0x00,0xFF,0x00,0xFF,0x00,0xDF,0x20,0xBB,0x44,0x53,0xAC,
  0x77,0x00,0xFF,0x00,0xFF,0x00,0x4F,0x00,0xF0,0x00,0xF4,0x00,0xFF,0x00,0xFF,0x00,
  0xEF,0x00,0xBF,0x00,0xFF,0x00,0x9B,0x00,0x9B,0x00,0xDF,0x00,0x70,0x00,0x7F,0x00,
  0xB0,0x00,0xB8,0x00,0xF4,0x00,0xCE,0x00,0x8D,0x00,0xF0,0x00,0xFF,0x00,0xE0,0x00,
  0xF0,0x00,0x00,0x00,0xBD,0x00,0x05,0x00,0xF9,0x00,0x22,0x00,0xB7,0x00,0x7D,0x00,
  0xFC,0x00,0xFA,0x00,0xBE,0x00,0xFA,0x00,0x88,0x00,0x1C,0x00,0xFD,0x00,0xE1,0x00,
  0xFF,0x00,0x9C,0x00,0x8E,0x00,0xFF,0x00,0x97,0x00,0xC7,0x00,0xFF,0x00,0xEE,0x00,
  0xBF,0x00,0xFE,0x00,0xDF,0x00,0xAC,0x00,0xF3,0x00,0xDA,0x00,0x2F,0x00,0xE7,0x00,
  0xEF,0x00,0xBF,0x00,0xF8,0x00,0x07,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xC0,0x00,0xC0,0x00,0x01,0x00,0x06,0x00,0x0D,0x00,0xF3,0x00,0xFF,0x00,0xFF,0x00,
  0x77,0x00,0xCF,0x00,0x99,0x00,0x64,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x01,0xFC,0x03,
  0xCF,0x30,0xBD,0x40,0xFF,0x00,0xFC,0x03,0xF0,0x0F,0x80,0x7F,0x03,0xFC,0x3F,0xC0,
  0xFB,0x04,0xE2,0x1D,0x87,0x78,0x0D,0xF2,0x13,0xEC,0x4E,0xB1,0xF8,0x07,0xE6,0x19,
  0x23,0xDC,0xC3,0x3C,0xC7,0x38,0xCB,0x34,0x93,0x6C,0x02,0xFD,0xA6,0x59,0x40,0xBF,
  0xFF,0x00,0xFF,0x00,0xF7,0x08,0xC1,0x3E,0xC1,0x3E,0x80,0x7F,0x00,0xFF,0x00,0xFF,
  0xD0,0x00,0xF8,0x00,0xFC,0x00,0x16,0x00,0xE5,0x00,0xE0,0x00,0xE7,0x00,0xE0,0x00,
  0xFF,0x00,0x9C,0x00,0x8E,0x00,0xFF,0x00,0x97,0x00,0xC7,0x00,0xFE,0x00,0xEE,0x00,
  0xBF,0x00,0xFE,0x00,0xDF,0x00,0xAF,0x00,0xF0,0x00,0xDB,0x00,0xBF,0x00,0xF7,0x00,
  0x00,0x00,0x00,0x00,0xFE,0x00,0xFF,0x00,0xF8,0x00,0xCF,0x00,0xFF,0x00,0x80,0x00,
  0x3F,0x00,0x00,0x00,0xF7,0x00,0xFE,0x00,0xBF,0x00,0xFF,0x00,0xFA,0x00,0x5F,0x00,
  0xFF,0x00,0x00,0x00,0xE5,0x00,0xFF,0x00,0xFE,0x00,0xFC,0x00,0xF8,0x00,0xFF,0x00,
  0xD5,0x00,0x03,0x00,0x83,0x00,0x0F,0x00,0xFA,0x00,0x16,0x00,0x5F,0x00,0xFF,0x00,
  0x01,0x00,0xFF,0x00,0xFC,0x00,0xF5,0x00,0xFF,0x00,0x7F,0x00,0xFF,0x00,0xFF,0x00,
  0x7F,0x00,0x7F,0x00,0x7F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFE,0x01,0xFC,0x03,0xF8,0x07,0xFE,0x01,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFC,0x03,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0x00,
  0x38,0xC7,0x00,0xFF,0x00,0xFF,0x18,0xE7,0x00,0xFF,0x00,0xFF,0x80,0x7F,0xC0,0x3F,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x01,0xFE,0x01,0xFE,0x03,0xFC,0x03,0xFC,0x03,0xFC,0x03,0xFC,0x15,0xFE,
  0xFF,0x00,0xFE,0x00,0xFF,0x00,0xFE,0x00,0xFF,0x00,0xBF,0x00,0xFA,0x00,0xDF,0x00,
  0x00,0x00,0xF3,0x00,0xF7,0x00,0xE0,0x00,0xE7,0x00,0x3F,0x00,0xF6,0x00,0xFD,0x00,
  0x90,0x00,0x80,0x00,0xCB,0x00,0xFB,0x04,0xCD,0x00,0xDF,0x00,0xD7,0x08,0xEF,0x00,
  0x3E,0x00,0xFF,0x00,0xE0,0x00,0xEF,0x00,0xFE,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,
  0xD8,0x00,0xFF,0x00,0xDF,0x00,0xFF,0x00,0xC8,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,
  0xF0,0x00,0xF0,0x00,0xC6,0x00,0x58,0x00,0x01,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,
  0x05,0x00,0x6F,0x10,0xFF,0x00,0x0C,0x00,0x1C,0x00,0xFC,0x00,0xFC,0x00,0x03,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x00,0xFE,0x00,0xFE,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x00,0x3F,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xC1,0x3E,0x80,0x7F,0xC0,0x3F,0xE0,0x1F,
  0xE0,0x1F,0xE0,0x1F,0xF0,0x0F,0xE0,0x1F,0xC0,0x3F,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x08,0xFF,0x0C,0xFF,0x0C,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x60,0xFF,0x64,0xFB,0x42,0xFD,0x40,0xFE,0x21,0xFE,0xC3,0xFC,0x80,0xFC,
  0x07,0x00,0x6F,0x10,0xFF,0x00,0x0E,0x00,0x1C,0x00,0xFF,0x00,0xFF,0x00,0x01,0x00,
  0x2F,0x00,0x7F,0x00,0x7F,0x00,0xBF,0x00,0x38,0x00,0xFF,0x00,0x7F,0x00,0x00,0x00,
  0xDF,0x00,0xDF,0x00,0xCB,0x00,0xDE,0x00,0xDF,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,
  0x28,0x00,0xE7,0x00,0x2F,0x00,0xDF,0x00,0x7F,0x00,0xFF,0x00,0x37,0x00,0x37,0x00,
  0x00,0x00,0xBD,0x00,0xAF,0x00,0x61,0x00,0x70,0x00,0xE9,0x00,0x9C,0x00,0x1B,0x00,
  0x07,0x00,0x7E,0x00,0xF0,0x00,0xE1,0x00,0x01,0x00,0x7B,0x00,0x0B,0x00,0xF3,0x00,
  0xFF,0x00,0xBB,0x00,0x0F,0x00,0xFB,0x00,0xF7,0x00,0x7F,0x00,0xF7,0x00,0x13,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x01,0xE0,0x1F,0x80,0x7F,0x00,0xFF,
  0xF0,0x0F,0xE0,0x1F,0x80,0x7F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFC,0x03,0xFC,0x0F,0xF0,0x1F,0xE0,0x1F,0xE0,0x0F,0xF0,0x17,0xE0,0x37,0xC0,
  0xFF,0x00,0xBB,0x00,0x0F,0x00,0xF9,0x00,0xF4,0x00,0x7D,0x00,0xF5,0x00,0x10,0x00,
  0xB8,0x00,0xCF,0x00,0xEF,0x00,0xFF,0x00,0x39,0x00,0x1D,0x00,0xFF,0x00,0x2F,0x00,
  0x10,0x00,0xFD,0x00,0xFE,0x00,0x7F,0x00,0xFD,0x00,0xBF,0x00,0x5F,0x00,0xE1,0x00,
  0xBF,0x00,0xE1,0x00,0xFF,0x00,0x7F,0x00,0xF3,0x00,0x3A,0x00,0xEF,0x00,0xFA,0x00,
  0xE0,0x00,0xFF,0x00,0xC0,0x00,0xEE,0x00,0xCC,0x00,0x5D,0x00,0xFF,0x00,0x1A,0x00,
  0x44,0x00,0x6F,0x00,0xFB,0x00,0x03,0x00,0x60,0x00,0x47,0x00,0xFA,0x00,0x00,0x00,
  0x3B,0x00,0xFB,0x00,0xC3,0x00,0x93,0x00,0x13,0x00,0xCB,0x00,0xFB,0x00,0xD1,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xDF,0x20,0x8F,0x70,0xC7,0x38,0xC1,0x3E,0xE0,0x1F,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x80,0x7F,0xC0,0x3F,0xC0,0x3F,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x07,0x00,
  0x1F,0xE0,0x01,0xE0,0x3F,0xC0,0x7F,0x80,0x73,0x80,0x3A,0x80,0x6F,0x80,0xFA,0x00,
  0x39,0x00,0xFA,0x00,0xC3,0x00,0x90,0x00,0x10,0x00,0xC9,0x00,0xFB,0x00,0xD3,0x00,
  0x8F,0x00,0xFD,0x00,0xDD,0x00,0xDE,0x00,0xD2,0x00,0x86,0x00,0xFB,0x00,0xC5,0x00,
  0xB7,0x00,0x7E,0x00,0xEE,0x00,0xFA,0x00,0x01,0x00,0x00,0x00,0xFF,0x00,0x07,0x00,
  0x00,0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,0xFC,0x00,0xE7,0x00,0xFF,0x00,0xC0,0x00,
  0x1F,0x00,0x00,0x00,0x7B,0x00,0xFF,0x00,0x5F,0x00,0xFF,0x00,0xFD,0x00,0x2F,0x00,
  0xFF,0x00,0x00,0x00,0xF2,0x00,0x7F,0x00,0xFF,0x00,0xFE,0x00,0x7C,0x00,0xFF,0x00,
  0xEB,0x00,0x03,0x00,0xC1,0x00,0x87,0x00,0x7D,0x00,0x0B,0x00,0x2F,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0x7B,0x00,0x70,0x00,0x73,0x00,0x1F,0x00,0x7B,0x00,0x7E,0x00,
  0xFF,0x00,0xFF,0x00,0xE5,0x00,0x7D,0x02,0xE6,0x00,0xEF,0x00,0x6B,0x04,0xF7,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xDB,0x00,0xEB,0x00,
  0xE0,0x1F,0xE0,0x1F,0xF0,0x0F,0xF8,0x07,0xFC,0x03,0xFC,0x03,0xFC,0x03,0xFC,0x03,
  0x00,0xFE,0x01,0xFC,0x07,0xF8,0x04,0xF8,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0E,0xF0,
  0x48,0x00,0xC0,0x00,0xE5,0x00,0x7D,0x02,0xE6,0x00,0xEF,0x00,0x6B,0x04,0xF7,0x00,
  0xEA,0x00,0x01,0x00,0xC1,0x00,0x86,0x01,0x7C,0x03,0x00,0x0F,0x20,0x1F,0xE0,0x1F,
  0x80,0x00,0x79,0x00,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x48,0x00,0xE0,0x00,0xE5,0x00,0x7D,0x82,0x66,0x80,0x6F,0x80,0x2B,0xC4,0x17,0xE0,
  0xF3,0x00,0xFE,0x00,0xF8,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,
  0xF5,0x00,0x5E,0x00,0xF9,0x00,0xFF,0x00,0xFF,0x00,0x1F,0x00,0x00,0x00,0x7B,0x00,
  0x7F,0x00,0xC0,0x00,0x89,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0xF2,0x00,
  0xE6,0x00,0xDF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xEA,0x00,0x01,0x00,0xC1,0x00,
  0x0C,0x00,0xF3,0x00,0xFF,0x00,0xFF,0x00,0x01,0x00,0x80,0x00,0x79,0x00,0x7B,0x00,
  0x73,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x48,0x00,0xC0,0x00,0xE5,0x00,
  0xDB,0x00,0xFE,0x00,0xF8,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,
  0xF8,0x07,0xF8,0x07,0xF0,0x0F,0xE1,0x1E,0xF3,0x0C,0xF3,0x0C,0xFF,0x00,0x7F,0x80,
  0x00,0xFF,0x00,0xFF,0x01,0xFE,0x87,0x78,0x8F,0x70,0x8F,0x70,0xDF,0x20,0xFE,0x01,
  0x00,0xFF,0x3C,0xC3,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xE0,0x1F,0x00,0xFF,0x00,0xFF,
  0x0C,0xF0,0x1F,0xE0,0x9F,0x60,0xDF,0x20,0xFD,0x00,0x3C,0xC0,0x1D,0xE0,0x07,0xF8,
  0xE0,0x1F,0xD0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xE0,0x0F,0x00,0x07,0xC0,0x07,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x03,0xFC,0x01,0xFC,0x00,0xFC,0x01,0xFC,0x03,0xFC,
  0x13,0xE0,0x1F,0xE0,0x3F,0xC0,0xFF,0x00,0xFF,0x00,0x48,0x00,0xC0,0x00,0xE5,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x00,0xFE,0x00,0xFC,0x00,0xFC,0x00,
  0xFC,0x03,0x90,0x07,0x8E,0x01,0x1F,0x00,0x1F,0x00,0x3F,0x00,0x3F,0x00,0x7F,0x00,
  0x3C,0xC3,0x7C,0x83,0xFC,0x03,0xFC,0x03,0xF8,0x07,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,
  0x00,0xFC,0x01,0xFE,0x01,0xFE,0x01,0xFE,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x7D,0x02,0xE6,0x00,0xEF,0x00,0x6B,0x04,0xF7,0x00,0xEF,0x00,0x6F,0x80,0x65,0x80,
  0x80,0x0F,0x78,0x07,0x00,0x0F,0x20,0x0F,0xF0,0x0F,0x00,0x0F,0x20,0x1F,0x60,0x1F,
  0x00,0xFC,0x03,0xFC,0x03,0xFC,0x03,0xFC,0x02,0xFC,0x07,0xF8,0x07,0xF8,0x0F,0xF0,
  0xFC,0x00,0xF8,0x00,0xF8,0x00,0xF9,0x00,0xF1,0x00,0xF1,0x00,0xF3,0x00,0xE3,0x00,
  0x7F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF0,0x0F,0xF0,0x0F,0xE0,0x1F,0xE0,0x1F,0xC0,0x3F,
  0x2F,0xC0,0x2F,0xC0,0x1F,0xE0,0x1F,0xE0,0x00,0xF0,0x08,0xF0,0x06,0xF8,0x07,0xF8,
  0xAC,0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,0x00,0x01,0x02,0x01,0xBC,0x03,0xF8,0x03,
  0x00,0x3F,0x80,0x7F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x0F,0xF0,0x1C,0xE0,0x1F,0xE0,0x1F,0xE0,0x00,0xC0,0x1C,0xC0,0x67,0x80,0x77,0x80,
  0xEF,0x00,0xBB,0x00,0xF9,0x00,0x99,0x00,0x99,0x00,0xD8,0x00,0x70,0x00,0x70,0x00,
  0xE3,0x00,0xE3,0x00,0xC3,0x00,0xC3,0x00,0xC7,0x00,0x07,0x00,0x07,0x00,0x07,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x01,0xFC,0x03,0xFC,0x03,0xFC,0x03,
  0x80,0x7F,0x80,0x7F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,
  0xEF,0x00,0xBF,0x00,0xFF,0x00,0x9B,0x00,0xFB,0x00,0xFF,0x00,0xF0,0x00,0xFF,0x00,
  0xF0,0x07,0x00,0x07,0xB0,0x0F,0x00,0x0F,0xE0,0x1F,0x00,0x3F,0x80,0x7F,0x00,0x7F,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x00,0xFE,0x01,0xFC,0x01,0xFC,
  0xFF,0x00,0x1C,0x80,0x8E,0x00,0xFF,0x00,0x97,0x00,0xC7,0x00,0xFE,0x00,0xEE,0x00,
  0x30,0x00,0x30,0x00,0xE0,0x00,0xC0,0x00,0xE0,0x00,0xE0,0x00,0xC0,0x00,0x80,0x00,
  0x0F,0x00,0x0F,0x00,0x0F,0x00,0x0F,0x00,0x1F,0x00,0x1F,0x00,0x1F,0x00,0x3F,0x00,
  0xF8,0x07,0xF8,0x07,0xF0,0x0F,0xF0,0x0F,0xE0,0x1F,0xE0,0x1F,0xC0,0x3F,0xC0,0x3F,
  0x07,0xF8,0x07,0xF8,0x07,0xF8,0x0F,0xF0,0x13,0xEC,0x13,0xEC,0x33,0xCC,0x7B,0x84,
  0xF0,0x00,0xF0,0x00,0xFE,0x00,0xFF,0x00,0xF8,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x3F,0x00,0x00,0x01,0xF4,0x03,0xF8,0x07,0xB0,0x0F,0xE0,0x1F,0xC0,0x3F,0xC0,0x3F,
  0x01,0xFC,0x03,0xF8,0x03,0xF8,0x0F,0xF0,0x0A,0xF0,0x16,0xE0,0x1F,0xE0,0x3F,0xC0,
  0xDF,0x00,0xDE,0x01,0xCA,0x00,0xDF,0x00,0xDE,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,
  0xC0,0x00,0x80,0x00,0x00,0x00,0xC0,0x00,0x40,0x00,0xC0,0x00,0xC1,0x00,0x01,0x00,
  0x3F,0x00,0x7F,0x00,0x7F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x01,
  0xC0,0x3F,0x80,0x7F,0x80,0x7F,0x80,0x7F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x01,0xFE,0x01,0xFE,
  0x00,0xFF,0x00,0xFF,0x01,0xFE,0x03,0xFC,0x07,0xF8,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x7F,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xC0,0x3F,0xC0,0x3F,0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,0xF0,0x0F,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x01,0xFE,0x01,0xFE,0x03,0xFC,0x07,0xF8,
  0x07,0xC0,0x6F,0x90,0xFF,0x00,0x0E,0x00,0x1C,0x00,0xFF,0x00,0xFF,0x00,0x01,0x00,
  0x23,0x00,0xE3,0x00,0x23,0x00,0xD3,0x00,0x77,0x00,0xF7,0x00,0x3F,0x00,0x3F,0x00,
  0xFE,0x01,0xFE,0x01,0xFC,0x03,0xFC,0x03,0xF8,0x07,0xF8,0x07,0xF0,0x0F,0xF0,0x0F,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x01,0xFE,0x03,0xFC,0x03,0xFC,
  0x01,0xFE,0x41,0xBE,0x41,0xBE,0xE1,0x1E,0xE1,0x1E,0xF9,0x06,0xF8,0x07,0xF8,0x07,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x80,
  0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF8,0x07,0xF8,0x07,
  0x07,0xF8,0x04,0xF0,0x1E,0xE0,0x1F,0xE0,0x31,0xC0,0x6B,0x80,0x7B,0x80,0xE3,0x00,
  0xBF,0x00,0xEF,0x00,0xFF,0x00,0x7F,0x00,0xFF,0x00,0x3F,0x00,0xEF,0x00,0xFF,0x00,
  0xF0,0x0F,0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,0xC0,0x3F,0xC0,0x3F,0xC0,0x3F,0xC0,0x3F,
  0x02,0xFC,0x04,0xF8,0x01,0xF8,0x08,0xF0,0x00,0xF0,0x10,0xE0,0x00,0xE0,0x20,0xC0,
  0x78,0x07,0x38,0x07,0xF8,0x07,0x38,0x07,0x3C,0x03,0x7C,0x03,0xFC,0x03,0x0E,0x01,
  0x7F,0x80,0x7F,0x80,0x7F,0x80,0x3F,0xC0,0x3F,0xC0,0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,
  0xF9,0x06,0xF8,0x06,0xFB,0x04,0xFB,0x04,0xFE,0x00,0xFF,0x00,0xFF,0x00,0xFA,0x00,
  0xB4,0x40,0xEF,0x00,0xFB,0x00,0x83,0x00,0x60,0x00,0x47,0x00,0xFA,0x00,0x00,0x00
};
