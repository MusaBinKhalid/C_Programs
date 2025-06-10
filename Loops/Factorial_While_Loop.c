#include <stdio.h>
int main()
{
	int a;  
    int fact = 1;

	printf("Enter a Number: ");
	scanf("%d", &a);                 

	while (a > 1)               
	{
        fact = fact * a;         
		a = a - 1;                 
	}

	printf("Factorial: %d", fact);
	return 0;
}