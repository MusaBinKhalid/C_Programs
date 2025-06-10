#include<stdio.h>
int main(){


	float length;
	float breadth;
	float area;
	
	printf("Enter the Length: \n");
	scanf("%f", &length);
	
	printf("Enter the Breadth: \n");
	scanf("%f", &breadth);
	
	area = (length * breadth);
	printf("The area of the Rectangle is %f", area);
	

return 0;
}


