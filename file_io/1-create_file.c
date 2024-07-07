#include "main.h"

/**
 * read_textfile - accesses and reads given textfile and outputs its contents
 * to the posix stdout
 * @filename: file to access
 * @letters: the number of characters to process
 *
 * Return: total number of characters actually processed or 0 upon failure
 */
int create_file(const char *filename, char *text_content)
{
	/*
	 * "ltrace allowed functions: write, printf, putchar, puts, malloc,
	 * free, exit, open, read, write, close, strlen"
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
		success = write(filename, text_content, length);
	}
	else
	{
	// create empty file // maybe delete elseblock ?
	}

	close(desc);

	if (success < 0)
		return (-1);

	return (1);
}
