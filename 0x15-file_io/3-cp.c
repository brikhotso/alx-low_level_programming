#include "main.h"

/**
 * closefile - Close file descriptor
 * @FD_VALUE: File descriptor to close
 *
 * Return: void, If an error occurs,print error message and exit program.
 */
void closefile(int FD_VALUE)
{
	int cf = close(FD_VALUE);

	if (cf < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", FD_VALUE);
		exit(100);
	}
}
/**
 * copy_file - Copy content of one file to another
 * @file_from: origal file to copy from
 * @file_to: duplicated file
 *
 * Return: 0 if file copied successfully, -1 otherwise.
 */
int copy_file(const char *file_from, const char *file_to)
{
	char *buffer;
	int original, duplicate;
	ssize_t original_bytes, writefile;

	buffer = malloc(BUFFER_SIZE);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Cant write to file %s\n", file_from);
		exit(99);
	}
	original = open(file_from, O_RDONLY);
	if (original < 0)
	{
		free(buffer);
		return (-1);
	}
	duplicate = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (duplicate < 0)
	{
		free(buffer);
		closefile(original);
		return (-1);
	}
	while ((original_bytes = read(original, buffer, BUFFER_SIZE)) > 0)
	{
		writefile = write(duplicate, buffer, original_bytes);
		if (writefile != original_bytes)
		{
			free(buffer);
			closefile(duplicate);
			closefile(original);

			return (-1);
		}
	}
	free(buffer);
	closefile(original);
	closefile(duplicate);

	return (0);
}
/**
 * printErrorMessage - Prints an error message to the standard error output
 * @message: error message to print
 * @file_name: name of file associated with the error
 *
 * Return: void
 */
void printErrorMessage(const char *message, const char *file_name)
{
	dprintf(STDERR_FILENO, "Error: %s %s\n", message, file_name);
}

/**
 * main - Entry point
 * @argc: number of recieved arguments
 * @argv: an array of strings recieved as arguments
 *
 * Return: 0 sucess
 */
int main(int argc, char *argv[])
{
	const char *file_from, *file_to;
	int result;

	if (argc != 3)
	{
		printErrorMessage("Usage: cp file_from file_to", "");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	result = copy_file(file_from, file_to);

	if (result == 0)
	{
		return (0);
	}
	else
	{
		if (result == -1)
		{
			printErrorMessage("Can't read from file", file_from);
			exit(98);
		}
		else
		{
			printErrorMessage("Can't write to file", file_to);
			exit(99);
		}
	}
}
