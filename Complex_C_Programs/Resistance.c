#include <stdio.h>
#include <string.h>
char *COLOR[] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "gray", "white", "gold", "silver"};

int get_index(char *color);

int main(void)
{
    int DIGIT[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 1, 1};
    double MULTIPLIER[] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000, 1000000000, 0.1, 0.01};
    float TOLERANCE[] = {-1, 1, 2, -1, -1, 0.5, 0.25, 0.1, 0.05, -1, 5, 10, 20};

    char band1[10], band2[10], band3[10], band4[10];

    printf("**RESISTANCE CALCULATOR**\n");
    printf("\nEnter Color of Band 1: ");
    scanf(" %s", band1);
    printf("\nEnter Color of Band 2: ");
    scanf(" %s", band2);
    printf("\nEnter Color of Band 3: ");
    scanf(" %s", band3);
    printf("\nEnter Color of Band 4: ");
    scanf(" %s", band4);

    int index1 = get_index(band1);
    int index2 = get_index(band2);
    int index3 = get_index(band3);
    int index4 = get_index(band4);

    if (index1 == -1 || index2 == -1 || index3 == -1 || index4 == -1)
    {
        printf("Invalid color entered!\n");
        return 1;
    }

    int digit1 = DIGIT[index1];
    int digit2 = DIGIT[index2];
    double multiplier = MULTIPLIER[index3];
    float tolerance = TOLERANCE[index4];

    float resistance = ((10 * digit1) + digit2) * multiplier;
    float min_resistance = resistance - ((tolerance / 100.0) * resistance);
    float max_resistance = resistance + ((tolerance / 100.0) * resistance);

    printf("\nRESISTANCE = %.2f Ohms - %.2f Ohms", min_resistance, max_resistance);

    return 0;
}

int get_index(char *color)
{
    for (int i = 0; i < 13; i++)
    {
        if (strcmp(color, COLOR[i]) == 0)
        {
            return i;
        }
    }
    return -1;
}