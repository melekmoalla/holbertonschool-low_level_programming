#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char *argv[])
{
    int fa, fb, a, b, z, d;
    char *c;

    if (argc != 3)
    {
        char *msg = "Usage: cp file_from file_to\n";
        int len = strlen(msg);
        write(STDERR_FILENO, msg, len);
        exit(97);
    }

    fa = open(argv[1], O_RDONLY, 600);
    if (fa == -1)
    {
        char *msg = "Error: Can't read from file NAME_OF_THE_FILE\n";
        int len = strlen(msg);
        write(STDERR_FILENO, msg, len);
        exit(98);
    }
    c = malloc(sizeof(char *) * fa);
    if (c == NULL)
    {
        return (0);
    }
    fb = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0600);
    if (fb == -1)
    {
        char *msg = "Error: Can't write to NAME_OF_THE_FILE\n";
        int len = strlen(msg);
        write(STDERR_FILENO, msg, len);
        exit(99);
    }
    z = read(fa, c, 1000);
    if (z == -1)
    {
        return (0);
    }
    d = write(fb, c, z);
    if (d == -1)
    {
        return (0);
    }
    a = close(fa);
    b = close(fb);
    if (a == -1 || b == -1)
    {
        char *msg = "Error: Can't close fd FD_VALUE\n";
        int len = strlen(msg);
        write(STDERR_FILENO, msg, len);
        exit(100);
    }
    return (0);
}