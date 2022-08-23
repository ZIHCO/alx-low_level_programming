#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the
 * end of the file
 * Return: -1 on failure, 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int count = _strlen(text_content);

	fd = open(filename, O_RDWR | O_APPEND, S_IWUSR | S_IRUSR);
	if (fd == -1)
		return (-1);
	if (filename == NULL)
		return (-1);
	if (text_content)
		write(fd, text_content, count);
	return (1);
}
/**
 * _strlen - length of the string
 * @str: string pointer
 * Return: length of string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
