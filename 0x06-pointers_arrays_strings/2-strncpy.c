#include "main.h"
#include <string.h>

/**
 * _strncpy - this functions copies strings
 *
 * @dest: is destination
 * @src : is source
 * @n: we use it for stuff
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0' ; i++)
	{
		dest[i]  = src[i];
	}
	dest[i] = '\0';
return (dest);
}
