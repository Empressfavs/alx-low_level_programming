#include "main.h"

/**
 * _isupper - check main
 * @c: An input character
 * Description: Writes a function character
 * Return: Return 1 if it is uppercase or 0 if it is otherwisw
 */
int _isupper(int c)
{
	char upper;
	int result;

	result = 0;
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == upper)
			{
				result = 1;
			}
		}
		return (result);
}
