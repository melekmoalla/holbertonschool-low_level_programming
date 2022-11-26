#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char *argv[])
{
	int fa, fb, a, b, z, d;
	char *c;

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 100);
		exit(97);
	}

	fa = open(argv[1], O_RDONLY, 0654);
	if (fa == -1)
	{
		write(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n", 100);
		exit(98);
	}
	c = malloc(sizeof(char *) * fa);
	if (c == NULL)
	{
		return (0);
	}
	fb = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fb == -1)
	{
		write(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n", 100);
		exit(99);
	}
	z = read(fa, c, 10000000000000);
	if (z == -1)
	{
		write(STDERR_FILENO, "Error: Can't read from file test_folder/textfile_0\n", 100);
		return (98);
	}
	d = write(fb, c, z);
	if (d == -1)
	{
		write(STDERR_FILENO, "Error: Can't write to test_folder/textfile_0_copy_3\n", 100);
		return (99);
	}
	a = close(fa);
	b = close(fb);
	if (a == -1 || b == -1)
	{
		write(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n", 100);
		exit(100);
	}
	return (0);
}