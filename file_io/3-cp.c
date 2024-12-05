#include "main.h"
#define BUFF_SIZE 1024
/**
 * main - copy text from file to another file
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: exit 98 if it fails
 */
int main(int argc, char *argv[])
{
	int file_from = open(argv[1], O_RDONLY);
	int file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	ssize_t text_copy, text_written;
	char buff[BUFF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((text_copy = read(file_from, buff, BUFF_SIZE)) > 0)
	{
		text_written = write(file_to, buff, text_copy);
		if (text_written != text_copy)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (text_copy == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_from);
		exit(100);
	}
	if (close(file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_to);
		exit(100);
	}
return (0);
}
