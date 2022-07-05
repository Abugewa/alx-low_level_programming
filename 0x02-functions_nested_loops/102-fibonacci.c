#include<stdio.h>
/**
 * main - first 50 fibonacci numbers
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;
	long int a, b, nxt;

	a = 1;
	b = 2;
	printf("%ld, %ld", a, b);
	for (i = 0; i < 48; i++)
	{
		nxt = a + b;
		printf(", %ld", nxt);
		a = b;
		b = nxt;
	}
	printf("\n");
	return (0);
}
