#include<stdio.h>

int MULTIPLY(int a, int b)
{
    printf("\nSUM = %d", a * b);
}

int main(void)
{

    int x, y; 

    printf("Enter Number X: ");
    scanf("%d", &x);

    printf("Enter Number Y: ");
    scanf("%d", &y);

    MULTIPLY(x,y);

    return 0;
}















