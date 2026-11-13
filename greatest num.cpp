#include<stdio.h>
int main()
{
	int a,b,c,temp;
	printf("First num:");
	scanf("%d", &a);
	printf("Second num:");
	scanf("%d", &b);
	printf("Third num:");
	scanf("%d", &c);
	if(a>b) {
		temp=a;
		a=b;
		b=temp;
	}
	if(b>c) {
		temp=b;
		b=c;
		c=temp;
	}
	else{
		temp=a;
		a=c;
		c=a;
	}
	printf("\nThe greatest number is:%d");
	return 0;
}
