#include "main.h"
/**
 * more_numbers - print 0 to 14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	i = 0;
	j = 0;
	while (j <= 9)
	{
		while (i <= 14)
		{
			_putchar(i + '0');
			i++;
		}
		_putchar('\n');
		j++;
	}
}
