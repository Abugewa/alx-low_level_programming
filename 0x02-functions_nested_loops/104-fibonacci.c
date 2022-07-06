#include<stdio.h>
/**
 * main - prints first 98 fibonacci numbers
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i, bool1, bool2;
	long int a, b, nxt, a1, b1, nxt1;

	a = 1;
	b = 2;
	bool1 = bool2 = 1;
	printf("%ld, %ld", a, b);
	for (i = 0; i < 96; i++)
	{
		if (bool1)
		{
		nxt = a + b;
		printf(", %ld", nxt);
		a = b;
		b = nxt;
		}
		else
		{
			if (bool2)
			{
				a1 = a % 1000000000;
				b1 = b % 1000000000;
				a = a / 1000000000;
				b = b / 1000000000;
				bool2 = 0;
			}
			nxt1 = (a1 + b1);
			nxt = a + b + (nxt1 / 1000000000);
			printf(", %ld", nxt);
			printf("%ld", nxt1 % 1000000000);
			a = b;
			a1 = b1;
			b = nxt;
			b1 = (nxt1 % 1000000000);
		}
		if (((a + b) < 0) && bool1 == 1)
			bool1 = 0;
	}
	printf("\n");
	return (0);
}
