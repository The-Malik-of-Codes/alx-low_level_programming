#include "main.h"
/**
 * read_textfile - Reads a textfile and prints it to the POSIX STDOUT
 * @filename: The name of the file to read from
 * @letters: The number of characters it should print
 * Return: Returns the number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t filedir = 0, chunk = 0;
	char *buffer;

	if (!filename || !letters)
		return (0);

	filedir = open(filename, O_RDONLY);
	if (filedir < 0)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	chunk = read(filedir, buffer, letters);
	chunk = write(STDOUT_FILENO, buffer, chunk);
	if (chunk < 0)
		return (0);

	close(filedir);
	free(buffer);
	return (chunk);
}

