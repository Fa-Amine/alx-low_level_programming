#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings
 *
 * @s1: first string
 * @s2: second string
 * Return: value of diff
 */
int _strcmp(char *s1, char *s2)
{
	int sz1 = strlen(s1);
	int sz2 = strlen(s2);
	int diff;

	if (sz1 < sz2)
	{
		diff = -15;
	}
	else if (sz1 > sz2)
	{
		diff = 15;
	}
	else  if (sz1 == sz2)
	{
		diff = 0;
	}
return (diff);
}
