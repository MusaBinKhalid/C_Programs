#include <stdio.h>

char *slice(char str[], int m, int n);

int main(void)
{
    int x, y;
    char string[100];

    printf("Enter String: ");
    fgets(string, sizeof(string), stdin);

    printf("\n\n***String Slicer***\n\n");

    printf("Enter Starting Point: ");
    scanf("%d", &x);

    printf("\nEnter Ending Point: ");
    scanf("%d", &y);

    printf("\n%s", slice(string, x, y));

    return 0;
}

char *slice(char str[], int m, int n)
{
    char *p1 = &str[m];
    char *p2 = &str[n];

    str = p1;
    str[n] = '\0';
    return str;
}