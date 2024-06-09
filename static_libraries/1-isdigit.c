/**
 * _isdigit - test whether a given char is a digit base 10
 * @c: the char to test
 *
 * Return: 1 for digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
