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
	int fp, i, b;

	fp = open(filename, O_RDWR | O_APPEND);
	if (fp == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[i])
		{
			i++;
		}
		b = write(fp, text_content, i);
		if (b == -1)
		{
			return (-1);
		}
	}
	close(fp);

	return (1);
}
