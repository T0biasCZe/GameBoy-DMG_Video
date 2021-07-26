#include <gb/gb.h>
#include <stdint.h>
#include <stdio.h>

// These two entries are needed to enable auto-banking in the source file
#pragma bank 255
const void __at(255) __bank_srcfile19;
// A big constant array to take up space
const unsigned char A70_map_data[] ={
  0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,
  0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x1A,0x1B,0x1C,0x1D,0x1E,0x1F,
  0x20,0x21,0x22,0x23,0x24,0x25,0x26,0x27,0x28,0x29,0x2A,0x2B,0x2C,0x2D,0x2E,0x2F,
  0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x3A,0x3B,0x3C,0x3D,0x3D,0x3D,
  0x3E,0x3F,0x40,0x41,0x42,0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x4A,0x4B,0x4C,0x4D,
  0x3D,0x3D,0x3D,0x3D,0x3D,0x3D,0x4E,0x4F,0x50,0x51,0x52,0x53,0x54,0x55,0x56,0x57,
  0x58,0x59,0x5A,0x4C,0x3D,0x3D,0x3D,0x3D,0x3D,0x3D,0x5B,0x5C,0x5C,0x5D,0x5E,0x5F,
  0x60,0x61,0x62,0x63,0x64,0x65,0x66,0x67,0x3D,0x68,0x69,0x6A,0x6A,0x6B,0x6C,0x5C,
  0x5C,0x6D,0x6E,0x6F,0x70,0x71,0x72,0x73,0x74,0x75,0x76,0x67,0x77,0x78,0x78,0x79,
  0x79,0x7A,0x7A,0x5C,0x7B,0x7C,0x7D,0x7E,0x7F,0x80,0x81,0x82,0x83,0x84,0x85,0x67,
  0x86,0x87,0x87,0x88,0x88,0x89,0x89,0x8A,0x8B,0x8C,0x8D,0x8E,0x8F,0x90,0x91,0x92,
  0x93,0x94,0x95,0x96,0x97,0x98,0x98,0x99,0x99,0x9A,0x9A,0x9B,0x9C,0x9D,0x8D,0x9E,
  0x9F,0xA0,0xA1,0xA2,0xA3,0xA4,0xA5,0xA6,0xA7,0xA8,0xA8,0xA9,0xA9,0xAA,0xAA,0xAB,
  0x9C,0xAC,0x8D,0xAD,0xAE,0xAF,0xB0,0xB1,0xB2,0xB3,0xB4,0xB5,0xB6,0xB7,0xB7,0xB8,
  0xB8,0xB9,0xB9,0x9C,0x9C,0xBA,0x8D,0xBB,0xBC,0xBD,0xBE,0xBF,0xC0,0xC1,0xC2,0xC3,
  0xC4,0xC5,0xC5,0xC6,0xC6,0xC7,0xC7,0xC8,0xC9,0xCA,0x8D,0xCB,0xCC,0xCD,0xCE,0xCF,
  0xD0,0xD1,0xD2,0xD3,0xD4,0xD5,0xD6,0xD7,0xD8,0xD9,0xDA,0xDB,0xDC,0xDD,0x8D,0xDE,
  0xDF,0xE0,0xE1,0xE2,0xE3,0x3D,0x3D,0x3D,0xE4,0xE5,0xE6,0xE7,0xE8,0xE9,0xEA,0xEB,
  0xEC,0x8D,0xED,0x8D,0xEE,0x9C,0xEF,0x3D,0x3D,0x3D,0x3D,0x3D,0xF0,0xF1,0xF2,0xF3,
  0xF4,0xF5,0xF6,0xF7,0xF8,0x8D,0x8D,0x8D,0x9C,0x9C,0xF9,0x3D,0x3D,0x3D,0x3D,0x3D
};

// /////////////////
// //             //
// //  Tile Data  //
// //             //
// /////////////////

