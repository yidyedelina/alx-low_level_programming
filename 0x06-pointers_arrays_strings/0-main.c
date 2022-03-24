#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";
    char s3[] = "hl";
    char s4[] = "hle";
    char s5[] = "hleee";

    printf("%d\n", _strcmp(s3, s4));
    printf("%d\n", _strcmp(s4, s3));
    printf("%d\n", _strcmp(s5, s5));
    printf("%d\n", _strcmp(s1, s2));
    return (0);
}