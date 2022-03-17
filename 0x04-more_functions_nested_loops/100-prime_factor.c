#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	long int lt, count, i, j, num;

	num = 612852475143;
	lt = 1;
	count = 0;
	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			for (j = i - 1; j > 1; j--)
			{
				count = 0;
				if (i % j == 0)
				{
					count = 1;
					break;
				}
			}
			if (count == 0)
			{
				if (lt < i)
				{
					lt = i;
				}
			}
		}
		count = 0;
	}
	printf("%ld\n", lt);
	return (0);
}
