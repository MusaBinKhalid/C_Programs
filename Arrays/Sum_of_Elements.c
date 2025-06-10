#include <stdio.h>

int main()
{

    int len, i, num, j, sum = 0;

    printf("Enter Array Length: ");
    scanf("%d", &len);
    int arr[len];

    for (i = 0; i < len; i++)
    {
        printf("Enter Element number %d: ", i);
        scanf("%d", &num);
        arr[i] = num;
        sum = sum + arr[i];
    }

    printf("Sum is: %d", sum);

    return 0;
}