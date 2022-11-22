#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *  read_textfile - Read file 'filename' into character buffer 'text'
 * @filename: file to read from
 * @letters: character buffer to read into
 * Return: the number of bytes read.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int m, a;
	char *c;

	c = malloc(sizeof(char *) * letters);
	if (c == NULL)
	{
		return (0);
	}

	m = open(filename, O_RDONLY, 0600);
	if (m == -1)
		return (0);
	a = read(m, c, letters);
	write(STDOUT_FILENO, c, a);

	free(c);
	close(m);
	return (a);
}