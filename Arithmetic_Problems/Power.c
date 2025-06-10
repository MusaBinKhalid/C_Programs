#include<stdio.h>
#include<math.h>

int main(){

	float a;
	int b;
	float power;
	
	printf("Enter a Number: ");
	scanf("%f", &a);
	
	printf("Enter the power: ");
	scanf("%d", &b);
	
	power = pow(a, b);
	
	printf("%f raised to power %d is %f", a, b, power);
	

return 0;
}

