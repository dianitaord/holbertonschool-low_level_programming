  #include "holberton.h"

/**
* print_last_digit - numbers last digital numbers last digital numbers
* @n: parameter integer
* Return: last digit numbers
*/

int print_last_digit(int n)
{
int num;
num = n % 10;

if (num < 0)
{
num *= -1;
}

_putchar(num + '0');
return (num);
}
