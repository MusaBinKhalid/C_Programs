#include <stdio.h>

int main(void)
{
    int a, temp, b, c = 0;

    printf("Enter Number: ");
    scanf("%d", &a);

    temp = a; 

    while (a != 0)
    {
        b = a % 10;
        c = c + (b * b * b);
        a = a / 10;
    }

    if (temp == c)
    {
        printf("It is an Armstrong Number!\n");
    }
    else
    {
        printf("It is Not an Armstrong Number!\n");
    }

    return 0;
}
