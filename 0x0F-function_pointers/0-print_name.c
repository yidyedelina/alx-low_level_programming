#include "function_pointers.h"

/**
 * print_name - entry piint from main
 * @name: String of name
 * @f:	Entry to another function
 */

void print_name(char *name, void (*f)(char *))

{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
