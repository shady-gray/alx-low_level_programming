#include "main.h"


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
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (strlen = 0; text_content[strlen]; strlen++)
		;
	wr = write(file, text_content, strlen);
	if (wr == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}

