#include <stdio.h>

void makeArray(int length);

int main(void)
{

    int length;

    printf("Enter Array Length: ");
    scanf("%d", &length);

    makeArray(length);

    return 0;
}

void makeArray(int length)
{
    int num;
    int arr[length];
    for (int i = 0; i < length; i++)
    {
        printf("Enter Element number %d: ", i);
        scanf("%d", &num);
        arr[i] = num;
    }

    printf("\nARRAY:\n");

    printf("[");

    for (int j = 0; j < length; j++)
    {
        printf("%d", arr[j]);
        if (j == length - 1)
        {
            continue;
        }

        printf(", ");
    }

    printf("]");
}