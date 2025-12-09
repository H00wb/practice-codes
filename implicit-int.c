#include <stdio.h>

void foo()
{
	printf("Foo printed\n");
}

void func(void)
{
	printf("Func printed\n");
}

int main(void) // In C, while defining main function, adding void keyword as a parameter is considered as a good practice. But in C++ we don't need it because C++ does not have implicit int.
{
	// foo(1); This line of code is legal because of C's old implicit int feature. But legality != morality.
	// If we want to declare a function without a parameter in C,
	// we use void keyword between parameter pharanthesis to eliminate the possibility of implicit int.
	foo();

	func();
	//func(1); This line of code is illegal and helper program of IDE will show error because
	// we used void keyword between parameter pharanthesis in function definition 
	// to eliminate the possibility of implicit int.
}
