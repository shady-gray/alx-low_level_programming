#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it to the
 * POSIX standard output.
 * @filename: file pathname.
 * @letters: number of letters to read or print
 *
 * Return: actual number of letter it could read and print
 * AUTHOR: BASIL BASSEY
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, wr, rd;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(letters * sizeof(char));
	if (buff == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	rd = read(STDOUT_FILENO, buff, letters);
	wr = write(STDOUT_FILENO, buff, letters);
	if (wr != rd || file == -1 || wr == -1 || rd == -1)
	{
		free(buff);
		return (0);
	}
	close(file);
	free(buff);
	return (wr);
}

