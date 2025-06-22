#include<stdio.h>

int ADD(int a, int b);

int main(void)
{

    int x, y; 

    printf("Enter Number X: ");
    scanf("%d", &x);

    printf("Enter Number Y: ");
    scanf("%d", &y);



    printf("%d", x + y);
    
    return 0;
}

int ADD(int a, int b)
{
    printf("\nSUM = %d", a + b);
}