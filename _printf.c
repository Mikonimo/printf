#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
 * _printf - produces output according to a format
 * @format: specifies how to print the output
 *
 * Return: numbers of character printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list arg;
	char c;

	va_start(arg, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;
			switch (*format)
			{
				case '%':
					c = '%';
					write(1, &c, 1);
					count++;
					break;
				case 's':
					print_string(va_arg(arg, char *));
					count++;
					break;
				case 'c':
					print_char(va_arg(arg, int));
					count++;
					break;
				case 'd':
					print_int(va_arg(arg, int));
					count++;
					break;
				default:
					write(1, format - 1, 2);
					count += 2;
					break;
			}
		} else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_end(arg);
	return (count);
}
