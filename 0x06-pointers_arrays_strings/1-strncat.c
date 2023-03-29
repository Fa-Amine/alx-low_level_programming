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
	int i = 0;
	char *ptr = dest + strlen(dest);

	while (src[i] != '\0' && i < n)
	{
		*ptr++ = *src++;
		i++;
	}
return (dest);
}
