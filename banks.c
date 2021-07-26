#include <gb/gb.h>
#include <stdint.h>
#include <stdio.h>

#define SCREEN_DELAY 245
/*to calculate the delay (in milliseconds) take 1000 and divide it by your framerate. 
for example if you have framerate 2 do "1000÷2" and you will get 500. use ONLY EVEN
NUMBER framerates since for example 30fps will produce 3.33333 which will NOT work, 
since, well, you cant divide even number with odd number without getting decimal number...*/

// Bank number references from the other source files
extern const void __bank_srcfile1;
extern const void __bank_srcfile2; 
extern const void __bank_srcfile3;
extern const void __bank_srcfile4;  
extern const void __bank_srcfile5;  
extern const void __bank_srcfile6;  
extern const void __bank_srcfile7;  
extern const void __bank_srcfile8;  
extern const void __bank_srcfile9;  
extern const void __bank_srcfile10;  
extern const void __bank_srcfile11;  
extern const void __bank_srcfile12;  
extern const void __bank_srcfile13;
extern const void __bank_srcfile14;  
extern const void __bank_srcfile15;  
extern const void __bank_srcfile16;  
extern const void __bank_srcfile17;  
extern const void __bank_srcfile18;  
extern const void __bank_srcfile19;  
extern const void __bank_srcfile20;
//frames references. 
extern const unsigned char A01_map_data[];
extern const unsigned char A01_tile_data[];
extern const unsigned char A02_map_data[];
extern const unsigned char A02_tile_data[];
extern const unsigned char A03_map_data[];
extern const unsigned char A03_tile_data[];
extern const unsigned char A04_map_data[];
extern const unsigned char A04_tile_data[];
extern const unsigned char A05_map_data[];
extern const unsigned char A05_tile_data[];
extern const unsigned char A06_map_data[];
extern const unsigned char A06_tile_data[];
extern const unsigned char A07_map_data[];
extern const unsigned char A07_tile_data[];
extern const unsigned char A08_map_data[];
extern const unsigned char A08_tile_data[];
extern const unsigned char A09_map_data[];
extern const unsigned char A09_tile_data[];
extern const unsigned char A10_map_data[];
extern const unsigned char A10_tile_data[];
extern const unsigned char A11_map_data[];
extern const unsigned char A11_tile_data[];
extern const unsigned char A12_map_data[];
extern const unsigned char A12_tile_data[];
extern const unsigned char A13_map_data[];
extern const unsigned char A13_tile_data[];
extern const unsigned char A14_map_data[];
extern const unsigned char A14_tile_data[];
extern const unsigned char A15_map_data[];
extern const unsigned char A15_tile_data[];
extern const unsigned char A16_map_data[];
extern const unsigned char A16_tile_data[];
extern const unsigned char A17_tile_data[];
extern const unsigned char A17_map_data[];
extern const unsigned char A18_tile_data[];
extern const unsigned char A18_map_data[];
extern const unsigned char A19_tile_data[];
extern const unsigned char A19_map_data[];
extern const unsigned char A20_map_data[];
extern const unsigned char A20_tile_data[];
extern const unsigned char A21_map_data[];
extern const unsigned char A21_tile_data[];
extern const unsigned char A22_map_data[];
extern const unsigned char A22_tile_data[];
extern const unsigned char A23_map_data[];
extern const unsigned char A23_tile_data[];
extern const unsigned char A24_map_data[];
extern const unsigned char A24_tile_data[];
extern const unsigned char A25_map_data[];
extern const unsigned char A25_tile_data[];
extern const unsigned char A26_map_data[];
extern const unsigned char A26_tile_data[];
extern const unsigned char A27_map_data[];
extern const unsigned char A27_tile_data[];
extern const unsigned char A28_map_data[];
extern const unsigned char A28_tile_data[];
extern const unsigned char A29_map_data[];
extern const unsigned char A29_tile_data[];
extern const unsigned char A30_map_data[];
extern const unsigned char A30_tile_data[];
extern const unsigned char A31_map_data[];
extern const unsigned char A31_tile_data[];
extern const unsigned char A32_map_data[];
extern const unsigned char A32_tile_data[];
extern const unsigned char A33_map_data[];
extern const unsigned char A33_tile_data[];
extern const unsigned char A34_tile_data[];
extern const unsigned char A34_map_data[];
extern const unsigned char A35_tile_data[];
extern const unsigned char A35_map_data[];
extern const unsigned char A36_tile_data[];
extern const unsigned char A36_map_data[];
extern const unsigned char A37_tile_data[];
extern const unsigned char A37_map_data[];
extern const unsigned char A38_tile_data[];
extern const unsigned char A38_map_data[];
extern const unsigned char A39_tile_data[];
extern const unsigned char A39_map_data[];
extern const unsigned char A40_tile_data[];
extern const unsigned char A40_map_data[];
extern const unsigned char A41_tile_data[];
extern const unsigned char A41_map_data[];
extern const unsigned char A42_tile_data[];
extern const unsigned char A42_map_data[];
extern const unsigned char A43_tile_data[];
extern const unsigned char A43_map_data[];
extern const unsigned char A44_tile_data[];
extern const unsigned char A44_map_data[];
extern const unsigned char A45_tile_data[];
extern const unsigned char A45_map_data[];
extern const unsigned char A46_tile_data[];
extern const unsigned char A46_map_data[];
extern const unsigned char A47_tile_data[];
extern const unsigned char A47_map_data[];
extern const unsigned char A48_tile_data[];
extern const unsigned char A48_map_data[];
extern const unsigned char A49_tile_data[];
extern const unsigned char A49_map_data[];
extern const unsigned char A50_tile_data[];
extern const unsigned char A50_map_data[];
extern const unsigned char A51_tile_data[];
extern const unsigned char A51_map_data[];
extern const unsigned char A52_tile_data[];
extern const unsigned char A52_map_data[];
extern const unsigned char A53_tile_data[];
extern const unsigned char A53_map_data[];
extern const unsigned char A54_tile_data[];
extern const unsigned char A54_map_data[];
extern const unsigned char A55_tile_data[];
extern const unsigned char A55_map_data[];
extern const unsigned char A56_tile_data[];
extern const unsigned char A56_map_data[];
extern const unsigned char A57_tile_data[];
extern const unsigned char A57_map_data[];
extern const unsigned char A58_tile_data[];
extern const unsigned char A58_map_data[];
extern const unsigned char A59_tile_data[];
extern const unsigned char A59_map_data[];
extern const unsigned char A60_tile_data[];
extern const unsigned char A60_map_data[];
extern const unsigned char A61_tile_data[];
extern const unsigned char A61_map_data[];
extern const unsigned char A62_tile_data[];
extern const unsigned char A62_map_data[];
extern const unsigned char A63_tile_data[];
extern const unsigned char A63_map_data[];
extern const unsigned char A64_tile_data[];
extern const unsigned char A64_map_data[];
extern const unsigned char A65_tile_data[];
extern const unsigned char A65_map_data[];
extern const unsigned char A66_tile_data[];
extern const unsigned char A66_map_data[];
extern const unsigned char A67_tile_data[];
extern const unsigned char A67_map_data[];
extern const unsigned char A68_tile_data[];
extern const unsigned char A68_map_data[];
extern const unsigned char A69_tile_data[];
extern const unsigned char A69_map_data[];
extern const unsigned char A70_tile_data[];
extern const unsigned char A70_map_data[];
void main()
{
	DISPLAY_ON;
	SHOW_BKG;
	// Load up the tile data
	SWITCH_ROM_MBC1( (uint8_t)&__bank_srcfile1 );
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A01_map_data);
	set_bkg_data(0,255,A01_tile_data);
