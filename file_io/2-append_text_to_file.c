#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *  append_text_to_file - function that appends text at the end of a file.
 * @filename: file to read from-
 * @text_content: any thing do want to write
 * Return: 1 or -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;

	fp = fopen(filename, "a");
	if (fp == NULL)
	{
		return (-1);
	}
	fprintf(fp, "%s\n", text_content);

	fclose(fp);

	return (1);
}
