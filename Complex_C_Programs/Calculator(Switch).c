#include<stdio.h>
int main(){

	int a, b;
	float sum,diff,mul,div;
	char sign;
	
	printf("Enter A: ");
	scanf("%d", &a);
	
	printf("Enter B: ");
	scanf("%d", &b);
	
	printf("Enter Operator: (+)(-)(*)(/)\n");
	scanf(" %c", &sign);
	
	sum = a + b;
	diff = a - b;
	mul = a * b;
	div = a / b;
	
	switch(sign)
{
	case '+':
		printf("A + B = %.2f", sum);
	break;
		
	case '-':
		printf("A - B = %.2f", diff);
	break;
		
	case '*':
		printf("A X B = %.2f", mul);
	break;
		
	case '/':
		printf("A / B = %.2f", div);
	break;
	
	default:
		printf("Enter a Valid Operator!");	
}	

return 0;
}

