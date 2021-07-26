#include <gb/gb.h>
#include <stdint.h>
#include <stdio.h>

// These two entries are needed to enable auto-banking in the source file
#pragma bank 255
const void __at(255) __bank_srcfile11;
// A big constant array to take up space