#include<stdio.h>
int main()
{
	int n,temp,r,i,fact,sum=0;
	printf("enter a num: ");
	scanf("%d", &n);
	temp=n;
	while(n>0){
		r=n%10;
		fact=1;
		i=1;
		
		while(i<=r){
			fact=fact*1;
			i++;
		}
		sum=sum+fact;
		nn=n/10;
	}
	if(sum==temp)
	printf("Krishnamurti Number");
	else
	printf("Not krishnamurti number");
	return 0;
}
