#include "main.h"
#include <stdio.h>
#include <string.h>


char *_strncat(char *dest, char *src, int n)
{
	int destlen = strlen(dest);
	int srclen = strlen(src);
	int p;

	if (destlen + srclen + 1 <= n)
	{
		for ( p = 0; p < srclen; p++)
		{
			dest[destlen + p] = src[p];
			putchar(dest[destlen + p]);
		}
		dest[destlen + srclen] = '\0'; 
	}
	return (dest);
}


