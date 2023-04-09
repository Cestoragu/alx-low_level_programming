#include "main.h"

/**
 * append_text_to_file - Appends text at the end of file.
 * @filename: A pointer to the name
 * @text_content: The string to add
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int p, l, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	p = open(filename, O_WRONLY | O_APPEND);
	l = write(p, text_content, len);
	if (p == -1 || l == -1)
		return (-1);
	close(p);
	return (1);
}
