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
    FILE *s;
    char c;
    size_t i = 1;

    if (filename == NULL)
        return (0);
    s = fopen(filename, "r");
    if (s == NULL)
        return (0);
    while ((c = fgetc(s)) != EOF)
    {
        printf("%c", c);
        i++;
        if (i == letters)
            break;
    }

    fclose(s);
    return (i);
}