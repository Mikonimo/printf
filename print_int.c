#include "main.h"
#include <unistd.h>
/**
 * print_int - prints an integer to stdout
 * @num: integer to be printed
 *
 * Return: int
 */
int print_int(int num)
{
	char buffer[20];
	int i = 0;
	int j;
	int count = 0;

	if (num == 0)
		count += print_char('0');
	if (num < 0)
	{
		count += print_char('-');
		num = -num;
	}
	while (num > 0)
	{
		buffer[i++] = '0' + (num % 10);
		num /= 10;
	}
	for (j = i - 1; j >= 0; j--)
		count += print_char(buffer[j]);
	return (count);


}
