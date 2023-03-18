#include <stdio.h>

/**
* main - upper cases with normal
*
* Description: using the main function
* this program prints "the number n is positive, zero, or negative
* Return: 0
*/
int main(void)
{
for (char c = 'a'; c <= 'z'; c++)
{
	putchar(c);
}
for (char c = 'A'; c <= 'Z'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}

