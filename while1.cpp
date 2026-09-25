//wcp to display odd number from 1 to n
#include<stdio.h>
int main()
{
	int n,i=1;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("Odd numners from 1 to %d\n",n);
	while(i<=n){
		printf("%d\n",i);
		i=i+2;
	}
	return 0;
}
