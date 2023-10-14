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
	char *s;
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			putchar(*format);
			count++;
		} else
		{
			format++;
			if (*format == '\0')
			{
				break;
			}
			switch (*format)
			{
				case 'c':
					putchar(va_arg(args, int));
					count++;
					break;
				case 's':
					s = va_arg(args, char *);
					while (*s)
					{
						putchar(*s);
						count++;
						s++;
					}
					break;
				case '%':
					putchar('%');
					count++;
					break;
			}
		}
		format++;
	}
	va_end(args);
	return (count);
}
