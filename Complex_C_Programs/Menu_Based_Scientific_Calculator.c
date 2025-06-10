#include <stdio.h>
#include <math.h>

int main()
{

	int A, B;
	float sum, diff, mul, div, pwr, root;
	int sign;

	printf("\n=== SCIENTIFIC CALCULATOR ===\n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("5. Power\n");
	printf("6. Square Root\n");
	printf("Enter your choice: ");
	scanf("%d", &sign);

	switch (sign)
	{
	case 1:
		printf("\nEnter Number A: ");
		scanf("%d", &A);

		printf("Enter Number B: ");
		scanf("%d", &B);
		printf("\n%d + %d = %d", A, B, A + B);
		break;

	case 2:
		printf("\nEnter Number A: ");
		scanf("%d", &A);

		printf("Enter Number B: ");
		scanf("%d", &B);
		printf("\n%d - %d = %d", A, B, A - B);
		break;

	case 3:
		printf("\nEnter Number A: ");
		scanf("%d", &A);

		printf("Enter Number B: ");
		scanf("%d", &B);
		printf("\n%d X %d = %d", A, B, A * B);
		break;

	case 4:
		printf("\nEnter Number A: ");
		scanf("%d", &A);

		printf("Enter Number B: ");
		scanf("%d", &B);
		printf("\n%d / %d = %.2f", A, B, (float)A / B);
		break;

	case 5:
		printf("\nEnter Number A: ");
		scanf("%d", &A);

		printf("Enter Power B: ");
		scanf("%d", &B);
		printf("\n%d ^ %d = %.0f", A, B, pow(A, B));
		break;

	case 6:
		printf("\nEnter Number A: ");
		scanf("%d", &A);

		printf("\nSquare Root of %d = %.2f", A, sqrt(A));
		break;

	default:
		printf("\nEnter a Valid Operator!");
	}

	return 0;
}