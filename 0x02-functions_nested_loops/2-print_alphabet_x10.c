#include "holberton.h"
/**
*print_alphabet_x10 - Write a function that prints 10 times the alphabet,
*in lowercase, followed
*/
void print_alphabet_x10(void)
{
char abc;
int j;

for (j = 0; j <= 9; j++)
{
for (abc = 'a'; abc <= 'z'; abc++)
{
_putchar(abc);
}
_putchar('\n');
}
}
