#include "main.h"
/**
 * _abs - main entry point.
 *
 * @i: input number as an integer.
 *
 * Return: Absolute value of integer.
*/
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
