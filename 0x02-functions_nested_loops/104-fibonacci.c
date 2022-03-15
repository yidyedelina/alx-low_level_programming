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
	unsigned long int firstDigit;

	i = 3;
	first = 1;
	second = 2;
	printf("%ld, %ld, ", first, second);
	while (i <= 98)
	{
		seq = first + second;
		first = second;
		second = seq;
		while(seq != 0)
		{
			firstDigit = seq % 10;
			seq = seq / 10;
		}
		if(firstDigit == 1 || firstDigit == 2)
		{
			printf("%ld, ", second);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
