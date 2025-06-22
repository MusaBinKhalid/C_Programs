#include <stdio.h>

void meow(int n);  //function

int main(void)
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    meow(n);        //function call

    return 0;
}

void meow(int n)    //function declaration
{
    for (int i = 0; i < n; i++)
    {
        printf("Meow\n");
    }
}