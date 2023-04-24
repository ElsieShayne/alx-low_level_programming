#include <stdio.h>
/**
 * main - this program prints all combination of single digit numbers.
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);

		putchar(',');

		putchar(' ');
	}

	putchar('\n');

	return (0);
}
