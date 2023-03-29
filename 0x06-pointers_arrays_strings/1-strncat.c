#include "main.h"
#include <string.h>

/**
 * _strncat  - concatenates two but with n bytes from the source
 *
 * @dest: destination
 * @src: source
 * @n: he does stuff too
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
return (dest);
}
