#include "main.h"

size_t _strlen(char *str);
int create_file(const char *filename, char *text_content);

/**
 * _strlen - counts length of a string
 * @str: string to be counted
 *
 * Return: length of string
 * Author: BASIL BASSEY
 */
size_t _strlen(char *str)
{
	size_t  len;

	for (len = 0; *str != '\0'; len++)
		str++;
	return (len);
}

/**
 * create_file - a function that creates a file
 * @filename: file (path)name
 * @text_content: NULL terminated string of text to be written to file.
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 * Author: BASIL BASSEY
 */
int create_file(const char *filename, char *text_content)
{
	int file, strlen;
	ssize_t wr;

	if (filename == NULL)
		return (-1);
	strlen = _strlen(text_content);
	file = open(filename, O_WRONLY | O_CREAT, 0600);
	if (file == -1)
		return (-1);
	wr = write(file, text_content, strlen);
	if (wr == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return(1);
}

