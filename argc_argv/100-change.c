#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(int argc, char *argv[])
{
    int cents, rest = 0;

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }
    cents = atoi(argv[1]);

    if (cents < 0)
    {
        printf("0\n");
        return (0);
    }

    rest += cents / 25;
    cents %= 25;
    rest += cents / 10;
    cents %= 10;
    rest += cents / 5;
    cents %= 5;
    rest += cents / 2;
    cents %= 2;

    printf("%d\n", rest + cents);
    return (0);
}
