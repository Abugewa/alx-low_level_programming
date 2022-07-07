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

	for (i = 1; i <= 100; i++)
	{
		if(i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if ((i % 3 == 0) && (i % 5 ==0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			if (i == 100)
			{
				printf("%d", i);
			}
			else
			{
				printf("%d ", i);
			}
		}
	}
	putchar(10);
	return (0);
}
