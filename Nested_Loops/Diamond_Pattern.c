#include <stdio.h>

int main(void)
{
    int n, i, j;

    printf("Enter Height of Diamond: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Enter an odd number: ");
        scanf("%d", &n);
    }

    int mid = n / 2;

    for (int i = 0; i <= mid; i++)
    {
        for (j = 0; j < mid - i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = mid - 1; i >= 0; i--)
    {
        for (j = 0; j < mid - i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}