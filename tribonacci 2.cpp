#include<stdio.h>
int main()
{
	int a=0,b=1,c=1,d,n,i;
	printf("enter the terms: ");
	scanf("%d",&n);
	printf("tribonacci series:\t");
	while(i<=n){
		d=a+b+c;
		a=b;
		b=c;
		c=d;
		i++;
	}
}
