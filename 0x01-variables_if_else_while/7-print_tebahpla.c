#include <stdio.h>
/**
 * main - this program prints lowercase alphabets in reverse.
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int a;

	for (a = 122; a >= 97 ; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
