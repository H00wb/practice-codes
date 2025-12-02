// Call by value vs call by reference practice


#include <stdio.h>

void foo(int x){
    printf("Call by value\n");
    x = 9999;
}

void func(int* x) 
// in "int x" at foo and "int* x" at func, both identifiers x are translated into (different)addresses in assembly when code is compiled,
// so it is valid to name functions' parameters with same identifiers
{
    printf("Call by reference\n");
    *x = 9999;
}

int main()
{
    int a = 10;
    printf("%d\n\n",a); // original value of a
    
    foo(a); 
    printf("%d\n\n",a); 
    // value of "a" is copied inside foo, but normally, "a" hasn't changed. 
    //This line of function call is same as "foo(10);" because it doesn't change the original value of argument passed to function call.
    
    printf("%d\n",a); 
    func(&a);
    printf("%d\n\n",a);
    //We're sending the "address of a", which means directly accessing the object of a and it's content.
    //We can directly change the original value of argument passed to function call with "calling by reference"
    
    
 
}
