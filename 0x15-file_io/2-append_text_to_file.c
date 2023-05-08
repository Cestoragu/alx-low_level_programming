#include "main.h"

/**
 * append_text_to_file - Appends text at end of file.
 * @filename: pointer
 * @text_content: string to add at end of file.
  * Return: user lacks permission - -1 otherwise -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int p, b, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	b = write(p, text_content, len);

	if (p == -1 || b == -1)
		return (-1);

	close(p);

	return (1);
}