delay(SCREEN_DELAY)
	set_bkg_tiles(0,1,20,16,A02_map_data);
	set_bkg_data(0,255,A02_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A03_map_data);
	set_bkg_data(0,255,A03_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A04_map_data);
	set_bkg_data(0,255,A04_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A05_map_data);
	set_bkg_data(0,255,A05_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A06_map_data);
	set_bkg_data(0,255,A06_tile_data);
	delay(SCREEN_DELAY);

	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A07_map_data);
	set_bkg_data(0,255,A07_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A08_map_data);
	set_bkg_data(0,255,A08_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A09_map_data);
	set_bkg_data(0,255,A09_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A10_map_data);
	set_bkg_data(0,255,A10_tile_data);

	// Turn the display on
	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A11_map_data);
	set_bkg_data(0,255,A11_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A12_map_data);
	set_bkg_data(0,255,A12_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A13_map_data);
	set_bkg_data(0,255,A13_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A14_map_data);
	set_bkg_data(0,255,A14_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A15_map_data);
	set_bkg_data(0,255,A15_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A16_map_data);
	set_bkg_data(0,255,A16_tile_data);
	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A17_map_data);
	set_bkg_data(0,255,A17_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A18_map_data);
	set_bkg_data(0,255,A18_tile_data);
	delay(SCREEN_DELAY);

	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A19_map_data);
	set_bkg_data(0,255,A19_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A20_map_data);
	set_bkg_data(0,255,A20_tile_data);
	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A21_map_data);
	set_bkg_data(0,255,A21_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_data(0,255,A22_tile_data);
	set_bkg_tiles(0,1,20,16,A22_map_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A23_map_data);
	set_bkg_data(0,255,A23_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A24_map_data);
	set_bkg_data(0,255,A24_tile_data);

	delay(SCREEN_DELAY);

	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A25_map_data);
	set_bkg_data(0,255,A25_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A26_map_data);
	set_bkg_data(0,255,A26_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A27_map_data);
	set_bkg_data(0,255,A27_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A28_map_data);
	set_bkg_data(0,255,A28_tile_data);
	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A29_map_data);
	set_bkg_data(0,255,A29_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A30_map_data);
	set_bkg_data(0,255,A30_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A31_map_data);
	set_bkg_data(0,255,A31_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A32_map_data);
	set_bkg_data(0,255,A32_tile_data);
	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A33_map_data);
	set_bkg_data(0,255,A33_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A34_map_data);
	set_bkg_data(0,255,A34_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A35_map_data);
	set_bkg_data(0,255,A35_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A36_map_data);
	set_bkg_data(0,255,A36_tile_data);
	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A37_map_data);
	set_bkg_data(0,255,A37_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A38_map_data);
	set_bkg_data(0,255,A38_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A39_map_data);
	set_bkg_data(0,255,A39_tile_data);
	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A40_map_data);
	set_bkg_data(0,255,A40_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A41_map_data);
	set_bkg_data(0,255,A41_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A42_map_data);
	set_bkg_data(0,255,A42_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A43_map_data);
	set_bkg_data(0,255,A43_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A44_map_data);
	set_bkg_data(0,255,A44_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A45_map_data);
	set_bkg_data(0,255,A45_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A46_map_data);
	set_bkg_data(0,255,A46_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A47_map_data);
	set_bkg_data(0,255,A47_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A48_map_data);
	set_bkg_data(0,255,A48_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A49_map_data);
	set_bkg_data(0,255,A49_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A50_map_data);
	set_bkg_data(0,255,A50_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A51_map_data);
	set_bkg_data(0,255,A51_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A52_map_data);
	set_bkg_data(0,255,A52_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A53_map_data);
	set_bkg_data(0,255,A53_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A54_map_data);
	set_bkg_data(0,255,A54_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A55_map_data);
	set_bkg_data(0,255,A55_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A56_map_data);
	set_bkg_data(0,255,A56_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A57_map_data);
	set_bkg_data(0,255,A57_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A58_map_data);
	set_bkg_data(0,255,A58_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A59_map_data);
	set_bkg_data(0,255,A59_tile_data);

	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A60_map_data);
	set_bkg_data(0,255,A60_tile_data);
	delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A61_map_data);
	set_bkg_data(0,255,A61_tile_data);
delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A62_map_data);
	set_bkg_data(0,255,A62_tile_data);

delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A63_map_data);
	set_bkg_data(0,255,A63_tile_data);
delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A64_map_data);
	set_bkg_data(0,255,A64_tile_data);
delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A65_map_data);
	set_bkg_data(0,255,A65_tile_data);
delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A66_map_data);
	set_bkg_data(0,255,A66_tile_data);
delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A67_map_data);
	set_bkg_data(0,255,A67_tile_data);
delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A68_map_data);
	set_bkg_data(0,255,A68_tile_data);
delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A69_map_data);
	set_bkg_data(0,255,A69_tile_data);

delay(SCREEN_DELAY);
	// Load up the tile data
	set_bkg_tiles(0,1,20,16,A70_map_data);
	set_bkg_data(0,255,A70_tile_data);
delay(SCREEN_DELAY);
	// Show the background

	SHOW_BKG;
}
