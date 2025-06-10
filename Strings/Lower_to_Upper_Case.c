#include <stdio.h>
#include <string.h>

void lower_to_upper(char *str);

int main(void)
{
    char name[100];

    printf("Enter Name: ");
    scanf("%s", name);

    lower_to_upper(name);

    printf("Uppercase: %s\n", name);

    return 0;
}

void lower_to_upper(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= ('a' - 'A');
        }
    }
}