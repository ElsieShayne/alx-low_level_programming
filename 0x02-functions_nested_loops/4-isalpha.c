#include "main.h"
/**
 * _isalpha - main entry point. checks for alphabetic character.
 *
 * @c: represents ASCII code.
 * Return: 1 if c is a letter, lowercase or uppercase.
*/
int _isalpha(int c)
{

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
