#include "main.h"
/**
 *  main - fonction copy
 * @argc: int
 * @argv:argv
 * Return: 0
 */

int read_fonct(char *r, int fb, char *c);

void write_fonct(char *r, int fb, int z, char *c);

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
	fb = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	z = read_fonct(argv[1], fa, c);
	write_fonct(argv[2], fb, z, c);
	a = close(fa);
	b = close(fb);
	if (a == -1 || b == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n");
		exit(100);
	}
	return (0);
}

int read_fonct(char *r, int fb, char *c)
{
	int a;

	if (fb == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", r);
		exit(98);
	}
	a = read(fb, c, 1024);
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", r);
		exit(98);
	}
	return (a);
}

void write_fonct(char *r, int fb, int z, char *c)
{
	int q;

	if (fb == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't writr to %s\n", r);
		exit(99);
	}
	q = write(fb, c, z);
	if (q == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't writr to %s\n", r);
		exit(99);
	}
}