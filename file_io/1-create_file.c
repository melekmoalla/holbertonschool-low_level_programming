#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *  create_file - a function that creates a file.
 * @filename: file to read from-
 * @text_content: any thing do you want
 * Return: 1 or -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i = 0, a;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	if (text_content)
	{
		while (text_content[i])
		{
			i++;
		}
		a = write(fd, text_content, i);
		if (a == -1)
		{
			return (-1);
		}
	}
	close(fd);

	return (1);
}
