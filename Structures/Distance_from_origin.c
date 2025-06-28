#include <stdio.h>
#include <math.h>

struct Point
{
    float x;
    float y;
};

float Distance(struct Point a);

int main(void)
{

    struct Point p;

    printf("Enter X Coordinate: ");
    scanf("%f", &p.x);

    printf("Enter Y Coordinate: ");
    scanf("%f", &p.y);

    float distance = Distance(p);
    printf("Distance from Origin is %.2f", distance);

    return 0;
}

float Distance(struct Point a)
{
    return sqrt(a.x * a.x + a.y * a.y);
}