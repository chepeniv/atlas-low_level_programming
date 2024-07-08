#include "main.h"

/**
 * append_text_to_file - append text to the end of a given file
 * @filename: file to modify
 * @text_content: text to append file with
 *
 * Return: 1 success, -1 failure
 */
int append_text_to_file(const char *filename, char *text_content)
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

	desc = open(filename, O_WRONLY | O_APPEND);
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
