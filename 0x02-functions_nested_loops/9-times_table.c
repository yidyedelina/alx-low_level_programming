#include "main.h"
/**
 * times_table -  print a time table 
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;
	int result;

	for (i = 0; i <= 9; i++)
	{
		for(j = 0; j <= 9; j++)
		{
			result = i * j;
			_putchar(result + '0');
			if(j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}