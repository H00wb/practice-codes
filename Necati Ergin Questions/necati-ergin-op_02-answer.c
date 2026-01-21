#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 10;
	int y = 20;

	// x and y variables are initialized as 10 and 20 both respectively.

	int a = x+++y; // Due to maximal munch rule, compiler differentiate operators as  "x ++  + y ;"  and identifier 
	// a is initialized as 10 + 20 = 30 (due to post increment shows object's original value before incrementation)

	printf("%d\n", -x + y + a);  // -(11)(x is incremented while initializing a) + 20 + 30 = 39
}
