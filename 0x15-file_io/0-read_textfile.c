#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the "POSIX"
 * standard output
 * @filename: input file
 * @letters: bytes to read
 * Return: Number of letters, "0" otherwise.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fDesc;
	ssize_t byte;
	char buffer[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);

	fDesc = open(filename, O_RDONLY);

	if (fDesc == -1)
		return (0);

	byte = read(fDesc, &buffer[0], letters);
	byte = write(STDOUT_FILENO, &buffer[0], byte);
	close(fDesc);

	return (byte);
}
