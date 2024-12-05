#include "main.h"
/**
 * append_text_to_file - add texte to the file with text inside
 * @filename: name of the file we want to add text
 * @text_content: text to add to the file
 * Return: -1 if it fails and 1 if ok
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0;
	int file, text;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;

		text = write(file, text_content, i);

		if (text == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
return (1);
}

