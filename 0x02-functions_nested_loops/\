#include "main.h"
/**
 * times_table - prints times table
 * Return:void
 */
void times_table(void)
{
	int a = 0;
	int b;
	int ttb;

	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			ttb = a * b;
			if (b == 0)
			{
				_putchar('0' + ttb);
			}
			else if (ttb < 10)
			{
				_putchar(' ');
				_putchar('0' + ttb);
			}
			else
			{
				_putchar('0' + ttb / 10);
				_putchar('0' + ttb % 10);
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
