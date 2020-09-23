#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints  single numbers space whit ,
 *
 * Return: 0
 */
int main(void)
{
	int numbers;

	for (numbers = 48; numbers <= 57; numbers++)
	{
		putchar(numbers);
		if (numbers != 57)
		{
		putchar(44);	
		putchar(32);
		}
	}
	putchar(10);
	return (0);
}
