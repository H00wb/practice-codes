#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	//printf stands for "print format" which is a member of standard library's <stdio.h> module, that prints the given formatted output (provided to its char array parameter) into the standard output stream.(which is our console by default)
	
	//scanf stands for "scan format" which is a member of standard library's <stdio.h> module, that reads input buffer, 
	// extracts characters that suits its given format specifier(provided to its char array parameter) and sets these characters into the addresses of variables provided by programmer.

	//E.G -> input buffer: 45a84opdef652123  scanf call by(assume x is int) -> scanf("%d",&x);   
	// scanf reads buffer, extracts 45 like this|45|a84opdef652123, because it sees "a" as an incompatible character for decimal and stops extracting and takes 45 as a value for x. (x = 45)
	
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
