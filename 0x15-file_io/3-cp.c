#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - program that copies the content of a file to another file
 * @ac: argument counter
 * @av: argument vector
 * Return: 1 Success, 0 otherwise
*/

int main(int ac, char **av)
{
	int from_fDesc = 0, to_fDesc = 0;
	ssize_t b;
	char buffer[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	from_fDesc = open(av[1], O_RDONLY);

	if (from_fDesc == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	to_fDesc = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);

	if (to_fDesc == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	while ((b = read(from_fDesc, buffer, READ_BUF_SIZE)) > 0)
		if (write(to_fDesc, buffer, b) != b)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	if (b == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);

	from_fDesc = close(from_fDesc);
	to_fDesc = close(to_fDesc);

	if (from_fDesc)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_fDesc), exit(100);

	if (to_fDesc)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_fDesc), exit(100);

	return (EXIT_SUCCESS);
}
