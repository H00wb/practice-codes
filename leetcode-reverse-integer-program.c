int reverse(int x) {
   long result = 0,flag = 0;
   int max_int = 2147483647, min_int = -2147483648;
   
   while(x) // loop goes on until x is non-zero (a.k.a until it's true, so that's why only x is written here)(nonzero = logical true, zero = logical false in C)
   {
    flag = x % 10;
    result = result * 10 + flag; 
    x/=10;
   }

   if(result < min_int || result > max_int)
        return 0;

   return (int)result;
}

/* 
Imagine x is 34567
inside loop operation

iteration 1-)
flag -> 7
result = 0 * 10 + 7 -> 7
x/=10 -> x is now 3456

iteration 2-)
flag -> 6
result = 7 * 10 + 6 -> 70 + 6 = 76
x/=10 -> x is now 345

iteration 3-)
flag -> 5
result = 76 * 10 + 5 -> 760 + 5 = 765
x/=10 -> x is now 34

iteration 4-)
flag -> 4
result = 765 * 10 + 4 -> 7650 + 4 = 7654
x/=10 -> x is now 3

iteration 5-)
flag -> 3
result = 7654 * 10 + 3 -> 76540 + 3 = 76543
x/=10 -> x is now 0 and loop doesn't go further than that because loop runs until x is true (isn't equal to zero).

*/
