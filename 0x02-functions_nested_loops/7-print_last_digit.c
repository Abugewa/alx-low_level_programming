#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @num:input number
 *
 * Return: the value of the last digit
 */
int print_last_digit(int num)
{
  int last;
  
  last = num % 10;
  if (last < 0)
    {
      _putchar(-last + 48);
      return (-last);
    }
  else
    {
      _putchar(last + 48);
      return (last);
    }
}
