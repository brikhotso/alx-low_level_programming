#include "main.h"

/**
 * create_file - create a file
 * @filename: pointer to the textfile
 * @text_content: string to write in the file
 *
 * Return: created file
 */
int create_file(const char *filename, char *text_content)
{
	int openfile, writefile;
	int len = 0;

	if (filename == NULL)
		return (-1);

	openfile = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (openfile < 0)
		return (-1);

	while (text_content[len] != '\0')
	{
		writefile = write(STDIN_FILENO, text_content, len);

		if (text_content == NULL)
		{
			return (-1);
			close(openfile);
		}
		if (writefile < 0)
		{
			return (-1);
			close(openfile);
		}

		len++;

		return (1);
	}
	close(openfile);

	return (1);
}
