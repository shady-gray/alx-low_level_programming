#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: file (path)name.
 * @letters: number os letters to be read and written
 *
 * Return: returns the actual number of letters it could read and print
 * Author: BASIL BASSEY
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
	if (file == -1)
	{
		free(buff);
		return (0);
	}
	rd = read(file, buff, letters);
	if (rd == -1)
	{
		free(buff);
		return (0);
	}
	wr = write(STDOUT_FILENO, buff, letters);

	if (wr != rd || wr == -1)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(file);
	return (wr);
}
