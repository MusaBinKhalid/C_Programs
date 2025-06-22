#include <stdio.h>

void FACT(int x);

int main(void)
{
	int a;

	printf("Enter a Number: ");
	scanf("%d", &a);

    FACT(a);

	return 0;
}

void FACT(int x)
{
    for (int i = x - 1; i > 1; i--)
	{
		x = x * i;
	}

	printf("Factorial: %d", x);
}