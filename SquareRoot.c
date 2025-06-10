#include<stdio.h>
#include<math.h>
int main(){

	float a; 
	float s;
	
	printf("Enter a Number: ");
	scanf("%f", &a);
	
	s = sqrt(a);
	
	printf("The square root of %.2f is %.2f \n", a, s);
	
return 0;
}

