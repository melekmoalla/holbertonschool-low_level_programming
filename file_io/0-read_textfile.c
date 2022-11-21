#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Read file 'filename' into character buffer 'text'.
 *
 * @param filename file to read from
 * @param text character buffer to read into
 *
 * @return the number of bytes read.
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

    m = open(filename, O_RDONLY, 1000000);
    if (m == -1)
        return (0);
    a = read(m, c, letters);
    write(STDOUT_FILENO, c, a);

    free(c);
    close(m);
    return (a);
}