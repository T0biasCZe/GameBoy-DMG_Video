// ///////////////////////
// //                   //
// //  File Attributes  //
// //                   //
// ///////////////////////

// Filename: A07.png
// Pixel Width: 160px
// Pixel Height: 128px

// /////////////////
// //             //
// //  Constants  //
// //             //
// /////////////////

const int A07_tile_map_size = 0x0140;
const int A07_tile_map_width = 0x14;
const int A07_tile_map_height = 0x10;

const int A07_tile_data_size = 0x0840;
const int A07_tile_count = 0x0140;

// ////////////////
// //            //
// //  Map Data  //
// //            //
// ////////////////

const unsigned char A07_map_data[] ={
  0x00,0x01,0x01,0x01,0x02,0x03,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x04,
  0x05,0x06,0x06,0x07,0x08,0x09,0x01,0x01,0x0A,0x0B,0x01,0x01,0x01,0x01,0x01,0x01,
  0x01,0x01,0x01,0x0C,0x0D,0x06,0x06,0x0E,0x01,0x01,0x01,0x01,0x0F,0x0B,0x01,0x01,
  0x01,0x01,0x01,0x01,0x01,0x01,0x10,0x11,0x12,0x06,0x06,0x13,0x14,0x15,0x16,0x17,
  0x18,0x19,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x1A,0x1B,0x06,0x06,0x1C,
  0x1D,0x1E,0x06,0x1F,0x20,0x21,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x22,
  0x23,0x06,0x06,0x24,0x01,0x01,0x25,0x26,0x27,0x28,0x01,0x01,0x01,0x01,0x01,0x01,
  0x01,0x01,0x01,0x29,0x2A,0x06,0x06,0x2B,0x01,0x01,0x01,0x01,0x2C,0x2D,0x01,0x01,
  0x01,0x01,0x01,0x01,0x01,0x01,0x2E,0x2F,0x30,0x31,0x06,0x32,0x01,0x01,0x01,0x01,
  0x33,0x34,0x01,0x01,0x35,0x36,0x37,0x38,0x39,0x3A,0x3B,0x3C,0x01,0x3D,0x3E,0x3F,
  0x01,0x01,0x01,0x01,0x40,0x41,0x01,0x42,0x43,0x44,0x45,0x45,0x46,0x47,0x48,0x49,
  0x01,0x4A,0x4B,0x06,0x4C,0x4D,0x01,0x01,0x40,0x4E,0x4F,0x50,0x51,0x52,0x45,0x53,
  0x54,0x55,0x56,0x57,0x01,0x01,0x01,0x58,0x06,0x59,0x5A,0x01,0x5B,0x5C,0x5D,0x5E,
  0x5F,0x60,0x61,0x62,0x63,0x64,0x65,0x66,0x01,0x01,0x67,0x68,0x06,0x69,0x6A,0x6B,
  0x6C,0x6D,0x01,0x6E,0x6F,0x70,0x71,0x72,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
  0x73,0x74,0x01,0x01,0x75,0x01,0x01,0x01,0x01,0x01,0x76,0x01,0x01,0x01,0x01,0x01,
  0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
  0x01,0x01,0x01,0x01,0x01,0x77,0x78,0x01,0x01,0x01,0x01,0x01,0x79,0x01,0x01,0x01,
  0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x7A,0x7B,0x7C,0x7D,
  0x7E,0x7F,0x80,0x81,0x82,0x83,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01
};

// /////////////////
// //             //
// //  Tile Data  //
// //             //
// /////////////////

