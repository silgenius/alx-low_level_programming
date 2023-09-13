#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 *
 * @name: name of the person
 * @f: a pointer to a function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
