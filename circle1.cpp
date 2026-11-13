#include <stdio.h>
int main()
{
	float radius, circumference,area;
	const float PI=3.14159;
	
	printf("Enter the radius of the circle:");
	scanf("%f",&radius);
	
	circumference=2*PI*radius;
	area=PI*radius*radius;
	
	printf("\nCircle calculation:\n");
	printf("Radius of the circle:%2f \n",radius);
	printf("Circumference of the circle:%2f \n",circumference);
	printf("Area of the circle:%2f \n",area);
	return 0;
		
}
   
	


