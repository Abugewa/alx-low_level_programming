#include<stdio.h>

/**
 * main - fizzbuzz test
 * print numbers 1 - 100
 * replace multiples of 3 with Fizz,
 * multples of 5 with Buzz,
 * multiples of both with FizzBuzz
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 1;
	printf("%d", i);
	for (i = 2; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
	       	{
			printf(" FizzBuzz");
		}	
		else if(i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
