#include "holberton.h"

/**
* print_sign - display + positive, - negative, 0 zero
* @n: parameter character or code ascii
* Return: + - or 0
*/

int print_sign(int n)
{
int  num;

if (n > 0)
{
_putchar('+');
num = 1;
}

else if (n == 0)
{
_putchar('0');
num = 0;
}

if (n < 0)
{
_putchar('-');
num = 1;
}

return (num);
}
