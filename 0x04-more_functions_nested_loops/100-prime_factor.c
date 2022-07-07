#include <stdio.h>

/**
 * main - largest prime number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, num;

	num = 612852475143;
	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			num /= i;
			i--;
		}
	}
	printf("%ld\n", i);
	return (0);
}
