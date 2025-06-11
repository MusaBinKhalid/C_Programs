#include<stdio.h>
int main(){


	float length, breadth;
	float perimeter;
	
	printf("Enter Length: ");
	scanf("%f", &length);
	
	printf("\nEnter Breadth: ");
	scanf("%f", &breadth);

	perimeter = (2 * length) + (2 * breadth);

	printf("The Perimeter is %f", perimeter);

return 0;
}
