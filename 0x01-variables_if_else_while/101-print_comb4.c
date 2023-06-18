#include <stdio.h>

/**
 * main - entry point
 *
 * Return: (0)
 */

int main(void)
{
	int i;
	int n;
	int z;

	for (i = 48; i <= 55; i++)
		for (n = 49; n <= 56; n++)
			for (z = 50; z <= 57; z++)
			{
				if ((i != n) && (i != z) && (n != z))
				{
					putchar(i);
					putchar(n);
					putchar(z);
					putchar(',');
					putchar(' ');
				}
			}
	putchar('\n');
	return (0);
}

