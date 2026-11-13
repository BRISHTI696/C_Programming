#include<stdio.h>
int main()
{
	int n,i=1,s=0;
	printf("enter a num: ");
	scanf("%d", &n);
	while(i<n){
		if(n%i==0)
		s+=i;
		i++;
	}
	if(s==n)
	printf("perfect num");
	else
	printf("not perfect num");
	return 0;
}
