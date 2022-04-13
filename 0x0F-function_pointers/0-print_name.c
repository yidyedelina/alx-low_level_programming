#include "function_pointers.h"
/**
 * print_name - print the name of given value
 * @name: name of the person
 * @f: a callback function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
		(*f)(name);
}
