#include <stdio.h>

int main(void)
{
	int x, y, z;

	x = 2, y = 1, z = 0;
	x = x && y || z; 
	// Operators will be grouped like this due to operator precedence 
	// (|| has level 11, and && has level 12, therefore expression expression with || should be the operand of &&)
	// this expression is gonna grouped like this : "x && (y || z)"
	// and in this (y || z) expression because y is non-zero (1) therefore it's logically true(1), the right operand doesn't get evaluated because of short circuit behavior.
	//This expression produces logical true -> 1 (let's call it d1)

	// In second expression x && d1(1), because x is non-zero(2), left operand of && is logical 1(true). Therefore 1 && 1  produces the logical value of 1(true)
	// Basically d1 = 1,  x && d1 -> 2(logically evaluated as true(1)) && 1  -> 1 && 1 -> logically true(1). x = 1;

	printf("%d\n", x); // 1  
	// (x=1)

	printf("%d\n", x || !y && z); // 1
	//In this expression, because of x = 1, right operand of logical or operator (||) doesn't get evaluated due to short circuit behavior.
	// And printf, prints only  1

	x = y = 1; 
	// Assignment operators have right associativity in an expression. Therefore this expression is grouped like this in compile time: x = (y=1, let's call it val1)
	// Since assignment operators returns which value they assigned to an object, after assigning 1 to y, x = val1(x = 1)
	// x is assigned 1, y is assigned 1 after this expression.
	// x = 1, y=1

	z = x++ - 1; 
	// "x++" expression is a postfix increment. If it's used it returns x's original value but it does the incrementation after. 
	// z = 1 - 1 = 0  -> z = 0;
	// so far, x = 2(incremented after assignment of z), y = 1, z = 0;
	
	printf("%d\n", x); // 2
	printf("%d\n", z); // 0

	z += -x++ + ++y; 
	// - and ++ operators have the same precedence and their level of precedence have right associativity. Therefore this expression -x++ grouped like this: (-(x++)) 
	// z += -(x++) + ++y
	// z += -2(postfix increment) + 2 -> z+= 0 -> z = 0, 0+0 = 0, still z=0 remains.
	// due to postfix increment x becomes 3 after adding 0 to object z.
	printf("%d\n", x); // 3
	printf("%d\n", z); // 0

	return 0; 

	/*
	Overall output:

	1
	1
	2
	0
	3
	0

	*/
}
