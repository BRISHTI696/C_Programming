#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter first number: ");
	scanf("%d", &a);
	printf("enter second number: ");
	scanf("%d", &b);
	printf("before:\n %d\n %d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("after:\n %d\n %d\n",a,b);
	return 0;
}
