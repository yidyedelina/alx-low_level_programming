#include <stdio.h>
#include <stdlib.h>
/**
* main - an entry point
* @argc: number of argument
* @argv: a string of argument
* return: always 0
*/
int main(int argc, char *argv[])
{
	if(argc < 3)
		puts("Error");
	else
	{
		long arg1 = strtol(argv[1], NULL, 10);
		long arg2 = strtol(argv[2], NULL, 10);
		long mul = arg1*arg2;
		printf("%ld \n", mul);
	}
}
