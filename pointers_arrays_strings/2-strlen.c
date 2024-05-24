/**
 * _strlen - count the number of characters in a given string
 * @c: pointer to the start of a string
 *
 * Return: int number of characters in string
 */
int _strlen(char *c)
{
	int count = 1;

	while (*c != '\0')
	{
		count++;
		c++;
	}
	return (count);
}
