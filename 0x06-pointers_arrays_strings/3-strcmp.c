#include "main.h"
#include "string.h"
/**
 * _strcmp - compare two strings
 * @s1: the first string to be compared
 * @s2: the seconde string to be compared
 * Return: 0 if they are equal and 1 if s1 greater else 2
 */
int _strcmp(char *s1, char *s2)
{
	int i, len, value = 0;

	len = strlen(s1);
	for (i = 0; i < len && s2[i] != '\0';  i++)
	{
		if (s1[i] == s2[i]) continue;
		else if (s1[i] > s2[i])
		{
			value = 1;
			break;
		}
		else
		{
			value = -1;
			break;
		}
	}
	return value;
}
