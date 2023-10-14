#include "main.h"
int parse_and_output(const char *format, ...);
/**
 * _printf - Entry point
 * @format: const param for char
 * Return: int
*/
int _printf(const char *format, ...)
{
	int count = 0;

	if (format == NULL)
		return (-1);
	count = parse_and_output(format);
	return (count);
}
/**
 * parse_and_output - Entry point
 * @format: const param for char
 * Return: int
*/
int parse_and_output(const char *format, ...)
{
	int count = 0;
	int c;
	char *much;
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				c = va_arg(args, int);
				_putchar(c);
				count++;
			}
			else if (*format == 's')
			{
				much = va_arg(args, char *);
				while (*much)
				{
					_putchar(*much);
					count++;
					much++;
				}
				count += count;
			} else if (*format == '%')
			{
				_putchar('%');
			}
		} else
		{
			_putchar(*format);
			count += 1;
		}
		format++;
	}
	va_end(args);
	return (count);
}
