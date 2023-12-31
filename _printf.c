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
					count += print_char('%');
					break;
				case 's':
					count += print_string(va_arg(arg, char *));
					break;
				case 'c':
					count += print_char(va_arg(arg, int));
					break;
				case 'd':
					count += print_int(va_arg(arg, int));
					break;
				case 'i':
					count += print_int(va_arg(arg, int));
					break;
				default:
					write(1, format - 1, 2);
					count += 2;
					break;
			}
		} else
			count += write(1, format, 1);
		format++;
	}
	va_end(arg);
	return (count);
}
