#include "main.h"
/**
* append_text_to_file - a function that appends text at the end of a file.
* @filename: file (path)name
* @text_content: text to be appended
*
* Return: 1 on success and -1 on failure
* Author: BASIL BASSEY
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, txtlen;
	ssize_t wr;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	for (txtlen = 0; text_content[txtlen]; txtlen++)
		;
	if (text_content != NULL)
	{
		wr = write(file, text_content, txtlen);
		if (wr == -1)
			return (-1);
	}
	else
		close(file);
	close(file);
	return (1);
}
