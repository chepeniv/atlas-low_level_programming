#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char **argv)
{
	return (0);
}

/**
 * copy_contents -
 * @sourcef:
 * @targetf:
 * usage: cp filefrom fileto
 *
 * Return: 1 success, -1 failure
 */
int copy_contents(const char *sourcef, const char *targetf)
{

	/*
	 * allowed functions: printf, dprintf, putchar, puts, malloc,
	 * free, exit, open, read, write, close
	 *
	 * can only read 1024bytes at a time
	 *
	 * if target exist truncate it and don't change permissions
	 *
	 * if targetf needs to be created set permissions to rw-rw-r--
	 */
	int length;
	int desc;
	int success = 1;

	if (filename == NULL)
		return (-1);

	desc = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (desc < 0)
		return (-1);

	if (text_content != NULL)
	{
		length = strlen(text_content);
		success = write(desc, text_content, length);
	}

	close(desc);

	if (success < 0)
		return (-1);
	/* exit codes (print to stderr):
	 *
	 * incorrect num of args :
	 * 97 "Usage: cp file_from file_to\n"
	 *
	 * source doesn't exist :
	 * 98 "Error: Can't read from file NAME_OF_THE_FILE\n"
	 *
	 * cannot create or write to target :
	 * 99 "Error: Can't write to NAME_OF_THE_FILE\n"
	 *
	 * cannot close descriptor :
	 * 100 "Error: Can't close fd FD_VALUE\n"
	 */

	return (1);
}
