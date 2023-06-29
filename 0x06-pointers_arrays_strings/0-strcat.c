#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - this function will concatnate two strings.
 * @dest: the value of src will be added to it.
 * @src: the value will be moveed to dest.
 *Return: (dest)
 */

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		putchar(*dest);
		dest++;
	}

	while (*src != '\0')
	{
		putchar(*src);
		src++;
	}

	return (dest);
}

