#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int i;
	unsigned long long int first;
	unsigned long long int second;
	unsigned long long int seq;

	i = 3;
	first = 1;
	second = 2;
	printf("%d, %d, ", first, second);
	while (i <= 50)
	{
		seq = first + second;
		first = second;
		second = seq;
		printf("%d, ", seq);
		i++;
	}
	putchar('\n');
	return (0);
}
