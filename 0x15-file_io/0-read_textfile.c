#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 *
 * Return: the number of letters printed, or 0 if it failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int read_return, write_return;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buffer);
		return (0);
	}
	read_return = read(fd, buffer, letters);
	if (read_return < 0)
	{
		free(buffer);
		return (0);
	}
	close(fd);
	buffer[read_return] = '\0';
	write_return = write(STDIN_FILENO, buffer, read_return);
	if (write_return < 0 || write_return != read_return)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (write_return);
}
