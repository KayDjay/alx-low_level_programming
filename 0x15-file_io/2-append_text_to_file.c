#include "main.h"

/**
 * append_text_to_file - A function that appends text to a file end
 *
 * @filename: File to append text to
 * @text_content: text to append to file
 *
 * Return: (1) success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