const unsigned char A07_tile_data[] ={
  0x6F,0x00,0xFF,0x00,0xEF,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x00,0xBF,0x00,0xC7,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x01,0xFF,0x00,0xFF,0x00,
  0x03,0xFC,0x03,0xFC,0x03,0xFC,0x03,0xFC,0x03,0xFC,0x43,0xFC,0x03,0xFC,0x07,0xF8,
  0xFC,0x00,0xFE,0x00,0xFE,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0xF0,0x00,0xC0,0x00,0xD8,0x00,0xF8,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x00,0x7F,0x00,0xFF,0x00,0x7F,0x00,
  0xD7,0x00,0xCB,0x00,0x2F,0x00,0xA0,0x00,0x60,0x00,0x62,0x00,0xE3,0x00,0xEF,0x00,
  0xFF,0x00,0xDF,0x00,0xCF,0x00,0x1F,0x00,0x0F,0x00,0xBF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFE,0x01,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x01,0xFF,0x00,
  0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,
  0xFD,0x00,0xFE,0x00,0xFC,0x00,0xFC,0x00,0xFE,0x00,0xFE,0x00,0xFC,0x00,0xFF,0x00,
  0xE0,0x00,0x40,0x00,0x60,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,
  0x7F,0x00,0x7F,0x00,0x3F,0x00,0x3F,0x00,0x3F,0x00,0x3F,0x00,0x3F,0x00,0x3F,0x00,
  0xFE,0x01,0xFE,0x01,0xFE,0x01,0xFE,0x01,0xFE,0x01,0xFE,0x01,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x00,0xFC,0x00,0xFC,0x00,0xFF,0x00,
  0xFF,0x00,0xEF,0x00,0xC3,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x3F,0x00,0x1F,0x00,0x1F,0x00,0x1F,0x00,0x1F,0x00,0x0F,0x00,0x0F,0x00,0x0F,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xDF,0x00,0xD2,0x00,0xC0,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFB,0x00,0xF8,0x00,0xF0,0x00,0x00,0x00,0x00,0x00,
  0xFF,0x00,0xFF,0x00,0xFE,0x00,0xCC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0x00,0xFF,0x00,0xC5,0x00,0x0C,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0x00,0xFE,0x01,0xFE,0x01,0xFE,0x01,0x7E,0x01,0x0E,0x01,0x1C,0x03,0x0C,0x03,
  0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,
  0x03,0x00,0x41,0x00,0xA3,0x00,0xE3,0x00,0xE1,0x00,0xFB,0x00,0xF9,0x00,0xFC,0x00,
  0x80,0x00,0x80,0x00,0xC0,0x00,0x80,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0x00,0x00,
  0x0F,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x03,0x00,
  0x80,0x00,0x80,0x00,0xF0,0x00,0xFC,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0xC0,0x00,0xE0,0x00,0xFE,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,
  0x0C,0x03,0x06,0x01,0x0E,0x01,0x0E,0x01,0x0E,0x01,0x0E,0x01,0x1E,0x01,0x1E,0x01,
  0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,
  0xFC,0x00,0xFC,0x00,0xFC,0x00,0xFE,0x00,0xFE,0x00,0xFC,0x00,0xFE,0x00,0xFE,0x00,
  0xC0,0x00,0x80,0x00,0x80,0x00,0x00,0x00,0x40,0x00,0xF0,0x00,0x90,0x00,0x00,0x00,
  0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,
  0xC0,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x01,0x00,0xDF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x3E,0x01,0xFE,0x01,0xFE,0x01,0xFE,0x01,0xFE,0x01,0xFE,0x01,0xFC,0x03,0xFC,0x03,
  0x1F,0xE0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,
  0xEC,0x00,0xE4,0x00,0xE6,0x00,0xC7,0x00,0xEF,0x00,0xFF,0x00,0xFF,0x00,0xEF,0x10,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0xE0,0x00,0xF8,0x00,
  0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,
  0xFC,0x03,0xFC,0x03,0xFC,0x03,0xFC,0x03,0xFC,0x03,0xFC,0x03,0xFC,0x03,0xFC,0x03,
  0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x01,0xFC,0x03,
  0xCF,0x30,0xCF,0x30,0x8F,0x70,0x0F,0xF0,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,
  0xFC,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xE0,0x00,
  0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x00,0x00,
  0xFC,0x03,0xFC,0x03,0xFC,0x03,0xFC,0x03,0xFC,0x03,0xFC,0x03,0xF8,0x07,0xF8,0x07,
  0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,0x3F,0xC0,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x01,0xFC,0x03,0xF8,0x07,0xF1,0x0F,
  0xE1,0x1E,0xD8,0x3F,0xBF,0x7F,0x7F,0xFF,0x7F,0xFF,0xFF,0xFF,0x3F,0xFF,0x0F,0xFF,
  0xFF,0x00,0x3F,0xC0,0x07,0xF8,0xC0,0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x03,0xFC,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x00,0xFF,0xFC,0xFF,0xF8,0xFF,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x01,0xE0,0x1F,0x00,0xFF,0x00,0xFF,0x02,0xFF,
  0xFC,0x03,0xF0,0x0F,0xC0,0x3F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x07,0xF8,0x07,0xF8,0x03,0xFC,0x03,0xFC,0x03,0xFC,0x03,0xFC,0x03,0xFC,0x03,0xFC,
  0xF0,0x00,0xEC,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0xD0,0x00,0xC4,0x00,
  0x01,0x00,0x01,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,
  0x3F,0xC0,0x3F,0xC0,0x3F,0xC0,0x2F,0xD0,0x2F,0xD0,0x2F,0xD0,0x2F,0xD0,0x2F,0xD0,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x01,0xF8,0x07,0xE0,0x1F,0xC0,0x3F,0x00,0xFF,
  0xE1,0x1F,0x80,0x7F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x1F,0xFF,0x3F,0xFF,0x7F,0xFF,0x3F,0xFF,0x1F,0xFF,0x3F,0xFF,0x3F,0xFF,0x7F,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xF0,0xFF,0xE0,0xFF,0xC0,0xFF,0x88,0xFF,0x80,0xFF,0x80,0xFF,0x04,0xFF,0x07,0xFF,
  0x02,0xFF,0x02,0xFF,0x00,0xFF,0x06,0xFF,0x07,0xFF,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x80,0xFF,0xEF,0xFF,0xFE,0xFF,0xF0,0xFF,0xE0,0xFF,
  0x03,0xFC,0x07,0xF8,0x03,0xFC,0x33,0xFC,0xC3,0xFC,0x03,0xFC,0x03,0xFC,0x03,0xFC,
  0xFF,0x00,0xFF,0x00,0xF9,0x00,0xFE,0x00,0xFE,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xF6,0x00,0xE8,0x00,0xE0,0x00,0xF4,0x00,0x0C,0x00,0x00,0x00,0xA2,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x0F,0x00,0x07,0x00,0x01,0x00,0x00,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x00,
  0x2F,0xD0,0x2F,0xD0,0x2F,0xD0,0x3F,0xC0,0x3F,0xC0,0x3F,0xC0,0x3F,0xC0,0x7F,0x80,
  0xFE,0x01,0xFC,0x03,0xF8,0x07,0xF9,0x07,0xF1,0x0F,0xF1,0x0F,0xF0,0x0F,0xF0,0x0F,
  0x00,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFE,0xFF,0xFE,0xFF,0x1E,0xFF,
  0x00,0xFF,0xFF,0xFF,0xDF,0xFF,0x01,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0xFF,0xFF,0x7F,0xFF,
  0xF0,0xFF,0x70,0xFF,0x70,0xFF,0x70,0xFF,0x70,0xFF,0x30,0xFF,0x30,0xFF,0x21,0xFF,
  0x0F,0xFF,0x0F,0xFF,0x3F,0xFF,0x3F,0xFF,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0x9F,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFB,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xE0,0xFF,0xE0,0xFF,0xE8,0xFF,0xFC,0xFF,0xF8,0xFF,0xF8,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x03,0xFC,0x03,0xFC,0x01,0xFE,0x01,0xFE,0x03,0xFC,0x07,0xF8,0x0F,0xF0,0xBF,0xC0,
  0x00,0x00,0xC0,0x00,0xE8,0x00,0xF0,0x00,0xF0,0x00,0xFA,0x00,0xFA,0x00,0xFC,0x00,
  0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0x00,0xFF,0x00,0x3F,0x00,0x3F,0x00,0x0F,0x00,0x07,0x00,0x07,0x00,0x07,0x00,
  0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF0,0x0F,0xF8,0x07,
  0x7F,0x80,0x7F,0x80,0x7F,0x80,0x7F,0x80,0x7F,0x80,0x7F,0x80,0x7F,0x80,0x7F,0x80,
  0xF0,0x0F,0xE0,0x1F,0xF0,0x0F,0xFC,0x03,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xC0,0x3F,0xF0,0x0F,0xFC,0x03,0xFC,0x03,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x3F,0xFF,0x1F,0xFF,0x07,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0x7F,0xFF,0x0F,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x03,0xFF,0x06,0xFF,0xFC,0xFF,0xF0,0xFF,0xC0,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x1E,0xFF,0x38,0xFF,0x20,0xFF,0x40,0xFF,0x00,0xFF,0x00,0xFF,0x03,0xFC,0x1F,0xE0,
  0x0F,0xFF,0x03,0xFF,0x00,0xFF,0x00,0xFF,0x03,0xFC,0x3F,0xC0,0xFF,0x00,0xFF,0x00,
  0xFE,0xFF,0xE1,0xFE,0x07,0xF8,0x7F,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x7F,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xBF,0x00,0xFB,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xF8,0x00,0xF8,0x00,0xE0,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x0F,0x00,
  0x01,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x0F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0x7F,0x00,0x3F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xF8,0x07,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF8,0x07,0xF8,0x07,0xF8,0x07,
  0x7F,0x80,0x7F,0x80,0x7F,0x80,0x7F,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFC,0x03,0xF0,0x0F,0xE0,0x1F,0xC0,0x3F,0xC0,0x3F,0xC0,0x3F,0x80,0x7F,0xFF,0x00,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xFF,0x00,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xE0,0x1F,
  0x00,0xFF,0x00,0xFF,0x0B,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x01,0xFE,
  0x00,0xFF,0x23,0xFC,0x0F,0xF0,0x1F,0xE0,0x1F,0xE0,0x3F,0xC0,0x7F,0x80,0xFF,0x00,
  0x00,0x00,0x01,0x00,0x07,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x3F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xFC,0x03,0xF9,0x06,0xFD,0x02,0xFF,0x00,
  0xE3,0x1C,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xF9,0x00,0xF0,0x00,0xF7,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xDF,0x20,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x01,0xF0,0x0F,0xC0,0x3F,0x00,0xFF,0x00,0xFF,
  0xFF,0x00,0xFF,0x00,0xF0,0x0F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xFF,0x00,0x80,0x7F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xC0,0x3F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x07,0xF8,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x81,0x7E,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xFF,0x00,0x03,0xFC,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xFF,0x00,0xFF,0x00,0x0F,0xF0,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x80,0x0F,0xF0,0x01,0xFE,0x00,0xFF,0x00,0xFF,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x80,0x0F,0xF0
};
