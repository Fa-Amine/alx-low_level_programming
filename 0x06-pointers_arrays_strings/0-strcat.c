#include "main.h"
#include <string.h>

/**
 * _strcat - does concatenate two strings
 *
 * @dest : is destination
 * @src : is source string
 *
 * Return: the dest string
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest + strlen(dest);

	while (*src)
	{
	*ptr++ = *src++;
	}
	*ptr = '\0';
return (dest);
}

