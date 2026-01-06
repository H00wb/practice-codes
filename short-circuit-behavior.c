#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	/*
	In logical operators, there is a special behavior in C and C++ is called "Short Circuit Behavior".
	This behavior is explained like this:
	
	In Logical AND (&&); if the left operand is logically false(0), 
	the right operand doesn't evaluated logically( and numerically if right operand is an expression that has a side effect),
	and automatically whole Logical AND expression is evaluated as 0.


	In Logical OR (||); if the left operand of this operator is logically true(1), 
	the right operand doesn't evaluated logically( and numerically if right operand is an expression that has a side effect),
	and automatically whole Logical OR expression is evaluated as 1.
	*/

	int x = 0, y=15;

	int z = x && ++y; // z and y are evaluated as z-> 0, y-> 15 and y is not incremented because due to
	// Logical AND's(x && ++y) left operand(x) is evaluated as 0(false), the right operand(++y) hasn't been evaluated and expression has been skipped completely.

	printf("%d %d\n", z, y); // Evaluated as " 0 15 "

	x = 5; // x is currently assigned a non-zero value.

	z = x || ++y;  // z and y are evaluated as z-> 1, y -> 15 and y is not incremented because due to
	// Logical OR's (x || ++y) left operand is evaluated as 1(true), the right operand(++y) hasn't been evaluated and expression has been skipped completely.

	printf("%d %d\n", z, y); // Evaluated as " 1 15 "

}
