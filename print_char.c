#include "main.h"
#include <unistd.h>
/**
 * print_char - prints a char to stdout
 * @c: char to be printed
 *
 * Return: char
 */
int print_char(char c)
{
	return (write(1, &c, 1));
}
