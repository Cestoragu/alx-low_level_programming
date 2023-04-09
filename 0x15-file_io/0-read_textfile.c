#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file
 * @filename: text file being read
 * @letters: number of letters
 * Return: w- actual number of bytes
 * 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t tb;
	ssize_t l;
	ssize_t t;

	tb = open(filename, O_RDONLY);
	if (tb == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(tb, buf, letters);
	l = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(tb);
	return (l);
}
