#include<stdio.h>

int main(){

	int a, b;
	float sum,diff,mul,div;
	char sign;
	
	printf("Enter A: ");
	scanf("%d", &a);
	
	printf("Enter B: ");
	scanf("%d", &b);
	
	printf("Enter Operator (+)(-)(*)(/): ");
	scanf(" %c", &sign);    //" %c" (The space is used before %c in order to discard any whitespace character)
	
	sum = a + b;
	diff = a - b;
	mul = a * b;
	div = a / b;
	
	if(sign == '+'){
		printf("A + B = %.2f", sum);
	}
	
	else if(sign == '-'){
		printf("A - B = %.2f", diff);
	}

	else if(sign == '*'){
		printf("A X B = %.2f", mul);
	}
	
	else if(sign == '/'){
		printf("A / B = %.2f", div);
	}

return 0;
}


