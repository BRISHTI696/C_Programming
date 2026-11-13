#include<stdio.h>
int main()
{
	int n,i=1;
	double fact=1.0, sum=0.0;
	printf("enter the num of terms: ");
	scanf("%d", &n);
	while(i<=n)
	{
		fact*=i;
		sum+=fact/(2.0*i);
		i++;
	}
	printf("sum=%.2f\n",sum);
	return 0;
}
