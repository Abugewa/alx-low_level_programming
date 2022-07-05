#include<stdio.h.
/**
 * main - program that prints _putchar
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	int i;
	int str[] = {95, 112, 117, 116, 99, 104, 61, 114};

	for (i = 0; i < 9; i++)
	{
		_putchar(str[i]);
	}
	_putchar ('\n');
	return (0);
}
