#include "main.h"

/**
 *_isupper - checks for lowercase
 *@c:the character to be checked
 *Return: 1 for uppercase character and 0 for anything else
 */

int _isupper(int c)
{
	if (c != 65 && c != 90)
	{
		return (0);
	}
	return (1);
}

