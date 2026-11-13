#include <stdio.h>
int main()
{
	float b_sal,HRA,DA,tax,n_sal;
	printf("Enetr the basic salary: ");
	scanf("%f", &b_sal);
	HRA=("b_sal*0.10");
	DA=("b_sal*0.05");
	if (b_sal>=20000)
	{
		tax=(b_sal*0.01);
	}
	else
	tax=(b_sal*0.07);
	n_sal=(b_sal+HRA+DA-tax);
	printf("Basic salary is: =%2f\n",b_sal);
	printf("HRA is: =%2f\n",HRA);
	printf("DA is: =%2f\n",DA);
	printf("Net salary is: =%2f",n_sal);
	return 0;
}
