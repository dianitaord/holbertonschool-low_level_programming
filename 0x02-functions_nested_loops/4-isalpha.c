#include "holberton.h"
/**
 *_isalpha - Write a function that checks for lowercase or uppercase character
 *@c: parameter character or ascii code
 *Return: 0 OR 1.
 */

int _isalpha(int c)

{
	int abd;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		abd = 1;
	}
	else
	{
		abd = 0;
	}

	return (abd);
}
