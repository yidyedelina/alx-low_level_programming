#include "main.h"
#include "string.h"
/**
 * cap_string - capitalize every words
 * @s: string
 * Return: return a char pointer
 */
char *cap_string(char *s)
{
	int len, i;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		if ((s[i] >= 32 && s[i] <= 47) || s[i] == '\n' || s[i] == '\t')
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] = s[i + 1] - 32;
		}
	}
	return (s);
}
