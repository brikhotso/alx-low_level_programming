#include "main.h"

/**
 * append_text_to_file - add text to the end of a file
 * @filename: pointer to the textfile
 * @text_content: string to write at the end of the file
 *
 * Return: appended file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int openfile, writefile;
	int len = 0;

	if (filename == NULL)
		return (-1);

	openfile = open(filename, O_WRONLY | O_APPEND);

	if (openfile < 0)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		if (len > 0)
		{
			writefile = write(openfile, text_content, len);

			if (writefile != len)
			{
				close(openfile);
				return (1);
			}
		}
	}

	close(openfile);

	return (1);
}
