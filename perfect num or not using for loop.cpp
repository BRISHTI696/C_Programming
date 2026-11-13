#include<stdio.h>
int main()
{
	int n,i,s=0;
	printf("enter a num: ");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		if(n%i==0)
		s+=i;
	}
	if(s==n)
	printf("perfct num");
	else
	printf("not perfect num");
	return 0;
}
