/**
 * _strlen - measures the total characters in a string
 * @str: string to measure
 *
 * Return: length of string
 */
int _strlen(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
		++len;
	return (len);
}
