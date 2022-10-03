#include <stdio.h>
/**
 * main - print the num with " ,"
 * Return: 0
 */

int main(void)
{
    int ch = '0';

    while (ch <= '9')
    {
        if (ch != '9')
        {
            putchar(ch);
            putchar(',');
            putchar(' ');
            ch++;
        }
        else
        {
            putchar(ch);
            (ch++ + ('\n'));
        }
    }
    return (0);
}