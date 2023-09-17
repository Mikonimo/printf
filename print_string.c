#include "main.h"
#include <unistd.h>
/**
 * print_string - prints string to stdout
 * @str: string to be printed
 *
 * Return: 0 on success
 */
int print_string(char *str)
{
	return (write(1, str, _strlen(str)));
}
