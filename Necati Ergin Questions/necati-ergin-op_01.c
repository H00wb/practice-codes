#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 1; //x is initialized with 1
	int y = -1; // y is intitialized with -1
	int z = !--x - !++y;    

	/*
	In this statement above, subexpression consists x (!--x) is gonna grouped like this while evaluation due to right associativity of two operators with same precedence -> (!(--x))
	Therefore evaluated as (!(0)) -> 1			and x is exposed to a side effect(value changed from its original value) its value is changed as 0

	The subexpression consisting y (!++y) is gonna grouped like this while evaluation due to right associativity of 2 operators with same precedence -> (!(++y))
	Therefore evaluated as (!(0)) -> 1			and y is exposed to a side effect(value changed from its original value) its value is changed as 0

	Overall z is evaluated as 1 - 1 = 0 and all variables have these values  x = 0, y = 0, z = 0

	*/
	z += x += y;


	/*
	The statement above is grouped like this due to the right associativity of assignment operators -> (z += (x+=y))   
	
	(z += (x+=0)) = (z+=(0+= 0 -> 0))
	(z+=0) =  (0+=0 -> 0)
	x = 0, y=0, z= 0  // stays the same, all values are equal to 0.

	Output = 000

	*/

	printf("%d%d%d", x, y, z);
}
