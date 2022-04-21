#include "lists.h"
#include "stdio.h"
/**
 * myStartupFun - this function runs before main
 * Return: always nothing
 */

void myStartupFun(void) __attribute__ ((constructor));
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
