/**
 * _isupper - test whether a given char is an uppercase letter
 * @c: the char to test
 *
 * Return: 1 for uppercase letter, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
