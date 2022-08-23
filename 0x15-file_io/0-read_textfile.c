#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 * @filename: the name of file to execute
 * @letters: the number of letters
 * Return: 0 on failure, or number of letters on succes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY, 0700);
	char *buff = malloc(sizeof(char *) * letters);
	ssize_t actual_count;

	if (buff == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	if (fd == -1)
		return (0);
	actual_count = read(fd, buff, letters);
	buff[actual_count + 1] = '\0';

	write(STDOUT_FILENO, buff, (actual_count + 1));
	free(buff);
	close(fd);

	return (actual_count + 1);
}
