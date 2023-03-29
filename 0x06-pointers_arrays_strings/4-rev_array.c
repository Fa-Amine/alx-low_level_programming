#include "main.h"

/**
 * reverse_array - reverses arraay
 *
 *@a: points to array
 *@n: elemnts
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0 ; i < n-- ; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}

