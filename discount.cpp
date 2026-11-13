#include<stdio.h>
int main()
{
	int amt,netpay,discount;
	printf("Enter the purchase amount=",amt);
	scanf("%d", &amt);
	nif(amt>=10000) {
		discount=amt*10/100;
	}
	else {
		discount=amt*5/100;
	}
	netpay=amt-discount;
	printf("Discount=%d\n",discount);
	printf("Net payable amount=%d\n",netpay);
	return 0;	
}
