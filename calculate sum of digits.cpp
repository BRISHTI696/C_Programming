#include<stdio.h>
int main()
{
	int digit,num,sum=0;
	printf("enter the whole num: ");
	scanf("%d",&num);
	while(num!=0){
		digit=num%10;
		num=num/10;
		sum=sum+digit;
	}
	printf("sum of the digit are:%d",sum);
	return 0;
}
