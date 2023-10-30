#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to std output
 * @filename: file to read and print
 * @letters: number of letters it should read and print
 
 * Return: actual number of letter read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, let, w;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	read_actual = read(fd, buffer, letters);
	if (read_actual == -1)
	{
		free(buffer);
		return (0);
	}

	close_check = close(fd);
	if (close_check == -1)
	{
		free(buffer);
		return (0);
	}

	write_actual = write(STDOUT_FILENO, buffer, read_actual);
	if (write_actual == -1 || write_actual != read_actual)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	return (write_actual);
}