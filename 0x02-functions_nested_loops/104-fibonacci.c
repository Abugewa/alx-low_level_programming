#include<stdio.h>
/**
 * main - prints first 98 fibonacci numbers
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int c;
	long int a, b, nxt;

	a = 1;
	b = 2;
	printf("%ld, %ld", a, b);
	for (c = 0; c < 96; c++)
	{
		/**if (boolean)
		{ */
			nxt = a + b;
			printf(", %ld", nxt);
			a = b;
			b = nxt;
	}
	printf("\n");
	}	
