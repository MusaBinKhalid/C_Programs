#include<stdio.h>

int main()
{

    int a, b, temp;

    printf("Enter A: ");
    scanf("%d", &a);

    printf("Enter B: ");
    scanf("%d", &b);

    int * p = &a;
    int * q = &b;
    int * z = &temp;

    temp = * p;
    a =  * q;
    b = * z;

    printf("A is %d and B is %d", a, b);


    return 0;
}