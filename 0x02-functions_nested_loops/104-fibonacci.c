#include <stdio.h>

/**
 * main - prints the first 98 fibonaci sequences
 * Return: 0
 */

int main(void)
{
	int a = 1, b = 2;

	printf("%d, %d, ", a, b);

	int count = 2;

	while (count < 98)
	{

	int c = a + b;

	printf("%d, ", c);

	a = b;
	b = c;

	count++;
	}
	printf("\n");

	return (0);
}
