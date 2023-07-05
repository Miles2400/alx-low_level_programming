#include "main.h"

/**
 * _print_rev_recursion - prints the given string in reverse
 * @s: string to be print printed
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
