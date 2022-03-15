#include "main.h"
/**
 * main - Entry point
 * description: to print alphabet letters
 * Return: Always 0 (sucees)
 */
void print_alphabet(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}