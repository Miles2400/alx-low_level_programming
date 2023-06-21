#include "main.h"

/**
 * main - entry point
 *
 * Return: value of the last digit of number
 */

int print_last_digit(int n)
{
	int i;
	i = n % 10;
	if (i < 0)
	{
	i = i * -1;
	}
	_putchar(i + '0');
	return (i);

}
