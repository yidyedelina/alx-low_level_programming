#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - concat two string given
 * @s1: the first string
 * @s2: the second string
 * @n: how many bytes of the second string concatenated
 * Return: a char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len, len2;

	len = strlen(s2);
	len2 = strlen(s1);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (len >= n)
	{
		p = (char *)malloc(len2 + n + 1);
		if (p == NULL)
			return (NULL);
		strcpy(p, s1);
		strncpy(p + len2, s2, n);
	}
	if (len <= n)
	{
		p = (char *)malloc(len2 + len + 1);
		if (p == NULL)
			return (NULL);
		strcpy(p, s1);
		strncpy((p + len2), s2, len);
	}
	return (p);
}
