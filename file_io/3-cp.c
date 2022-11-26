#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int fcpy(FILE *sourceFile, FILE *destFile);

int main(int argc, char *argv[])
{
    FILE *sourceFile;
    FILE *destFile;

    int a, b;

    if (argc != 3)
    {
        dprintf("Usage: cp file_from file_to\n");
        exit(97);
    }
    /*
     * Open source file in 'r' and
     * destination file in 'w' mode
     */
    sourceFile = fopen(argv[1], "r");
    destFile = fopen(argv[2], "w");

    /* fopen() return NULL if unable to open file in given mode. */
    if (sourceFile == NULL)
    {
        char *msg = "Error: Can't write to NAME_OF_THE_FILE";
        int len = strlen(msg);
        write(STDERR_FILENO, msg, len);
        exit(98);
    }
    if (destFile == NULL)
    {
        printf("Error: Can't write to NAME_OF_THE_FILE\n");
        exit(99);
    }

    fcpy(sourceFile, destFile);

    /* Finally close files to release resources */
    a = fclose(sourceFile);
    b = fclose(destFile);
    if (a == -1 || b == -1)
    {
        printf("Error: Can't close fd FD_VALUE");
        exit(100);
    }

    return 0;
}

/**
 * Copy file contents character by charcter from
 * one file to another.
 * It return total character copied count.
 *
 * @sourceFile  Pointer to source FILE.
 * @destFile    Pointer to destination FILE.
 */
int fcpy(FILE *sourceFile, FILE *destFile)
{
    int count = 0;
    char ch;

    /* Copy file contents character by character. */
    while ((ch = fgetc(sourceFile)) != EOF)
    {
        fputc(ch, destFile);

        /* Increment character copied count */
        count++;
    }

    return count;
}