#include "main.h"
/**
 * _islower - main entry. It shows 1, if input is lowercase and 0 if otherwise.
 *
 * @c: integer representing the ASCII code to check.
 * Return: 1 for lowercase character, 0 for otherwise.
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		_putchar('\n');
		return (1);
	}
	else
	{
		_putchar('\n');
		return (0);
	}
}
