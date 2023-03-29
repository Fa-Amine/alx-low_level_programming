#include "main.h"

/**
 * cap_string - capitalaizes strings
 *
 * @a: the string
 * Return: the string or nth
 */
char *cap_string(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
		{
			a[i] = a[i] + 32;
		}
	}
return (a);
}
