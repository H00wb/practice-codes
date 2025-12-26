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
	printf("%lf",pow(2, 16)); // 65536 is the limit

	/*
	'A' -> (65) int
	32767 -> int
	32768 -> int
	50000 -> int
	0x7000 -> (28672) int
	0xFFFF -> (65535) int on the limit
	50000U -> unsigned int
	10000U -> unsigned int
	'\x1A' -> (26) int
	
	*/
}
