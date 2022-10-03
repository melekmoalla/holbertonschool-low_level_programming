#include <stdio.h>

/**
 *
 *
 */

int main(void)

{
    char ch = '0';
    char i = 'a';

    while (ch <= '9')
    {
        putchar(ch);
        ch++;
    }
    while (i <= 'f')
    {
        putchar(i);
        i++;
    }
    putchar('\n');
    return (0);
}