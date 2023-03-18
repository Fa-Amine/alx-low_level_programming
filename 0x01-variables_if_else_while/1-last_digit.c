#include <stdlib.h>
#include<stdio.h>
#include <time.h>

/**
* main - print if the number is postive, zero, or negative
*
* Description: using the main function
* this program prints "the number n is positive, zero, or negative
* Return: 0
*/
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("Last degit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last degit of %d is %d and is 0\n", n, ld);
	}
	else
	{
		printf("Last degit of %d is %d and is less than 6 and not 0\n", n, ld);
	}
	return (0);
}
