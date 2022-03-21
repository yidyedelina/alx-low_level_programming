#include "main.h"
#include <stdio.h>
#include "string.h"
/**
 * puts_half - print half of string
 * @str: string variable
 * Return: void
 */
void puts_half(char *str)
{
	int len, i;

	len = strlen(str);
	if (len % 2 != 0)
	{
		len = len - 1;
	}
	for ( i = len / 2; i < len; i++)
	{
		putchar(str[i]);
	}
}
