#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void);
void print_alphabet_x10(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		 print_alphabet();
	}
	_putchar('\n');
}
