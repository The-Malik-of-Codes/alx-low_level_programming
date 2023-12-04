#include "main.h"
/**
 * create_file - creates a file and adds permission to it
 * @filename: The name of the file to be created
 * @text_content: content to be placed in the created file
 * Return: 1 if successful and -1 on err.
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fileDir = 0, chunk = 0, iterable = 0;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	fileDir = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (fileDir < 0)
		return (-1);

	while (text_content[iterable])
		iterable++;
	chunk = write(fileDir, text_content, iterable);
	if (chunk < 0)
		return (-1);

	close(fileDir);
	return (1);
}

