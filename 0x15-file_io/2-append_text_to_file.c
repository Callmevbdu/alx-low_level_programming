#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: string
 * Return: length of string
*/

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: file name
 * @text_content: content to write
 * Return: 1 success, -1 failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fDesc;
	ssize_t byte = 0, length = _strlen(text_content);

	if (!filename)
		return (-1);

	fDesc = open(filename, O_WRONLY | O_APPEND);

	if (fDesc == -1)
		return (-1);

	if (length)
		byte = write(fDesc, text_content, length);
	close(fDesc);

	return (byte == length ? 1 : -1);
}
