#include <stdio.h>
/**
 * main - main print all lower character and all lowercase
 *
 * Return: 0
 */
int main(void)
{
    char ch = 'a';
    char be = 'A';
    while (ch <= 'z')
    {
        putchar(ch);
        ch++;
    }
    while (be <= 'Z')
    {
        putchar(be);
        be++;
    }
    putchar("\n");
    
    return 0;
}
