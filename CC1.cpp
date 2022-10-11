#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

void binary(unsigned int a){
    unsigned int b, d, c[36] = { 0 };
    int i;
    i = 0;
    printf("Enter the decimal number:");
    scanf_s("%u", &a);
    d = a;
    while (a != 0)
    {
        b = a % 2;
        a = a / 2;
        c[i] = b;
        i++;
    }
    printf("\nBinary= ");
    for (i = i - 1; i >= 0; i--)
        printf("%d", c[i]);
    printf("\n");
}
void octal(unsigned int a){
    unsigned int b, d, c[36] = { 0 };
    int i;
    i = 0;
    printf("Enter the decimal number:");
    scanf_s("%u", &a);
    d = a;
    while (a != 0)
    {
        b = a % 8;
        a = a / 8;
        c[i] = b;
        i++;
    }
    printf("\nOctal= ");
    for (i = i - 1; i >= 0; i--)
        printf("%d", c[i]);
    printf("\n");
}
void hex(unsigned int a) {
    unsigned int  b, d;
    int i, j = 0;
    char c[100];
    printf("Enter decimal number: ");
    scanf_s("%ld", &a);
    d = a;
    while (a != 0)
    {
        b = a % 16;
        if (b < 10)
            c[j++] = 48 + b;
        else
            c[j++] = 55 + b;
        a = a / 16;
    }
    printf("\nHex= ");
    for (i = j; i >= 0; i--)
        printf("%c", c[i]);
    printf("\n");
}

int main()
{
    time_t t = time(NULL);
    printf("Current date and time is : %s\n", ctime(&t));
    Sleep(1000);
    unsigned int a{},c[36] = { 0 };
    int i,o;
    i = 0;
    printf("Decimal converter by Dragos\n\n");
    printf("Version 0.01\n\n");
    printf("Loading...\n\n");
    Sleep(5000);
    printf("1-Binary 2-Octal 3-Hex\n\n");
    printf("Choose: ");
    scanf_s("%d", &o);
    printf("\n");
    switch (o)
    {
    case 1:
        printf("Loading...\n\n");
        Sleep(2000);
        binary(a);
        break;
    case 2:
        printf("Loading...\n\n");
        Sleep(2000);
        octal(a);
        break;
    case 3:
        printf("Loading...\n\n");
        Sleep(2000);
        hex(a);
        break;
    default:printf("Wrong choice.");
        break;
    }while (o != 3);
    
    return 0;
}