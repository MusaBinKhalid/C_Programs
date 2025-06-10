#include <stdio.h>
#include <string.h>

int main(void)
{

    char name[100];

    char names[4][20] = {"Matthew", "Bruce", "Frank", "Steve"};
    char numbers[4][20] = {"123-456-7890", "910-419-2006", "911-417-2611", "126-655-6005"};

    printf("Enter Name: ");
    scanf("%s", name);

    for (int i = 0; i < 4; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Found: %s\n", numbers[i]);
            return 0;
        }
    }

    printf("Not Found!");

    return 1;
}