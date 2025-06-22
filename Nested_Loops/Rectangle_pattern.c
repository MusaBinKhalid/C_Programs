#include <stdio.h>

int main(void)
{
    int rows, columns;

    printf("Enter Number of Rows: ");
    scanf("%d", &rows);

    printf("Enter Number of Columns: ");
    scanf("%d", &columns);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}