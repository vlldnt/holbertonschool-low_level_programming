#include "main.h"

/**
 * read_textfile - Reads a text file abnd print it
 * to the `POSIX`standard output
 * @filename: Name of the file
 * @letters: letters to print
 * Return: 0 if failed or number of letter it could read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, len;
	char buf[512];

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	len = read(file, buf, letters);

	if (len == -1)
		return (0);

	write(1, buf, len);
return (len);
}
