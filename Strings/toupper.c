#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    int n;
    char name[100];
    printf("Enter Name: ");
    scanf("%s", name);
    n = strlen(name);

    printf("UpperCase: ");

    for (int i = 0; i < n; i++)
    {
        printf("%c", toupper(name[i]));
    }

    return 0;
}