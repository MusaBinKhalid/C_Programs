#include <stdio.h>

int main(void)
{

    int len, num, index = 0, index2 = 0;

    printf("Enter Array Length: ");
    scanf("%d", &len);
    int arr[len];

    for (int i = 0; i < len; i++)
    {
        printf("Enter Element number %d: ", i);
        scanf("%d", &num);
        arr[i] = num;
    }

    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < len; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            index = i;
        }
        if (arr[i] > max)
        {
            max = arr[i];
            index2 = i;
        }
    }

    printf("\nSmallest Element: %d\nIndex: %d\n\nLargest Element: %d\nIndex: %d", min, index, max, index2);

    return 0;
}