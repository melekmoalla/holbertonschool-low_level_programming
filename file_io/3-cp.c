#include "main.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
/**
 *  main - fonction copy
 * @argc: int
 * @argv:argv
 * Return: 0
 */

int read_fonct(char *r, int fa, char *c);

int write_fonct(char *r, int fb, int z, char *c);

int main(int argc, char *argv[])
{
	int fa, fb, a, b, z;
	char c[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fa = open(argv[1], O_RDONLY, 0654);
	if (fa == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fb = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fb == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
	}
	while (1)
	{
		z = read_fonct(argv[1], fa, c);
		if (!z)
			break;
		write_fonct(argv[2], fb, z, c);
	}
	a = close(fa);
	b = close(fb);
	if (a == -1 || b == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n");
		exit(100);
	}
	return (0);
}

int read_fonct(char *r, int fa, char *c)
{
	int a;

	a = read(fa, c, 20000);
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", r);
		exit(98);
	}
	return (a);
}

int write_fonct(char *r, int fb, int z, char *c)
{
	int q;

	q = write(fb, c, z);
	if (q == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't writr to %s\n", r);
		exit(99);
	}
	return (0);
}