#include <stdio.h>

int main()
{
	int num1, num2, num3, temp;
	
	printf("Enter three numbers:\n");
	printf("Number1: ");
	scanf("%d", &num1);
	printf("Number2: ");
	scanf("%d", &num2);
	printf("Number3: ");
	scanf("%d", &num3);
	
	//Sorting the three numbers in ascending order
	if (num1>num2)
	{   temp=num1;
	    num1=num2;
	    num2=temp;
	}
	if (num2>num3)
	{   temp=num2;
	    num2=num3;
	    num3=temp;
	}
    if (num1>num2) 
    {   temp=num1;
        num1=num2;
        num2=temp;
	}
	
	printf("\nNumber in ascending order: %d, %d, %d\n",num1,num2,num3);
	return 0;   

}
   
	


