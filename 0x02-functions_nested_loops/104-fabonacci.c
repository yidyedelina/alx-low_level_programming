#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int i;
	double first;
	double second;
	double seq;

	i = 3;
	first = 1;
	second = 2;
	printf("%g, %g, ", first, second);
	while (i <= 98)
	{
		seq = first + second;
		first = second;
		second = seq;
		if (i != 98)
		{
			printf("%g, ", seq);
		}
		else
			printf("%g", seq);
		i++;
	}
	putchar('\n');
	return (0);
}
