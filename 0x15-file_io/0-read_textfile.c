#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: the name of the file to be read
 *@letters: the number of letters to read and print
 * Return: the number of letters printed, or 0 if it failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int op;
	int i, y;
	char *buf;

	if (!filename)
		return (0);
	op = open(filename, O_RDONLY);
	if (op < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	i = read(op, buf, letters);
	if (i < 0)
	{
		free(buf);
		return (0);
	}
	buf[i] = '\0';
	close(op);
	y = write(STDOUT_FILENO, buf, i);
	if (y < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (y);
}
