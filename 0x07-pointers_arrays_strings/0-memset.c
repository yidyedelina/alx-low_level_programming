#include "main.h"
#include "string.h"
/**
 * _memset() - a function that copy n bytes of the memory pointed by 
 * @s: a character
 * @b: a character
 * @n: an integer 
 * Return: the buffered string
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}