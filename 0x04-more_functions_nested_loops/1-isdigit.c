#include "main.h"
/**
 * _isdigit - check main
 * @c: The character to print
 * Return: Returns 1 if c is a digit otherwise, return 0
 */
int _isdigit(int c)
{
	int a;
	int b;

	b = 0;

	for (a = 0; a <= 9; a++)
	{
		if (a == c)
		{
			b = 0;
		}

	}
	return (b);
}
