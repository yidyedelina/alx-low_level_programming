#include "main.h"
#include "string.h"
#include <stdbool.h>
/**
 * rot13 - encoding atext
 * @s: a string
 * Return: a decoded string
 */
char *rot13(char *s)
{
	int len, i;
	bool exp;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		exp = (s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M');
		if (exp)
			s[i] = s[i] + 13;
		else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
		{
			s[i] = s[i] - 13;
		}
	}
	return (s);
}
