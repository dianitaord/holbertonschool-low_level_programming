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
	int letra;

	for (base10 = 48; base10 <= 57; base10++)
	{
		putchar(base10);
	}
	for (letra = 97; letra <= 102; letra++)
	{
		putchar(letra);
	}
	putchar(10);
	return (0);
}
