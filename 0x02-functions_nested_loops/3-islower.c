#include "holberton.h"
/**
*_islower - Write a function that checks for lowercase character
*@c:codigo ASCII
* Return: 0 OR 1.
*/
int _islower(int c)
{
int lower;

if (c >= 97 && c <= 122)
{
lower = 1;
}
else
{
lower = 0;
}
return (lower);
}
