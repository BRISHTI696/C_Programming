#include<stdio.h>
int main()
{
	int n,i=1,a=0,b=0,c=1,d;
	printf("enter the num of terms: ");
	scanf("%d", &n);
	printf("tibonacci series: ");
	while(i<=n){
		printf("%d",a);
		d=a+b+c;
		a=b;
		b=c;
		c=d;
		i++;
	}
	return 0;	
}
