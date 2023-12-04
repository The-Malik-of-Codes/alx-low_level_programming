#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file to append data to.
 * @text_content: data to append to file
 * Return: 1 if succesful else -1 on error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileDir = 0, chunk = 0, i = 0;

	if (!filename)
		return (-1);

	fileDir = open(filename, O_WRONLY | O_APPEND);
	if (fileDir < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;

		chunk = write(fileDir, text_content, i);
		if (chunk < 0)
		return (-1);
	}
	close(fileDir);
	return (1);
}

