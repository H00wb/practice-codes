#include <stdio.h>

int main(void)
{
	int x = 2, y, z; // x is initialized with 2, objects y and z are declared only.

	x *= 3 + 2; // x *= 5 -> x = 5 * 2 -> x = 10
	printf("%d\n", x); // 10

	x *= y = z = 4; 
	// x*=(y=(z=4)))
	// expression (z=4) returns 4 after it assigns 4 to object z because assignment operators returns what value they've been assigned to an object to.
	// after that expression turns into this :  x*=(y=4)
	// expression (y=4) returns 4 after it assigns 4 to object y.
	// after that expression turns into this :  x*=4
	// x = 10 * 4 = 40; x = 40;
	printf("%d\n", x); // 40
	// so far :    x = 40, y = 4, z = 4

	x = y == z; 
	// == operator has the precedence level of 7, therefore expression (y == z) becomes an operand of "=" , (x = (y == z)) 
	// y is equal to z, therefore expression (y == z) returns logical true(1)
	// whole expression becomes "x = 1" and 1 is assigned to object x.
	printf("%d\n", x); // 1

	x == (y = z); 
	// because of paranthesis precedence operator, (y = z)(let's call it v1) expression becomes an operand of == operator. 
	// Normally it would have been vice versa, but because of paranthesis operator, we manipulate the default precedence grouping order.
	// (y = 4) expression returns value 4 because assignment operators returns what value they've been assigned to an object to.
	// Whole expression turns into  x == v1  -> 1 == 4  is false therefore returns 0 (logical false)
	//This changes nothing for x btw, because == is not an assignment operator, it's an operator which checks logical equity which dpesn't have any side effect.
	//Return value of this expression is discarded since this whole expression isn't attached to an operator which has side effect.
	printf("%d\n", x); // 1

	/*
	Overall output:

	10
	40
	1
	1
	
	*/
}
