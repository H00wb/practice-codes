#include <stdio.h>

int main()
{
int p = 5;
int *ptr = &p;
int **ptr1 = &ptr;
int ***ptr2 = &ptr1;
int ****ptr3 = &ptr2;
int *****ptr4 = &ptr3;
int ******ptr5 = &ptr4;
int *******ptr6 = &ptr5;
int ********ptr7 = &ptr6;
int *********ptr8 = &ptr7;
int **********ptr9 = &ptr8;
int ***********ptr10 = &ptr9;
int ************ptr11 = &ptr10;

// int *************ptr12 = &ptr11;  Cause of UB 

printf("%d",(************ptr11));
}
