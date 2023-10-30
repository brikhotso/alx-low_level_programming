#include "main.h"

/**
 * read_textfile - read a textfile and print it to standard output
 * @filename: pointer to the textfile
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t count = 0;
	ssize_t fileopen, fileread, filewrite;
	char buffer[1024];

	if (filename == NULL)
		return (0);

	fileopen = open(filename, O_RDONLY);

	if (fileopen == -1)
		return (0);

	while (count < letters)
	{
		fileread = read(fileopen, buffer, sizeof(buffer));

		if (fileread == -1)
			close(fileopen);

		if (fileread == 0)
			break;

		filewrite = write(STDOUT_FILENO, buffer, fileread);

		if (filewrite == -1 )
		{
			close(fileopen);
			return (0);
		}

		count += filewrite;
	}

	close(fileopen);

	return (count);
}
