#include <stdio.h>

/**
 * main - Entry point
 * Description - print all single digit number
 * Return: always 0 (success)
 */
int main(void)
{
	int a;
	int b;
	int c;

	a = 1;
	b = 0;
	c = 1;
	while (c <= 89)
	{
		if (a % 10 == 0)
		{
			b++;
			a = 0;
		}
		putchar(b + '0');
		putchar(a + '0');
		if	(c < 89)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
		c++;
	}
	putchar('\n');
	return (0);
}
