#include "main.h"

/**
 * create_file - create a file if it doesn't exist, else modify it
 * @filename: file to create or modify
 * @text_content: text to fill file with
 *
 * Return: 1 success, -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	/*
	 * allowed functions: write, printf, putchar, puts, malloc,
	 * free, exit, open, read, write, close, strlen
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

	return (1);
}
