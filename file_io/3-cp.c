#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define NAME_OF_THE_FILE argv[2];

int fcpy(FILE *sourceFile, FILE *destFile);

int main(int argc, char *argv[])
{
    FILE *sourceFile;
    FILE *destFile;

    int a, b;

    if (argc != 3)
    {
        char *msg = ("Usage: cp file_from file_to\n");
        int len = strlen(msg);
        write(STDERR_FILENO, msg, len);
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
        char *msg = ("Error: Can't read from file test_folder/textfile_does_not_exist\n");
        int len = strlen(msg);
        write(STDERR_FILENO, msg, len);
        exit(98);
    }
    if (destFile == NULL)
    {
        char *m = ("Error: Can't write to test_folder/textfile_2_copy\n");
        int len = strlen(m);
        write(STDERR_FILENO, m, len);
        exit(99);
    }

    fcpy(sourceFile, destFile);

    /* Finally close files to release resources */
    a = fclose(sourceFile);
    b = fclose(destFile);
    if (a == -1 || b == -1)
    {
        char *msg = "Error: Can't close fd FD_VALUE\n";
        int len = strlen(msg);
        write(STDERR_FILENO, msg, len);
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