#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 *
 * @num:input number
 *
 * Return: absolute value
 */
int _abs(int num)
{
	if(num > 0)
	{
		return (num);
	}
	else
	{
		return (num * -1);
	}
}
