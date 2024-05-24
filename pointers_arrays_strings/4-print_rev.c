/**
 * _puts - printout a string to stdout 
 * @c: pointer to the start of a string
 *
 * Return: void
 */
void _puts(char *c)
{
	while (*c != '\0')
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
}
/**
 * _strlen - count the number of characters in a given string
 * @c: pointer to the start of a string
 *
 * Return: int number of characters in string
 */
int _strlen(char *c)
{
	int count = 0;

	while (*c != '\0')
	{
		count++;
		c++;
	}
	return (count);
}
