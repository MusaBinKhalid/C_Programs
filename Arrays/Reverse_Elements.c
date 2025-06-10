#include <stdio.h>

int main()
{

    int len, i, num, j;

    printf("Enter Array Length: ");
    scanf("%d", &len);
    int arr[len];

    for (i = 0; i < len; i++)
    {
        printf("Enter Element number %d: ", i);
        scanf("%d", &num);
        arr[i] = num;
    }

    printf("\nARRAY:\n");
    printf("[");

    for (j = len - 1; j >= 0; j--)
    {
        printf("%d,", arr[j]);
    }

    printf("]");

    return 0;
}