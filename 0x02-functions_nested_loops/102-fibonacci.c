#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int i;
	long long first;
	long long second;
	long long seq;

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
