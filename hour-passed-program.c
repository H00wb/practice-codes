#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int day, hour, minute, second;
	printf("Enter how much day, hour, minute and second passed: ");
	scanf("%d%d%d%d", &day, &hour, &minute, &second);

	// sample input = 2 124 242 121

	minute += second / 60;// (minute = minute + second / 60 -> minute = minute + (121 / 60) -> 242 + 2 -> minute = 244 )
	second %= 60; //(second = second % 60  -> 121 % 60 -> 1 kalan.  second = 1)
	hour += minute / 60; // (hour = hour + (minute / 60) -> 124 + (244/60) -> 124 + 4 = 128)
	minute %= 60; // (minute = minute % 60 -> 244 % 60 -> 4 kalan. )
	
	// so far: second -> 1, hour-> 128, minute ->4	
	
	day += hour / 24; //(day = day + (hour/24) -> 2 + (128/24) -> 2 + 5 = 7 , day = 7)
	hour %= 24; //(hour = hour % 24 -> 128 % 24 -> hour = 8)

	// Output based on sample input: day = 7, hour = 8, minute = 4, second = 1

	printf("%02d days %02d hours %02d minutes and %02d seconds passed", day, hour, minute, second);
}
