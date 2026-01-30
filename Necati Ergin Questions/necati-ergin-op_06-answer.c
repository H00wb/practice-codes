#include <stdio.h>

int main(void)
{
	int x = -3 + 4 * 5 - 6;

	//In this expression: 
	// Since - as negative value indication operator has precedence level of 2, (-3) is grouped like this.
	//(-3) + 4 * 5 - 6
	// multiplication operator * has precedence level of 3, + as summation and - as subtraction operators have precedence level of 4.
	// because expressions with higher level operators' return value will become operands of operators with lower precedence level, (4*5) will become a right side operand of + operator.
	// (-3) + (4*5) - 6		->		(-3) + (20) - 6 
	// Because operators with precedence level 4 has left associativity, whole expression is finally grouped like this:  (-3 + 20) - 6 -> 17 - 6 = 11.
	// x is initialized with 11.

	printf("%d\n", x); // 11 (x=11)

	x = 3 + 4 % 5 - 6;

	//In this expression:
	// expression (4 % 5) will become the right side operand of + operator because it has higher precedence level than + and - operators therefore it is grouped like that.
	// expression will turn to this after that: 3 + (4 % 5) - 6 ->		3 + 4 - 6
	// Because operators of level 4 has left associativity, whole expression is finally grouped like this: (3 + 4) - 6 -> 7 - 6 = 1
	// x has assigned 1 now.

	printf("%d\n", x); // 1 (x = 1)

	x = -3 * 4 % -6 / 5;
	
	//In this expression:
	// All operators except -(negative sign) operator have same level of precedence, - as sign operator has precedence level of 2, (-3) and (-6) is grouped like this.
	// but other than that since level 3 operators have left associativity, they're grouped from left to right.
	//  ((((-3) * 4) % (-6)) / 5) -> ((-12 % -6)/5) -> 0 / 5 -> 0
	// x = 0;

	printf("%d\n", x); // 0 ( x = 0)

	x = (7 + 6) % 5 / 2;
	//In this expression:
	// We manipulate the natural precedence grouping order with paranthesis precedence operator (). Therefore grouping order will be like this:
	// (((7+6)%5/2) -> ((13 % 5) / 2) -> 3 / 2 = 1
	// x = 1

	printf("%d\n", x); // 1 (x = 1)

	/*Overall Output:
	11
	1
	0
	1
	
	*/
}
