#include "main.h"

/**
 * main - check the code
 *
 * Return: (0)
 */

void print_alphabet_x10(void)
{
	char i;
	int n = 0;

	while (n <= 9)
	{
		for (i = 'a';i <= 'z';i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	n++;
	}
}


