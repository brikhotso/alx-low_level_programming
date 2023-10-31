#include "main.h"

void printErrorMessage(const char *message, const char *file_name);

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
	char buffer[1024];
	int original, duplicate;
	ssize_t original_bytes, writefile;

	original = open(file_from, O_RDONLY);
	if (original < 0)
	{
		printErrorMessage("Can't read from file", file_from);
		exit(98);
	}
	duplicate = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (duplicate < 0)
	{
		printErrorMessage("Can't write to", file_to);
		closefile(original);
		exit(99);
	}
	while ((original_bytes = read(original, buffer, 1024)) > 0)
	{
		writefile = write(duplicate, buffer, original_bytes);
		if (writefile != original_bytes)
		{
			printErrorMessage("Can't write to", file_to);
			closefile(duplicate);
			closefile(original);
			exit(99);
		}
	}
	if (original_bytes < 0)
	{
		printErrorMessage("Can't read from file", file_from);
		closefile(duplicate);
		closefile(original);
		exit(98);
	}
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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
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
			exit(98);
		}
		else
		{
			exit(99);
		}
	}
}
