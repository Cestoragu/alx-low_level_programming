#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file
 * @text_content: A pointer to a string
 * Return: If the function fails - -1.
 * Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int tb, l, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	tb = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	l = write(tb, text_content, len);
	if (tb == -1 || l == -1)
		return (-1);
	close(tb);
	return (1);
}
