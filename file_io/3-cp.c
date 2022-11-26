#include "main.h"
/**
 *  main - fonction copy
 * @argc: int
 * @argv:argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fa, fb, z;
	char c[200000], *g;

	if (argc != 3)
	{dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (strcmp(argv[2], "") == 0)
	{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	fa = open(argv[1], O_RDONLY, 0664);
	if (fa == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fb = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	g = argv[2];
	if (access(g, W_OK) != 0)
	{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (fb == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
	}
	z = read(fa, c, 200000);
	if (z == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if ((write(fb, c, z)) == -1)
	{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (close(fa) == -1 || close(fb) == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n");
		exit(100);
	}
	return (0);
}
