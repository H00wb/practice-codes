#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int x;

	printf("%d\n", scanf("%d", &x)); // scanf as a function, returns the number of variables it has been set. In this line it returns "1".
	
	// Also, in this scenario scanf is triggered first because in nested function calls, 
	//the function which is in the bottom of this nested structure is evaluated first.
	// therefore, by compiler's perspective the triggering order is:  scanf -> printf

	printf("%d\n", x);

	printf("\n%d", printf("%d", x)); // printf as a function, returns the number of characters it has been printed on the screen.
	
	//Also in this scenario first printf is triggered first because in nested function calls,
	//the function which is in the bottom of this nested structure is evaluated first.
	// therefore, by compiler's perspective the triggering order is : printf("%d\n", x) -> printf("%d\n", *firstprintffunction* )


	//input : 5
	//output : 1 (variable set by scanf)
	//			   5 (value of x)
	//			   5 (value of x)
	//			   1 (character printed)
}
