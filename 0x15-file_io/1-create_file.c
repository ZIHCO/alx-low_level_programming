#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: ....
 * @text_content: ....
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int count = _strlen(text_content);

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		write(fd, text_content, count);
	close(fd);
	return (1);
}
/**
 * _strlen - get the length of a string
 * @str: ....
 * Return: the length of string
 */
int _strlen(char *str)
{
	int count = 0;

	while (str[count])
		count++;
	return (count);
}
