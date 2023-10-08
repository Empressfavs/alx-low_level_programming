#include <stdio.h>
/**
 * main - A program that prints the alphabet in both lowwer case and upper case
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			if ((c != 'q' && c != 'e') && c <= 'z')
				putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
