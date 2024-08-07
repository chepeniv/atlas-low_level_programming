#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void copy_contents(const char *sourcef, const char *targetf);

/**
 * main - passes along its arguments to a copy_contents call
 * @argc: number of arguments
 * @argv: argument pointer array
 *
 * Return: 0 on success, and nonzero values otherwise
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	copy_contents(argv[1], argv[2]);

	return (0);
}

/**
 * copy_contents - takes the content from one file and duplicates them onto
 * another
 * @sourcef: source file to read from
 * @targetf: source file to write to
 *
 * Return: void
 */
void copy_contents(const char *sourcef, const char *targetf)
{
	int descSource, descTarget;
	int error = 0, bsize = 1024, readlen = 0;
	char *buffer;

	descSource = open(sourcef, O_RDONLY);
	if (sourcef == NULL || descSource < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", sourcef);
		exit(98);
	}

	descTarget = open(
			targetf,
			O_RDWR | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (descTarget < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", targetf);
		exit(99);
	}

	buffer = malloc(sizeof(char) * bsize);
	readlen = read(descSource, buffer, bsize);
	error = write(descTarget, buffer, readlen);
	free(buffer);
	if (readlen < 0 || error < 0)
		exit(-1);

	error = close(descSource);
	if (error < 0)
	{
		dprintf(STDERR_FILENO,  "Error: Can't close fd %d\n", descSource);
		exit(100);
	}
	error = close(descTarget);
	if (error < 0)
	{
		dprintf(STDERR_FILENO,  "Error: Can't close fd %d\n", descTarget);
		exit(100);
	}
}
