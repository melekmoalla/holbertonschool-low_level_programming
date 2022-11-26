#include "main.h"
/**
 *  main - fonction copy
 * @argc: int
 * @argv:argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int fa, fb, a, b, z, q;
	char c[200000];

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
	z = read(fa, c, 200000);
	if (z == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	q = write(fb, c, z);
	if (q == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		exit(99);
		return (99);
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
