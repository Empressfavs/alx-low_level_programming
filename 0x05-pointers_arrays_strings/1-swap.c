#include "main.h"
/**
 * swap_int - check main
 * @a: value to input
 * @b: value to input
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
