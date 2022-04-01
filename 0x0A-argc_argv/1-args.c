#include <stdio.h>
/**
* main - the entry point
* @argc: number of argument
* @argv: a string of argument
* Return: always 0
*/
int main(int argc, char *argv[])
{
	char *p;
	p = "char";
	if(argv[0] == p)
		printf("hello");
	printf("%d \n", argc - 1);
	return (0);
}
