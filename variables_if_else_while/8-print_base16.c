#include <stdio.h>

/**
 *
 *
 */

int main(void)

{
    char ch = '0';

    while (ch <= '9')
    {
        putchar(ch);
        ch++;
    }
    char i = 'a';
    while (i <= 'f')
    {
        putchar(i);
        i++;
    }
    putchar('\n');
    return (0);
}