#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file and print to STDOUT.
 * @filename: text file
 * @letters: number of letters
 * Return: b- actual number of bytes read and printed
 * 0 when function fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fl;
	ssize_t b;
	ssize_t d;

	fl = open(filename, O_RDONLY);
	if (fl == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	d = read(fl, buf, letters);
	b = write(STDOUT_FILENO, buf, d);
	free(buf);
	close(fl);
	return (b);
}
