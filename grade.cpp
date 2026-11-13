#include<stdio.h>
int main()
{
	int marks,grade;
	printf("enter the marks: ");
	scanf("%d", &marks);
	if(marks>=90) {
		printf("the grade is A\n");
	}
	else if(marks>=75) {
		printf("the grade is B\n");
	}
	else if(marks>=50) {
		printf("the grade is C\n");
	}
	else
	printf("the student will considered as failed\n");
	return 0;
}
