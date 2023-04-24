#include <stdio.h>
/**
 * main - this program prints out alphabets in lowercase.
 *
 * Return: Always 0 (success)
*/
int main(void)
{

	int i = 97;

	while (i <= 122)
	{
		putchar(i);

		i++;
	}

	putchar('\n');
	return (0);
}
