#include<stdio.h>
int main(){


	float radius;
	float area;
	
	printf("Enter the Radius: \n");
	scanf("%f", &radius);
	
	area = (3.14 * radius * radius);
	printf("The Area of the Circle is %f", area);
	

return 0;
}


