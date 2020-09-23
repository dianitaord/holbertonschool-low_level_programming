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

	for (base10 = 0; base10 <= 9; base10++)
	{
		printf(" %d ", base10);
	}
	return (0);
}
