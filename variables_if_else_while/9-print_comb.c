#include <stdio.h>
/**
 *
 *
 */

int main(void)
{
    int ch = '0';
    while (ch <= '9')
    {
        putchar(ch);
        ch++;
        putchar(',');
    }

    putchar('\n');
    return (0);
}