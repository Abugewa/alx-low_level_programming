#include <stdio.h>

/**
 * main - prints its name then a new line
 * @argc: number of command line arguements
 * @argv: array of programcommand line arguements
 *
 * Return: 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
