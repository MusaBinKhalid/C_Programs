#include<stdio.h>
int main(){


	float radius;
	float circumference;
	
	printf("Enter the Radius: \n");
	scanf("%f", &radius);
	
	circumference = (2 * 3.14 * radius);
	printf("The Circumference of the Circle is %f", circumference);
	

return 0;
}