const unsigned char A70_tile_data[] ={
  0xFE,0xFF,0x55,0xFF,0xBA,0xFF,0x55,0xFF,0xEE,0xFF,0x55,0xFF,0xAB,0xFF,0x55,0xFF,
  0xFE,0xFF,0x55,0xFF,0xBA,0xFF,0x55,0xFF,0xAF,0xFF,0x55,0xFF,0xAF,0xFF,0x55,0xFF,
  0xEE,0xFF,0x55,0xFF,0xBA,0xFF,0x55,0xFF,0xAE,0xFF,0x55,0xFF,0xAB,0xFF,0x15,0xFF,
  0xFE,0xFF,0x55,0xFF,0xBB,0xFF,0x55,0xFF,0xAE,0xFF,0x55,0xFF,0xAB,0xFF,0x55,0xFF,
  0xBF,0xFF,0x55,0xFF,0xBB,0xFF,0x55,0xFF,0xEE,0xFF,0x55,0xFF,0xBA,0xFF,0x55,0xFF,
  0xEE,0xFF,0x55,0xFF,0xAB,0xFF,0x55,0xFF,0xEE,0xFF,0x55,0xFF,0xAA,0xFF,0x55,0xFF,
  0xAF,0xFF,0x55,0xFF,0xFB,0xFF,0x55,0xFF,0xAE,0xFF,0x55,0xFF,0xAA,0xFF,0x55,0xFF,
  0xFE,0xFF,0x55,0xFF,0xBA,0xFF,0x55,0xFF,0xEE,0xFF,0x55,0xFF,0xAA,0xFF,0x55,0xFF,
  0xEE,0xFF,0x55,0xFF,0xBB,0xFF,0x55,0xFF,0xAE,0xFF,0x55,0xFF,0xBA,0xFF,0x55,0xFF,
  0xEF,0xFF,0x55,0xFF,0xBB,0xFF,0x51,0xFF,0xEF,0xFF,0x55,0xFF,0xBA,0xFF,0x55,0xFF,
  0xEF,0xFF,0x55,0xFF,0xBA,0xFF,0x55,0xFF,0xEF,0xFF,0x55,0xFF,0xBA,0xFF,0x55,0xFF,
  0xEF,0xFF,0x55,0xFF,0xBB,0xFF,0x55,0xFF,0xAE,0xFF,0x55,0xFF,0xBB,0xFF,0x55,0xFF,
  0xFE,0xFF,0x5D,0xFF,0xFB,0xFF,0x55,0xFF,0xEF,0xFF,0x55,0xFF,0xBA,0xFF,0x55,0xFF,
  0xFF,0xFF,0x5D,0xFF,0xFF,0xFF,0x55,0xFF,0xFE,0xFF,0x55,0xFF,0xBB,0xFF,0x55,0xFF,
  0xFF,0xFF,0x5D,0xFF,0xBB,0xFF,0x55,0xFF,0xFF,0xFF,0x55,0xFF,0xBB,0xFF,0x55,0xFF,
  0xEF,0xFF,0x55,0xFF,0xFF,0xFF,0x55,0xFF,0xFE,0xFF,0x55,0xFF,0xFF,0xFF,0x55,0xFF,
  0xFF,0xFF,0x55,0xFF,0xFB,0xFF,0x55,0xFF,0xFE,0xFF,0xD5,0xFF,0xFF,0xFF,0x55,0xFF,
  0xFF,0xFF,0xD5,0xFF,0xFF,0xFF,0x55,0xFF,0xFB,0xFF,0x55,0xFF,0xAF,0xFF,0x55,0xFF,
  0xEA,0xFF,0xDD,0xFF,0xBB,0xFF,0x75,0xFF,0xFF,0xFF,0x55,0xFF,0xFA,0xFF,0x55,0xFF,
  0xEE,0xFF,0x55,0xFF,0xEA,0xFF,0x55,0xFF,0xEA,0xFF,0x54,0xFF,0xAA,0xFF,0x11,0xFF,
  0xFF,0xFF,0x55,0xFF,0xBA,0xFF,0x55,0xFF,0xAE,0xFF,0x44,0xFF,0xAB,0xFF,0x15,0xFF,
  0xAA,0xFF,0x55,0xFF,0xAA,0xFF,0x51,0xFF,0xE8,0xFF,0x50,0xFF,0xA0,0xFF,0x41,0xFF,
  0xAA,0xFF,0x14,0xFF,0x8A,0xFF,0x15,0xFF,0x22,0xFF,0x55,0xFF,0x23,0xFF,0x10,0xFF,
  0xEE,0xFF,0x55,0xFF,0xEA,0xFF,0x55,0xFF,0xEA,0xFF,0x45,0xFF,0xAA,0xFF,0x15,0xFF,
  0xAA,0xFF,0x55,0xFF,0xBA,0xFF,0x15,0xFF,0xAA,0xFF,0x44,0xFF,0xAB,0xFF,0x00,0xFF,
  0xAA,0xFF,0x55,0xFF,0xAB,0xFF,0x55,0xFF,0xAA,0xFF,0x55,0xFF,0xAA,0xFF,0x10,0xFF,
  0xEA,0xFF,0x55,0xFF,0xAA,0xFF,0x55,0xFF,0xA8,0xFF,0x44,0xFF,0xAA,0xFF,0x11,0xFF,
  0xEF,0xFF,0x55,0xFF,0xBB,0xFF,0x55,0xFF,0xAE,0xFF,0x55,0xFF,0xAA,0xFF,0x15,0xFF,
  0xEE,0xFF,0x55,0xFF,0xAA,0xFF,0x55,0xFF,0xEE,0xFF,0x55,0xFF,0xAF,0xFF,0x55,0xFF,
  0xEE,0xFF,0x55,0xFF,0xAA,0xFF,0x51,0xFF,0xFF,0xFF,0x5D,0xFF,0xBF,0xFF,0x57,0xFF,
  0xBE,0xFF,0x55,0xFF,0xBB,0xFF,0x55,0xFF,0xEA,0xFF,0xD5,0xFF,0xFF,0xFF,0x55,0xFF,
  0xFE,0xFF,0x55,0xFF,0xBB,0xFF,0x55,0xFF,0xAE,0xFF,0x55,0xFF,0xAA,0xFF,0x15,0xFF,
  0xFF,0xFF,0x55,0xFF,0xAA,0xFF,0x55,0xFF,0xEA,0xFF,0x55,0xFF,0xAB,0xFF,0x55,0xFF,
  0xEE,0xFF,0x55,0xFF,0xBB,0xFF,0x55,0xFF,0xEF,0xFF,0x55,0xFF,0xAA,0xFF,0x15,0xFF,
  0xFE,0xFF,0x55,0xFF,0xFA,0xFF,0x55,0xFF,0xEA,0xFF,0x55,0xFF,0xBB,0xFF,0x55,0xFF,
  0xEF,0xFF,0x55,0xFF,0xBB,0xFF,0x51,0xFF,0xFF,0xFF,0x55,0xFF,0xBB,0xFF,0x15,0xFF,
  0xFE,0xFF,0x55,0xFF,0xFB,0xFF,0x55,0xFF,0xEF,0xFF,0x55,0xFF,0xBB,0xFF,0x55,0xFF,
  0xEF,0xFF,0x55,0xFF,0xBF,0xFF,0x55,0xFF,0xEE,0xFF,0x55,0xFF,0xFA,0xFF,0x55,0xFF,
  0xEA,0xFF,0xD5,0xFF,0xBA,0xFF,0x55,0xFF,0xAE,0xFF,0x55,0xFF,0xAA,0xFF,0x51,0xFF,
  0xAE,0xFF,0x55,0xFF,0xAA,0xFF,0x50,0xFF,0xAA,0xFF,0x54,0xFF,0xAA,0xFF,0x50,0xFF,
  0xA0,0xFF,0x15,0xFF,0xAA,0xFF,0x15,0xFF,0xA2,0xFF,0x54,0xFF,0xAA,0xFF,0x01,0xFF,
  0xA0,0xFF,0x41,0xFF,0xA8,0xFF,0x01,0xFF,0x02,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xA0,0xFF,0x41,0xFF,0x00,0xFF,0x00,0xFF,0x80,0xFF,0x04,0xFF,0x00,0xFF,0x01,0xFF,
  0x82,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x88,0xFF,0x40,0xFF,0x00,0xFF,0x00,0xFF,
  0x8A,0xFF,0x55,0xFF,0xAA,0xFF,0x11,0xFF,0x02,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x2A,0xFF,0x40,0xFF,0xA0,0xFF,0x51,0xFF,0xAA,0xFF,0x00,0xFF,0x20,0xFF,0x01,0xFF,
  0x0A,0xFF,0x45,0xFF,0xAA,0xFF,0x55,0xFF,0xAA,0xFF,0x51,0xFF,0x00,0xFF,0x01,0xFF,
  0xAA,0xFF,0x55,0xFF,0xAB,0xFF,0x57,0xFF,0xAF,0xFF,0x55,0xFF,0xAF,0xFF,0x57,0xFF,
  0xFF,0xFF,0x7D,0xFF,0x0F,0xFF,0x43,0xFF,0xF0,0xEF,0xD0,0xFF,0xF8,0xFF,0x74,0xFF,
  0xFF,0xFF,0xDD,0xFF,0xFF,0xFF,0x77,0xFF,0xFF,0xFF,0x9D,0x7F,0x5F,0xBF,0xA7,0x5F,
  0xFF,0xFF,0xDD,0xFF,0xFF,0xFF,0x77,0xFF,0xFF,0xFF,0x5F,0xFF,0xBF,0xFF,0x55,0xFF,
  0xEF,0xFF,0xD5,0xFF,0xFA,0xFF,0x75,0xFF,0xFE,0xFF,0xDD,0xFF,0xFF,0xFF,0x57,0xFF,
  0xEE,0xFF,0x55,0xFF,0xAB,0xFF,0x55,0xFF,0xEE,0xFF,0x55,0xFF,0xAB,0xFF,0x55,0xFF,
  0xFA,0xFF,0x55,0xFF,0xAA,0xFF,0x55,0xFF,0xAA,0xFF,0x55,0xFF,0xAB,0xFF,0x15,0xFF,
  0xEE,0xFF,0x55,0xFF,0xBA,0xFF,0x15,0xFF,0xEE,0xFF,0x55,0xFF,0xAA,0xFF,0x55,0xFF,
  0xAE,0xFF,0x55,0xFF,0xBA,0xFF,0x55,0xFF,0xAE,0xFF,0x55,0xFF,0xAA,0xFF,0x55,0xFF,
  0xFF,0xFF,0x55,0xFF,0xAB,0xFF,0x51,0xFF,0xAE,0xFF,0x55,0xFF,0xAA,0xFF,0x15,0xFF,
  0xFE,0xFF,0x55,0xFF,0xBA,0xFF,0x51,0xFF,0xAE,0xFF,0x55,0xFF,0xAA,0xFF,0x55,0xFF,
  0xAA,0xFF,0x55,0xFF,0xBA,0xFF,0x51,0xFF,0xAA,0xFF,0x54,0xFF,0xAA,0xFF,0x77,0xFF,
  0xEA,0xFF,0x40,0xFF,0xAA,0xFF,0x50,0xFF,0xAA,0xFF,0x44,0xFF,0xA8,0xFF,0x50,0xFF,
  0x80,0xFF,0x40,0xFF,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x88,0xFF,0x00,0xFF,0x02,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x80,0xFF,0x14,0xFF,0xA8,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x08,0xFF,0x00,0xFF,0x02,0xFF,0x00,0xFF,0x02,0xFF,0x00,0xFF,0x02,0xFF,0x00,0xFF,
  0xBF,0xFF,0x5D,0xFF,0xBF,0xFF,0x77,0xFF,0xFF,0xFF,0x5D,0xFF,0xFF,0xFF,0x57,0xFF,
  0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0x77,0xFF,0xFF,0xFF,0xDD,0xFF,0xFF,0xFF,0x57,0xFF,
  0x07,0xFF,0xA9,0xD7,0x97,0xEF,0x65,0xDF,0xFE,0xFF,0xD0,0xFF,0xB3,0xFF,0x57,0xFF,
  0xFF,0xFF,0xC5,0xFF,0xA8,0xFF,0x02,0xFD,0x28,0xFF,0x5C,0xFF,0xA8,0xFF,0x02,0xFD,
  0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0x37,0xFF,0x3F,0xFF,0x2D,0xDF,0x87,0xFF,0x0D,0xF7,
  0xEA,0xFF,0xD5,0xFF,0xEA,0xFF,0x71,0xFF,0xE8,0xFF,0xD5,0xFF,0xFA,0xFF,0x51,0xFF,
  0xAA,0xFF,0x55,0xFF,0xAA,0xFF,0x51,0xFF,0xAA,0xFF,0x40,0xFF,0xAA,0xFF,0x10,0xFF,
  0xAA,0xFF,0x55,0xFF,0xAA,0xFF,0x55,0xFF,0xAA,0xFF,0x40,0xFF,0x2A,0xFF,0x11,0xFF,
  0xBE,0xFF,0x54,0xFF,0xAB,0xFF,0x51,0xFF,0xAA,0xFF,0x45,0xFF,0xAA,0xFF,0x51,0xFF,
  0xEA,0xFF,0x55,0xFF,0xAA,0xFF,0x51,0xFF,0xAA,0xFF,0x54,0xFF,0xAA,0xFF,0x11,0xFF,
  0xEA,0xFF,0x55,0xFF,0xAB,0xFF,0x17,0xFF,0xAF,0xFF,0x5D,0xFF,0xAF,0xFF,0x07,0xFF,
  0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0x77,0xFF,0xFF,0xFF,0xDF,0xFF,0xFF,0xFF,0x77,0xFF,
  0xE8,0xFF,0xF0,0xFF,0xFE,0xFF,0x74,0xFF,0xFE,0xFF,0xDD,0xFF,0xFF,0xFF,0x77,0xFF,
  0x00,0xFF,0x01,0xFF,0x01,0xFF,0x01,0xFF,0x01,0xFF,0x01,0xFF,0x01,0xFF,0x01,0xFF,
  0xFF,0xFF,0xDD,0xFF,0xFF,0xFF,0x75,0xFF,0xFF,0xFF,0xDD,0xFF,0xFF,0xFF,0x57,0xFF,
  0xFE,0xFF,0xDD,0xFF,0xFE,0xFF,0x77,0xFF,0xFF,0xFF,0xDD,0xFF,0xFF,0xFF,0x55,0xFF,
  0xFF,0xFF,0x50,0xFF,0xA7,0xF8,0x4F,0xF0,0xDF,0xE0,0x7F,0xC0,0x9F,0xE0,0x3F,0xC0,
  0xE8,0xFF,0x0A,0xF5,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x27,0xFF,0x0D,0xF7,0x07,0xFF,0x85,0x7F,0x8F,0x7F,0x85,0x7F,0xC7,0x3F,0xE5,0x1F,
  0xFA,0xFF,0x54,0xFF,0xBA,0xFF,0x51,0xFF,0xFE,0xFF,0x5D,0xFF,0xFE,0xFF,0x55,0xFF,
  0xAA,0xFF,0x40,0xFF,0xA8,0xFF,0x01,0xFF,0x88,0xFF,0x50,0xFF,0x80,0xFF,0x00,0xFF,
  0xAA,0xFF,0x15,0xFF,0x02,0xFF,0x01,0xFF,0x00,0xFF,0x44,0xFF,0x0A,0xFF,0x00,0xFF,
  0xAA,0xFF,0x50,0xFF,0x02,0xFF,0x11,0xFF,0x2A,0xFF,0x44,0xFF,0xAA,0xFF,0x00,0xFF,
  0xAA,0xFF,0x55,0xFF,0xAA,0xFF,0x11,0xFF,0xAA,0xFF,0x44,0xFF,0xAA,0xFF,0x01,0xFF,
  0x83,0xFF,0x01,0xFF,0xE0,0xFF,0x60,0xFF,0xF0,0xFF,0x50,0xFF,0xF0,0xFF,0x70,0xFF,
  0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0x77,0xFF,0x7F,0xFF,0x5F,0xFF,0x3F,0xFF,0x17,0xFF,
  0x03,0xFF,0x01,0xFF,0x03,0xFF,0x01,0xFF,0x03,0xFF,0x01,0xFF,0x02,0xFF,0x00,0xFF,
  0xFF,0xFF,0x5D,0xFF,0xFF,0xFF,0x55,0xFF,0xEE,0xFF,0x55,0xFF,0xAA,0xFF,0x55,0xFF,
  0x9D,0xE2,0x6E,0xD1,0xB1,0xCE,0x7F,0xC0,0x7F,0x80,0xFF,0x00,0xFF,0x00,0x7F,0x80,
  0x70,0x8F,0xE0,0x1F,0xFD,0x02,0xEF,0x10,0xFF,0x00,0xFF,0x00,0xC7,0x38,0xFF,0x00,
  0x5F,0xAF,0xE5,0x1F,0x5B,0xAF,0xED,0x17,0xC7,0x3F,0xFD,0x17,0xF3,0x1F,0xD5,0x2F,
  0xFE,0xFF,0x54,0xFF,0xFE,0xFF,0x54,0xFF,0xFE,0xFF,0x54,0xFF,0xBE,0xFF,0x54,0xFF,
  0x00,0xFF,0x00,0xFF,0x08,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x20,0xFF,0x00,0xFF,0x88,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x2A,0xFF,0x10,0xFF,0x00,0xFF,0x04,0xFF,0x00,0xFF,0x00,0xFF,
  0x08,0xFF,0x04,0xFF,0x8A,0xFF,0x10,0xFF,0x00,0xFF,0x00,0xFF,0x01,0xFE,0x01,0xFE,
  0x28,0xFF,0x50,0xFF,0x08,0xFF,0x80,0x7F,0x2C,0xFF,0x04,0xFF,0x40,0xBF,0x80,0x7F,
  0x3F,0xFF,0x1D,0xFF,0x1F,0xFF,0x37,0xDF,0x0F,0xFF,0x0D,0xFF,0x0F,0xFF,0x07,0xFF,
  0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0x77,0xFF,0xFF,0xFF,0xDD,0xFF,0xFF,0xFF,0x77,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x11,0xEE,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x14,0xEB,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x02,0xFD,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x02,0xFD,0x00,0xFF,
  0x02,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x02,0xFF,0x00,0xFF,0x02,0xFD,0x00,0xFF,
  0x7F,0x80,0x3F,0xC0,0x4F,0xB0,0x0F,0xF0,0x17,0xE8,0x1B,0xC4,0x2D,0x82,0x56,0x09,
  0xFF,0x00,0x8F,0x70,0xF5,0x0A,0xFF,0x00,0x87,0x78,0xFB,0x04,0xF7,0x08,0x0F,0xF0,
  0xDE,0x2F,0xD5,0x3F,0x4B,0xBF,0xDD,0x77,0x8F,0x7B,0xC9,0x77,0xA6,0x79,0xCF,0x70,
  0xEE,0xFF,0x54,0xFF,0xFA,0xFF,0x54,0xFF,0xFE,0xFF,0x54,0xFF,0xBE,0xFF,0x54,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x02,0xFD,0x00,0xFF,0xAA,0x55,0x00,0xFF,0x0A,0xF5,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x20,0xDF,0x10,0xEF,0xAA,0x55,0x00,0xFF,0xAA,0x55,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xAA,0x55,0x00,0xFF,0xAA,0x55,
  0x01,0xFE,0x00,0xFF,0x01,0xFE,0x01,0xFE,0x11,0xEE,0xA8,0x57,0x01,0xFE,0xA8,0x57,
  0x08,0xFF,0x84,0x7F,0x40,0xBF,0x80,0x7F,0x08,0xFF,0x80,0x7F,0x00,0xFF,0x88,0x77,
  0x0F,0xFF,0x0D,0xFF,0x0F,0xFF,0x07,0xFF,0x0F,0xFF,0x0D,0xFF,0x0F,0xFF,0x07,0xFF,
  0x00,0xFF,0x02,0xFD,0x00,0xFF,0xAA,0x55,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xA0,0x5F,
  0x02,0xFD,0x00,0xFF,0xAA,0x55,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xA0,0x5F,0x01,0xFE,
  0x00,0xFF,0xAA,0x55,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xA0,0x5F,0x01,0xFE,0x00,0xFF,
  0xAA,0x55,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xA0,0x5F,0x01,0xFE,0x00,0xFF,0x55,0xAA,
  0xFF,0xFE,0x5D,0xFE,0xFE,0xFC,0x55,0xF8,0xEA,0xF8,0x55,0xF0,0xBA,0xE0,0x51,0xE0,
  0xA7,0x08,0x53,0x0C,0xA9,0x1E,0x74,0x1F,0xBF,0x1F,0x7F,0x1F,0xBF,0x1F,0x7F,0x1F,
  0x2C,0xFB,0x91,0x7F,0xCB,0x3F,0xE7,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xEF,0xE0,0xFD,0xE0,0xFF,0xE0,0xFF,0xE0,0xFF,0xE0,0xFD,0xE0,0xFF,0xE0,0xFD,0xE0,
  0xFE,0xFF,0xD4,0x3F,0xEA,0x0F,0xF0,0x03,0xFF,0x00,0xFF,0x00,0xDF,0x20,0xF7,0x00,
  0x00,0xFF,0x00,0xFF,0x45,0xBA,0x00,0xFF,0x55,0xAA,0x2A,0x55,0x94,0x2B,0xDA,0x05,
  0x01,0xFE,0x00,0xFF,0x44,0xBB,0x2A,0xD5,0xFF,0x00,0x8A,0x75,0x55,0xAA,0xEA,0x15,
  0x10,0xEF,0x02,0xFD,0x44,0xBB,0xAA,0x55,0xFF,0x00,0xAA,0x55,0x5F,0xA0,0xEA,0x15,
  0x01,0xFE,0x00,0xFF,0x05,0xFA,0xA8,0x57,0xFC,0x03,0xAA,0x55,0xFF,0x00,0xAA,0x55,
  0x0C,0xFF,0x14,0xFF,0x00,0xFF,0x20,0xDF,0x08,0xFF,0x04,0xFF,0x00,0xFF,0x20,0xDF,
  0x0F,0xFF,0x0D,0xFF,0x0F,0xFF,0x07,0xFF,0x0F,0xFF,0xAD,0x5F,0x4F,0xBF,0xA7,0x5F,
  0x01,0xFE,0x00,0xFF,0x55,0xAA,0x80,0x7F,0x10,0xEF,0xA0,0x5F,0x5C,0xA3,0xAC,0x53,
  0x00,0xFF,0x55,0xAA,0x80,0x7F,0x10,0xEF,0xA0,0x5F,0x5C,0xA3,0xAC,0x53,0x05,0xFA,
  0x55,0xAA,0x80,0x7F,0x10,0xEF,0xA0,0x5F,0x5C,0xA3,0xAC,0x53,0x05,0xFA,0xBF,0x40,
  0x80,0x7F,0x10,0xEF,0xA0,0x5F,0x5C,0xA3,0xAC,0x53,0x05,0xFA,0xBF,0x40,0x05,0xFA,
  0xFF,0xFF,0x5D,0xFF,0xFF,0xFF,0x55,0xFF,0xEF,0xFE,0x57,0xFC,0xAA,0xFC,0x55,0xF8,
  0x2A,0xC0,0x55,0x80,0x2A,0x80,0x11,0x00,0xAC,0x03,0x4A,0x05,0xA5,0x0A,0x01,0x00,
  0xFF,0x1F,0xFF,0x1F,0xFF,0x1F,0x7F,0x1F,0x7F,0x9F,0x9F,0x7F,0xFF,0x07,0x1F,0x07,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFE,0xE0,0xDF,0xE0,0xDB,0xE0,0xEA,0xD5,0xD0,0xAF,0xED,0x90,0xCA,0xB0,0xAD,0xD0,
  0xDE,0x20,0xFF,0x00,0xFB,0x00,0x4F,0x10,0x2E,0xD0,0x2F,0xD0,0xCF,0x30,0xDF,0x00,
  0xF9,0x06,0x7F,0x00,0xFF,0x00,0xD7,0x00,0xFF,0x00,0xF5,0x00,0x7F,0x80,0xF6,0x01,
  0x15,0xEA,0xFF,0x00,0x57,0xA8,0xFF,0x00,0x1F,0xE0,0x2A,0x55,0xBF,0x00,0x6F,0x10,
  0x55,0xAA,0xFF,0x00,0x5F,0xA0,0xFE,0x01,0xFF,0x00,0xFD,0x00,0xF7,0x08,0xFF,0x00,
  0xFE,0x01,0xBA,0x45,0xFE,0x01,0xAA,0x55,0xFF,0x00,0x57,0x00,0xFF,0x00,0xF7,0x00,
  0x28,0xFF,0x52,0xFD,0x24,0xFB,0x8A,0x75,0xA1,0x7E,0xDA,0x75,0x85,0x7A,0xDA,0x75,
  0x0F,0xFF,0x0D,0xFF,0x1F,0xFF,0x95,0x7F,0x7F,0xFF,0xDD,0x7F,0x7F,0xFF,0xD5,0x7F,
  0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0x77,0xFF,0xFF,0xFF,0xDF,0xFF,0xFF,0xFF,0x57,0xFF,
  0x05,0xFA,0xBF,0x40,0x05,0xFA,0xAE,0x51,0x51,0xAE,0xBF,0x40,0x50,0xAF,0xAA,0x55,
  0xBF,0x40,0x05,0xFA,0xAE,0x51,0x51,0xAE,0xBF,0x40,0x50,0xAF,0xAA,0x55,0x15,0xEA,
  0x05,0xFA,0xAE,0x51,0x51,0xAE,0xBF,0x40,0x50,0xAF,0xAA,0x55,0x15,0xEA,0xEA,0x15,
  0xAE,0x51,0x51,0xAE,0xBF,0x40,0x50,0xAF,0xAA,0x55,0x15,0xEA,0xEA,0x15,0x55,0xAA,
  0xFA,0xF8,0x54,0xF0,0xFA,0xF0,0x50,0xF0,0xEA,0xF0,0x54,0xF0,0xAA,0xF0,0x51,0xF0,
  0xAA,0x00,0x55,0x00,0xAA,0x00,0x11,0x00,0xAA,0x00,0x45,0x00,0xAA,0x00,0x17,0x00,
  0xAF,0x07,0x5F,0x07,0xBB,0x07,0x7F,0x03,0xAF,0x03,0x5F,0x03,0xAF,0x03,0x1F,0x03,
  0xCF,0x20,0xF5,0x00,0x5B,0xA0,0x75,0x80,0xBF,0xC0,0x15,0xC0,0xFB,0x80,0xF5,0x80,
  0x6F,0x80,0xFF,0x00,0xAF,0x00,0xFF,0x00,0xEF,0x00,0xFF,0x00,0xBF,0x40,0xBF,0x40,
  0x7E,0x81,0xFE,0x01,0x9F,0x20,0xFD,0x00,0xFE,0x00,0xB7,0x40,0xBF,0x40,0xB7,0x40,
  0xFF,0x00,0x5F,0x00,0xFF,0x00,0xF7,0x00,0xFF,0x00,0xFD,0x00,0xDF,0x20,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xAA,0x00,0xFF,0x00,0xFF,0x00,0x57,0x00,0xFF,0x00,0x51,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xAF,0x00,0xFF,0x00,0xFB,0x00,0xFF,0x00,
  0xF1,0x7E,0x9A,0x75,0xE4,0x3B,0xD8,0x37,0xE5,0x3A,0xD2,0x3D,0xE5,0x3A,0xDA,0x35,
  0x7F,0xFF,0xD5,0x7F,0x7F,0xFF,0xD5,0x7F,0x3F,0xFF,0x95,0x7F,0x7B,0xBF,0x95,0x7F,
  0xFF,0xFF,0xDD,0xFF,0xFF,0xFF,0x77,0xFF,0xFF,0xFF,0xDD,0xFF,0xFF,0xFF,0x55,0xFF,
  0x15,0xEA,0xEA,0x15,0x55,0xAA,0xEA,0x15,0x53,0xAC,0xAA,0x55,0x55,0xAA,0xAA,0x55,
  0xEA,0x15,0x55,0xAA,0xEA,0x15,0x53,0xAC,0xAA,0x55,0x55,0xAA,0xAA,0x55,0x7F,0x80,
  0x55,0xAA,0xEA,0x15,0x53,0xAC,0xAA,0x55,0x55,0xAA,0xAA,0x55,0x7F,0x80,0xA2,0x5D,
  0xEA,0x15,0x53,0xAC,0xAA,0x55,0x55,0xAA,0xAA,0x55,0x7F,0x80,0xA2,0x5D,0x55,0xAA,
  0xFA,0xF0,0x54,0xF0,0xEA,0xE0,0x70,0xC0,0xEA,0xC0,0x44,0xC0,0xAA,0x80,0x01,0x80,
  0xAF,0x03,0x5F,0x03,0xBF,0x03,0x5B,0x07,0xBF,0x07,0x7F,0x07,0xBF,0x07,0x7F,0x07,
  0xFF,0x80,0xBD,0xC0,0xFF,0xC0,0xFF,0xC0,0xDF,0xE0,0xDF,0xE0,0xFF,0xE0,0xFF,0xF0,
  0xBF,0x40,0x9F,0x40,0xFF,0x00,0x9F,0x40,0xFB,0x04,0xBB,0x44,0xDF,0x20,0xDF,0x20,
  0xBF,0x40,0xBF,0x40,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xDF,0x00,0xFF,0x00,0xFF,0x00,
  0xDF,0x20,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xDE,0x21,
  0xFF,0x00,0xFC,0x00,0xBB,0x00,0xD7,0x00,0xEF,0x00,0xFF,0x00,0x7A,0x80,0xFF,0x00,
  0xFF,0x00,0x77,0x00,0xFF,0x00,0x57,0x00,0xFF,0x00,0x55,0x00,0xFF,0x00,0x7D,0x00,
  0xC7,0x38,0x8A,0x75,0x87,0x78,0xAA,0x55,0xC5,0x3A,0xCA,0x35,0xC5,0x3A,0xCA,0x35,
  0xBF,0x7F,0x95,0x7F,0x7B,0xBF,0x15,0xFF,0x6F,0xBF,0x95,0x7F,0x6B,0xBF,0xD5,0x3F,
  0xFF,0xFF,0x55,0xFF,0xFF,0xFF,0x55,0xFF,0xFE,0xFF,0x45,0xFF,0xBB,0xFF,0x55,0xFF,
  0x7F,0x80,0xA2,0x5D,0x55,0xAA,0xEE,0x11,0x7D,0x82,0xAA,0x55,0x55,0xAA,0xEF,0x10,
  0xA2,0x5D,0x55,0xAA,0xEE,0x11,0x7D,0x82,0xAA,0x55,0x55,0xAA,0xEF,0x10,0xD5,0x2A,
  0x55,0xAA,0xEE,0x11,0x7D,0x82,0xAA,0x55,0x55,0xAA,0xEF,0x10,0xD5,0x2A,0xAA,0x55,
  0xEE,0x11,0x7D,0x82,0xAA,0x55,0x55,0xAA,0xEF,0x10,0xD5,0x2A,0xAA,0x55,0x55,0xAA,
  0xFF,0x07,0x7F,0x07,0xFF,0x07,0x7F,0x07,0xFF,0x07,0x7F,0x07,0xBF,0x07,0x6F,0x17,
  0xFF,0xF0,0xFF,0xF0,0xF5,0xFA,0xF7,0xF8,0xFF,0xF8,0xFF,0xF8,0xFF,0xF8,0xF7,0xF8,
  0xDF,0x20,0xDB,0x24,0xDF,0x20,0xDF,0x20,0xDF,0x20,0xFB,0x04,0xDF,0x20,0xDF,0x20,
  0xF7,0x08,0xF4,0x02,0xFB,0x04,0xF7,0x08,0xCF,0x30,0xFF,0x00,0xDF,0x20,0xFF,0x00,
  0x77,0x88,0xFB,0x04,0xFD,0x02,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFE,0x00,0xD5,0x00,0x7F,0x80,0xF5,0x00,0x7F,0x80,0xFF,0x00,0xEB,0x00,0xFD,0x00,
  0xBF,0x00,0x7F,0x00,0xEB,0x00,0xFF,0x00,0xEE,0x00,0x5F,0x00,0xFF,0x00,0x57,0x00,
  0xC1,0x3E,0xC2,0x3D,0xC7,0x38,0xC2,0x3D,0xC2,0x3F,0xD5,0x3F,0xC0,0x3F,0xC2,0x3D,
  0x6E,0xBF,0x95,0x7F,0x7A,0xBF,0x95,0x7F,0xFE,0xFF,0x55,0xFF,0x2B,0xFF,0x28,0xD7,
  0xEE,0xFF,0x55,0xFF,0xAB,0xFF,0x55,0xFF,0xBF,0xFF,0x55,0xFF,0xFF,0xFF,0x00,0xFF,
  0xD5,0x2A,0xAA,0x55,0x55,0xAA,0xBE,0x41,0x55,0xAA,0xAA,0x55,0x57,0xA8,0xEE,0x11,
  0xAA,0x55,0x55,0xAA,0xBE,0x41,0x55,0xAA,0xAA,0x55,0x57,0xA8,0xEE,0x11,0x55,0xAA,
  0x55,0xAA,0xBE,0x41,0x55,0xAA,0xAA,0x55,0x57,0xA8,0xEE,0x11,0x55,0xAA,0xAA,0x55,
  0xBE,0x41,0x55,0xAA,0xAA,0x55,0x57,0xA8,0xEE,0x11,0x55,0xAA,0xAA,0x55,0x55,0xAA,
  0xFA,0x00,0x75,0x00,0xBA,0x00,0x55,0x00,0xAE,0x00,0xD5,0x00,0x6B,0x80,0xF5,0x00,
  0xAA,0x00,0x55,0x00,0xBF,0x00,0x6E,0x11,0xD1,0x2E,0xEA,0x15,0xDC,0x23,0x7E,0x01,
  0x9F,0x67,0x9F,0x67,0xF7,0x0F,0xB7,0x4F,0x3F,0xCF,0xBF,0x4F,0x7F,0x8F,0x1F,0xFF,
  0xFF,0xF8,0xFF,0xF8,0xFF,0xF8,0xFF,0xF8,0xFB,0xFC,0xFF,0xFC,0xFF,0xFC,0xFF,0xFC,
  0xDF,0x20,0xFB,0x04,0xDF,0x20,0xCF,0x30,0x4F,0xB0,0xEB,0x14,0x4F,0xB0,0xEF,0x10,
  0xFF,0x00,0xBE,0x41,0xC0,0x3F,0xE2,0x1D,0xD1,0x2E,0xF8,0x07,0xD0,0x2F,0xFA,0x05,
  0xC1,0x3E,0x83,0x7C,0x5E,0xA0,0xAF,0x50,0x11,0xEE,0xA0,0x5F,0x5A,0xA0,0xAB,0x54,
  0xEB,0x00,0x7F,0x00,0xBB,0x00,0x55,0x00,0xEE,0x00,0xF5,0x00,0xAA,0x00,0x5F,0x00,
  0xFF,0x00,0xD6,0x01,0xBF,0x00,0x7F,0x00,0xFF,0x00,0x5F,0x00,0xFF,0x00,0xFF,0x00,
  0x7E,0xBF,0xA0,0x5F,0x80,0x7F,0xAF,0x50,0xBD,0x42,0xEA,0x15,0xFF,0x00,0xE9,0x17,
  0xFE,0xFF,0x21,0xDE,0x1F,0xE0,0xEE,0x11,0xFF,0x00,0xE8,0x17,0x2A,0xFF,0x00,0xFF,
  0xEE,0xFF,0xD5,0x7F,0xBF,0x7F,0xD5,0x7F,0x8F,0x7F,0x40,0xFF,0x00,0xFF,0x00,0xFF,
  0x55,0xAA,0xAA,0x55,0x55,0xAA,0xFE,0x01,0x55,0xAA,0xAA,0x55,0x57,0xA8,0xEA,0x15,
  0xAA,0x55,0x55,0xAA,0xFE,0x01,0x55,0xAA,0xAA,0x55,0x57,0xA8,0xEA,0x15,0x1D,0xE2,
  0xAA,0x55,0x55,0xAA,0xFE,0x01,0x55,0xAA,0xAA,0x55,0x57,0xA8,0xEA,0x15,0xD0,0x2F,
  0x55,0xAA,0xFE,0x01,0x55,0xAA,0xAA,0x55,0x57,0xA8,0xEA,0x15,0x01,0xFE,0x2F,0xD0,
  0x55,0xAA,0xFE,0x01,0x55,0xAA,0xAA,0x55,0x57,0xA8,0xEA,0x15,0x7D,0x82,0xBA,0x45,
  0xFE,0x01,0x55,0xAA,0xAA,0x55,0x57,0xA8,0xEA,0x15,0x11,0xEE,0xAF,0x50,0xF4,0x0B,
  0xFE,0x01,0x55,0xAA,0xAA,0x55,0x57,0xA8,0xEA,0x15,0x51,0xAE,0xA2,0x5D,0x41,0xBE,
  0x5F,0xA0,0xAB,0x54,0x7D,0xBA,0xD7,0x3C,0x53,0xAC,0x03,0xFC,0x41,0xBE,0xC3,0x3C,
  0xDF,0x20,0x7E,0x01,0xDF,0x20,0xE1,0x1F,0xD0,0x2F,0xE1,0x1F,0xCD,0x3B,0xFF,0x11,
  0x3F,0xFF,0x5F,0xFF,0xBF,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFD,0xFE,0xFF,0xFC,0xFF,0xFE,0xFE,0xFF,0xFF,0xFE,0xFE,0xFF,0xFF,0xFE,0xFE,0xFF,
  0x4F,0xB0,0xEB,0x14,0x4F,0xB0,0xEF,0x10,0x5B,0xA4,0xFB,0x04,0x5F,0xA0,0xFD,0x00,
  0xE0,0x0F,0xFA,0x05,0xFD,0x02,0xF6,0x01,0xFD,0x02,0xD6,0x01,0xE8,0x03,0xD5,0x00,
  0x07,0xF8,0xBF,0x40,0x5E,0xA0,0x8D,0x70,0x1F,0xE0,0x4B,0xF4,0x31,0xFE,0xA7,0x5C,
  0xFF,0x00,0xFD,0x00,0xAC,0x03,0x68,0x17,0x00,0xFF,0x80,0x7F,0xC0,0x3F,0x80,0x7F,
  0xDF,0x20,0xC0,0x1F,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x15,0xEA,0xAA,0x55,0x7F,0x80,0xAA,0x55,0x55,0xAA,0xAB,0x54,0x5D,0xA2,0xEA,0x15,
  0xBA,0x45,0x55,0xAA,0xAA,0x55,0x77,0x88,0xBA,0x45,0x55,0xAA,0xA2,0x5D,0x37,0xC8,
  0xAA,0x55,0x55,0xAA,0xBA,0x45,0x59,0xA6,0xAA,0x55,0x5F,0xA0,0xEA,0x15,0x45,0xBA,
  0xC5,0x3A,0xAA,0x55,0x17,0xE8,0xBA,0x45,0x55,0xAA,0xBA,0x45,0x31,0xCE,0xEA,0x15,
  0x55,0xAA,0xBE,0x41,0xDD,0x22,0x2A,0xD5,0x1D,0xE2,0x0A,0xF5,0x31,0xEE,0xCA,0x75,
  0xEA,0x15,0x50,0xAF,0xAA,0x55,0x75,0x8A,0xAA,0x55,0x97,0x68,0xFE,0x01,0x5C,0xA3,
  0x02,0xFD,0x51,0xAE,0x8B,0x74,0xC5,0x3A,0xE2,0x1D,0x61,0x9E,0xC2,0x3D,0x06,0xF9,
  0x01,0xFE,0x81,0x7E,0x43,0xBC,0x83,0x7C,0x43,0xBC,0x83,0x7C,0x67,0xB8,0x07,0xF8,
  0x0F,0xF1,0x39,0xC7,0x6A,0x9F,0xF7,0x1C,0xC3,0x3C,0xF6,0x09,0xF6,0x09,0xEF,0x11,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,
  0x7A,0x80,0xF5,0x00,0x4A,0xA0,0xF1,0x00,0x6E,0x80,0xC5,0x00,0x2A,0x80,0xD5,0x00,
  0xD5,0x2A,0x6E,0x11,0x80,0x3F,0x00,0x3F,0xA0,0x1F,0x40,0x1F,0xA0,0x1F,0x00,0x1F,
  0x55,0xAA,0xAA,0x55,0x5D,0xA2,0xAA,0x55,0x11,0xEE,0x08,0xF7,0x15,0xEA,0xAA,0x55,
  0xEA,0x15,0x5D,0xA2,0xAA,0x55,0x7F,0x80,0xEA,0x15,0x7F,0x80,0xA0,0x5F,0xFF,0x00,
  0xA3,0x5C,0x55,0xAA,0xEA,0x15,0x57,0xA8,0xEE,0x11,0x50,0xAF,0xE8,0x17,0xFF,0x00,
  0x45,0xBA,0xEF,0x10,0xC1,0x3E,0x02,0xFD,0x00,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0x00,
  0x57,0xA8,0x80,0x7F,0x41,0xBE,0x80,0x7F,0x56,0xA9,0x20,0xDF,0xFF,0x00,0xFF,0x00,
  0xA0,0x5F,0xFE,0x01,0x5C,0xA3,0xA0,0x5F,0x4D,0xB2,0xA1,0x5F,0x2B,0xFF,0x14,0xFF,
  0xE0,0x1F,0xC2,0x3D,0x06,0xF9,0xE0,0x1F,0x28,0xFF,0x54,0xFF,0x8A,0xFF,0x15,0xFF,
  0x07,0xF8,0xE7,0x18,0xBF,0xF8,0x57,0xF8,0xE7,0xF8,0x5F,0xF0,0xAF,0xF0,0x5E,0xF1,
  0xCF,0x31,0xFF,0x01,0xDD,0x23,0xBF,0x43,0xBF,0x43,0xFF,0x07,0x77,0x8F,0xFF,0x07,
  0xB0,0x0F,0x40,0x0F,0xA0,0x0F,0x48,0x07,0xA0,0x0F,0x48,0x07,0xA0,0x07,0x50,0x07
};
