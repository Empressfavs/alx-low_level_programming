#include "main.h"
/**
 * _isdigit - check main
 * @c: The character to print
 * Return: Returns 1 if c is a digit otherwise, return 0
 */
int _isdigit(int c)
{
	char a;
	int b;

	a = 0;
	b = 0;

	for (a = '0'; a <= '9'; a++)
	{
		if (a == c)
		{
			b = 1;
		}

	}
	return (b);
}
