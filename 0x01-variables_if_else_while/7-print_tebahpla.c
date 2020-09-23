#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: 0
 */
int main(void)
{
	int alphabets;

	for (alphabets = 122 ; alphabets >= 97 ; alphabets--)
	{
		putchar(alphabets);
	}
	putchar(10);
	return (0);
}
