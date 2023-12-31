#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* string_nconcat - a function that concatenates two strings.
* @s1: first char
* @s2: secound char
* @n: unsigned int
* Return: If the function fails, it should return NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int str1 = 0;
	unsigned int str2 = 0;
	char *string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		str1++;
	for (i = 0; s2[i] != '\0'; i++)
		str2++;

	string = malloc(sizeof(char) * (str1 + n) + 1);
	if (string == NULL)
		return (NULL);
	if (n >= str2)
	{
		for (i = 0; s1[i] != '\0'; i++)
			string[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			string[str1 + i] = s2[i];
		string[str1 + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			string[i] = s1[i];
		for (i = 0; i < n; i++)
			string[str1 + i] = s2[i];
		string[str1 + i] = '\0';
	}
	return (string);
}
