#include<stdio.h>
int main()
{
	float c,f;
	printf("farenheit= ");
	scanf("%f", &f);
	c=(f-32)*5/9;
	printf("celcius=%.f",c);
	return 0;
}
