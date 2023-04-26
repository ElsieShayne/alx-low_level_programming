#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Main entry point. Prints all natural numbers from n to 98
 * @n: number to start printing from
 *
 * Return: Always 0
*/
void print_to_98(int n)
{
	int i;

	for (int i = n; i <= 98; i++)
	{
		printf("%d\n", i);
	}
}
