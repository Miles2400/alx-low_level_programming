#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: input var
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, m;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (m = 0; m < i; m++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
