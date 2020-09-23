#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: 0
 */
int main(void)
{
	int alphabets;

	for (alphabets = 97 ; alphabets <= 122 ; alphabets++)
	{
		if (!(alphabets==101 || alphabets==113))
		putchar(alphabets);
	}
	putchar(10);
	return (0);
}
