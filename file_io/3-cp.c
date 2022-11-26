#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int fcpy(FILE *sourceFile, FILE *destFile);

int main(int argc, char *argv[])
{
    FILE *sourceFile;
    FILE *destFile;

    if (argc != 3)
    {
        exit(98);
    }
    /*
     * Open source file in 'r' and
     * destination file in 'w' mode
     */
    sourceFile = fopen(argv[1], "r");
    destFile = fopen(argv[2], "w");

    /* fopen() return NULL if unable to open file in given mode. */
    if (sourceFile == NULL || destFile == NULL)
    {
        /* Unable to open file hence exit */
        printf("\nUnable to open file.\n");
        printf("Please check if file exists and you have read/write privilege.\n");

        exit(EXIT_FAILURE);
    }

    fcpy(sourceFile, destFile);

    /* Finally close files to release resources */
    fclose(sourceFile);
    fclose(destFile);

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