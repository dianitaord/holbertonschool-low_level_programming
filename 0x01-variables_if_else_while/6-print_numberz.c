#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0
 */
int main(void)
{
	int base10;

	for (base10 = 48; base10 <= 57; base10++)
	{
		putchar(base10);
	}
	putchar(10);
	return (0);
}
