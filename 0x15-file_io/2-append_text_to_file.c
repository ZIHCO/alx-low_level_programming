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
	int count = _strlen(text_content) + 1;
	int actual_count;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
		actual_count = write(fd, text_content, count);
	if (actual_count == -1)
		return (-1);
	close(fd);
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
