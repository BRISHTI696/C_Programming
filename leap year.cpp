//w.c.p to check whether a given year leap year or not.
#include <stdio.h>
int main()
{
	int A;
	printf("Enter a year: ");
	scanf("%d", &A);
	if (A%4==0) {
		printf("\nThe year is a leap year");
	}
	else if(A%100==0) {
		printf("\nThe year is a leap year");
	}
	else if(A%400==0) {
		printf("\nThe year is a leap year");
	}
	else
	printf("\nThe year is not a leap year");
	return 0;
}
