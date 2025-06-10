#include <stdio.h>

int main()
{

    int num, count = 0, sum = 0;
    float avg;

    printf("Enter a Number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        count++;
        sum = sum + num;
        printf("Enter a Number: ");
        scanf("%d", &num);
    }

    if (count == 0)
    {
        printf("The Average is 0");
    }
    else
    {
        avg = sum / count;
        printf("The Average is %.2f", avg);
    }

    return 0;
}
