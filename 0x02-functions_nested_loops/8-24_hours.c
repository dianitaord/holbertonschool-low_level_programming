#include "holberton.h"
/**
*jack_bauer - Print jack bauser 00:00 24:00
*@num - hours
*Description: prints the times from 0 to *
*Return: 0
*/

void jack_bauer(void)
{
int h;
int m;

for (h = 0; h < 24; h++)

{
for (m = 0; m < 60; m++)
{
_putchar(h / 10 + '0');
_putchar(h % 10 + '0');
_putchar(':');
_putchar(m / 10 + '0');
_putchar(m % 10 + '0');
_putchar('\n');
}
}
}
