#include <stdio.h>

int main()
{

    int len, num;

    printf("Enter Array Length: ");
    scanf("%d", &len);
    int arr[len];

    for (int i = 0; i < len; i++)
    {
        printf("Enter Element number %d: ", i);
        scanf("%d", &num);
        arr[i] = num;
    }

    printf("\nARRAY:\n");

    printf("[");

    for (int j = 0; j < len; j++)
    {
        printf("%d", arr[j]);
        if (j == len - 1)
        {
            continue;
        }
        
        printf(", ");
        
    }

    printf("]");

    return 0;
}
