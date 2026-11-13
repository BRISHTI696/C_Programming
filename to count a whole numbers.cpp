#include<stdio.h>
int main()
{
	int num,digit,count=0;
	printf("enter the whole num to count: ");
	scanf("%d",&num);
	while(num!=0){
		digit=num%10;
		printf("%d\n",digit);
		count++;
		num=num/10;
	}
	printf("count of the whole num is:%d",count);
	return 0;
}
