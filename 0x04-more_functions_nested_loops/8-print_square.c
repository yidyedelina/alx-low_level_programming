#include "main.h"
/**
 * print_square - print # squares
 * @size: the width of the square
 * Return: 0
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
