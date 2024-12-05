#include "main.h"
/**
 * create_file - create a file and write insiede text
 * @filename: name of the file
 * @text_content: text containec inside the file
 * Return: -1 if no filename, 1 on succes -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, text;
	int n = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[n] != '\0')
			n++;

		text = write(file, text_content, n);

		if (text == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
return (1);
}
