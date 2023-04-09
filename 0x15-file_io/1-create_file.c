#include <stdlib.h>
#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: name to the file to create.
 * @text_content: NULL terinated string to write to the file
 *
 * Return: 1, on Success. -1 on failure(file can not be created, file can not
 * 	   be written, write "fails", etc , ...)
 * AUTHOR: BASIL BASSEY
 */
int create_file(const char *filename, char *text_content)
{
	int file, ln = 0, wr;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		for (ln = 0; text_content[ln]; ln++)
			;
	}
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(file, text_content, ln);

	if (file == -1 || wr == -1)
		return (-1);

	close(file);
	return (0);
}

