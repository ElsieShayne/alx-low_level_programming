#include <stdio.h>
/**
 * main - this program prints single digit base 10 numbers starting from 0.
 *
 * Return: Always 0 (success)
*/
int main(void)
{

	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}

	putchar('\n');
	return (0);
}
