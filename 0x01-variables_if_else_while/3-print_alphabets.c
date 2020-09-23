#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and upppercase.
 *
 * Return: 0
 */
int main(void)
{
	int lowercase;
	int upppercase;

	for (lowercase = 97 ; lowercase <= 122 ; lowercase++)
	{
		putchar(lowercase);
	}
	for (upppercase = 65 ; upppercase <= 90 ; upppercase++)
	{
		putchar(upppercase);
	}
	putchar(10);
	return (0);
}
