#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

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

	if (filename == NULL || total > letters || total == 0)
		return (0);

	desc = open(filename, O_RDONLY);
	if (desc < 0)
		return (0);

	total = read(desc, buffer, letters);
	total = write(STDOUT_FILENO, buffer, total);

	if (total < 0)
		return (0);

	return (total);
}
