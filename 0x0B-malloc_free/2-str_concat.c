#include "main.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
/**
 * str_concat - concatenate two strings together
 * @s1: the first string
 * @s2: the second string
 * Return: Null if allocation is unsuccessful
 * or return char pointer if successful
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, lenT, i, j;
	char *p;

	len1 = strlen(s1);
	len2 = strlen(s2);
	lenT = len1 + len2;
	p = (char *)malloc(sizeof(char) * lenT);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		p[i + j] = s2[j];
	}
	return (p);
}
