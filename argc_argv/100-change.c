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
    int cents;
    int quarters, dimes, nickels, pennies, coins;

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

    quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    coins = quarters + dimes + nickels + pennies;
    printf("%d\n", coins);

    return (0);
}

int calculate_quarters(int cents)
{
    int quarters;

    if (cents >= 25)
    {
        quarters = cents / 25;
    }
    else
    {
        quarters = 0;
    }

    return quarters;
}

int calculate_dimes(int cents)
{
    int dimes;
    if (cents >= 10)
    {
        dimes = cents / 10;
    }
    else
    {
        dimes = 0;
    }

    return dimes;
}

int calculate_nickels(int cents)
{
    int nickels;
    if (cents >= 5)
    {
        nickels = cents / 5;
    }
    else
    {
        nickels = 0;
    }

    return nickels;
}

int calculate_pennies(int cents)
{
    {
        int pennies;
        if (cents >= 1)
        {
            pennies = cents;
        }
        else
        {
            pennies = 0;
        }

        return pennies;
    }
}