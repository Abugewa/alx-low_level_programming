#include<stdio.h>

/**
 * main -sum of even fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a, b, nxt, sum;

	a = 1;
	b = 2;
	nxt = sum = 0;
	while (nxt <= 4000000)
	{
		nxt = a + b;
		a = b;
		b = nxt;
		if (a % 2 == 0)
		{
			sum += a;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
