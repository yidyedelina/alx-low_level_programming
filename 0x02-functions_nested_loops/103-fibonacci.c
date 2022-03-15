#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int i;
	unsigned long int first;
	unsigned long int second;
	unsigned long int seq;
	unsigned long int sum;

	i = 3;
	first = 1;
	second = 2;
	while (seq <= 4000000)
	{
		seq = first + second;
		first = second;
		second = seq;
		if (seq % 2 == 0)
		{
			sum = sum + seq;
		}
	}
	printf("%ld", sum);
	putchar('\n');
	return (0);
}
