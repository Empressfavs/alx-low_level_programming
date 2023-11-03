#include "main.h"
#include <stdlib.h>
/**
 * str_concat -  a function that concatenates two strings
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *cha;
	int i;
	int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
		i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	cha = malloc(sizeof(char) * (i + j + 1));
	if (cha == NULL)
		return (NULL);
	i = 0;
	j= 0;
	while (s1[i] != '\0')
	{
		cha[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		cha[i] = s2[j];
		i++, j++;
	}
	cha[i] = '\0';	
	return (cha);
}
