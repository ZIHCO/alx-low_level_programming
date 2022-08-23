#include "main.h"

/**
 * main - copies the content of a file to another file.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int fd, count, fdc;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (argv[1] == NULL || fd == -1)
	{
		dprintf(STDERR_FILENO, "ERROR: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdc = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((count = read(fd, buff, 1024)) > 0)
	{
		if (write(fdc, buff, count) != count || fdc == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (count == -1)
	{
		dprintf(STDERR_FILENO, "ERROR: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	if (close(fdc) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdc);
		exit(100);
	}
	return (0);
}
