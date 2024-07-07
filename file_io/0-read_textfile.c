#include "main.h"

/**
 * read_textfile - accesses and reads given textfile and outputs its contents
 * to the posix stdout
 * @filename: file to access
 * @letters: the number of characters to process
 *
 * Return: total number of characters actually processed or 0 upon failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	/*
	 * "ltrace allowed functions: write, printf, putchar, puts, malloc,
	 * free, exit, open, read, write, close, atoi, strcmp, strlen"
	 */
	ssize_t total;
	int desc;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);

	desc = open(filename, O_RDONLY, O_NONBLOCK);
	if (desc < 0)
		return (0);
	buffer = malloc(sizeof(char)*letters);
	total = read(desc, buffer, letters);
	total = write(STDOUT_FILENO, buffer, total);
	free(buffer);

	if (total < 0)
		return (0);

	return (total);
}
