#include<stdio.h>
int main()
{
	int P,R,T,SI;
	printf("principle=",P);
	scanf("%d", &P);
	printf("rate=",R);
	scanf("%d", &R);
	printf("time=",T);
	scanf("%d", &T);
	SI=P*R*T/100;
	printf("Simple interest=%d",SI);
	return 0;
}
