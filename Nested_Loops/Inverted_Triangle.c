#include <stdio.h>

int main(void)
{
    int height;

    printf("Enter Height of Triangle: ");
    scanf("%d", &height);

    for (int i = height; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}