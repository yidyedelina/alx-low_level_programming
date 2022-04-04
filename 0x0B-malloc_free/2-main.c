#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;
	char *p;

    s = str_concat("Betty ", "Holberton");
	p = str_concat(NULL, NULL);
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
	printf("%s\n", p);
    free(s);
	free(p);
    return (0);
}