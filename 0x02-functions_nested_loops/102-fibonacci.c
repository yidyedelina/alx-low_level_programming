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
	printf("%f, %f, ", first, second);
	while (i <= 50)
	{
		seq = first + second;
		first = second;
		second = seq;
		printf("%f, ", seq);
		i++;
	}
	putchar('\n');
	return (0);
}
