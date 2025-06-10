#include <stdio.h>

int main(void)
{
    int n, a = 0, b = 1, x;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a);
        x = a + b;
        a = b;
        b = x;
    }

    return 0;
}
