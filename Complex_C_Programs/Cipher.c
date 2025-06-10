#include <stdio.h>

char *encrypt(char msg[]);
char *decrypt(char msg[]);

int main()
{
    int choice;
    char message[100];

    printf("***CIPHER***");
    while (1)
    {
        printf("\n\n1. Encrypt\n2. Decrypt\n\nEnter Your Choice: ");
        scanf("%d", &choice);
        getchar();

        if (choice == 1)
        {
            printf("\n\nEnter Message:\n");
            fgets(message, sizeof(message), stdin);
            encrypt(message);
            printf("Encrypted Message:\n%s", message);
        }

        else if (choice == 2)
        {
            printf("\n\nEnter Message:\n");
            fgets(message, sizeof(message), stdin);
            decrypt(message);
            printf("Decrypted Message:\n%s", message);
        }

        else
        {
            printf("Enter a Valid Choice!");
        }
    }

    printf("\n\n");

    return 0;
}

char *encrypt(char msg[])
{
    for (int i = 0; msg[i] != '\0'; i++)
    {
        if (msg[i] != '\n')
        {
            msg[i] += 7;
        }
    }
}

char *decrypt(char msg[])
{
    for (int i = 0; msg[i] != '\0'; i++)
    {
        if (msg[i] != '\n')
        {
            msg[i] -= 7;
        }
    }
}