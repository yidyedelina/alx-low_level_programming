#include "variadic_functions.h"
#include "string.h"
/**
 * print_all - prints all arguments passed to it
 * @format: list of argument types
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
va_list arguments;
char *tempstring;
int i;

va_start(arguments, format);
i = 0;
while (format == NULL)
{
printf("\n");
return;
}
while (format[i] != '\0')
{
switch (format[i])
{
case 'c':
printf("%c", (char) va_arg(arguments, int));
break;
case 'i':
printf("%d", va_arg(arguments, int));
break;
case 'f':
printf("%f", (float) va_arg(arguments, double));
break;
case 's':
tempstring = va_arg(arguments, char*);
if (tempstring != NULL)
{
printf("%s", tempstring);
break;
}
printf("(nil)");
break;
}
if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
format[i] == 's') && format[(i + 1)] != '\0')
printf(", ");
i++;
}
printf("\n");
}
