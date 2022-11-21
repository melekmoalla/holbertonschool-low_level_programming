#ifndef INV_TREE_H
#define INV_TREE_H
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
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
