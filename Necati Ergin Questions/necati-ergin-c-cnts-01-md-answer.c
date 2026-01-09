#include <stdio.h>
#include <math.h>
 
int main(void)
{

// int türünün 2 byte long türünün 4 byte olduğu bir derleyicide aşağıdaki sabitlerin türünü yazınız:
/* 'A'
32767
32768
50000
0x7000
0xFFFF
50000U
10000U
'\x1A'
*/
	// 2 byte = 16 bits, 4 byte = 32 bits
	// maximum limit calculation is done by 2^(bit count) 2^16 = 65536

	
	// if int is a signed int (which is the current scenario),
	// it is distributed between [ -(2^(n-1)) ] and [ (2^(n-1)) - 1 ] 
	// -> [-(2^15) , (2^15) - 1 ] -> [-32768 , 32767] 
	
	// if int is an unsigned int, it is distributed between 0 and [2^(n) - 1] -> [0 , ((2^16) - 1)] -> [0,65535]

	/*
	'A' -> (65) int
	32767 -> int
	32768 -> long
	50000 -> long
	0x7000 -> (28672) int
	0xFFFF -> (65535) long
	50000U -> unsigned int
	10000U -> unsigned int
	'\x1A' -> (26) int
	
	*/
}
