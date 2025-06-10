#include <stdio.h>
int main()
{
	int a, i;

	printf("Enter a Number: ");
	scanf("%d", &a);

	for (i = a - 1; i > 1; i--)
	{
		a = a * i;
	}

	printf("Factorial: %d", a);
	return 0;
}
