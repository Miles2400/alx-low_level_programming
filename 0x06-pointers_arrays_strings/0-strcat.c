#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcat - this function will concatnate two strings.
 * @dest: the value of src will be added to it.
 * @src: the value will be moveed to dest.
 *Return: (dest)
 */

char *_strcat(char *dest, char *src)
{
	int destlen = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[destlen + i] = src[i];
	}
	dest[destlen + i] = '\n';
	return (dest);
}

