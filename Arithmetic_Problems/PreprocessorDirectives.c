#include<stdio.h>
#define PI 3.14
#define AREA(r) (PI * r * r)

#define DEBUG

int main(){

	float radius, area;
	
	printf("Enter the Radius: \n");
	scanf("%f", &radius);
	
	area = AREA(radius);
	
	printf("The Area of the Circle is %f", area);
	
return 0;
}

