#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
int _putchar(char c);
int _printf(const char *format, ...);
int _print_int(const char *format, ...);
int print_address(va_list l, flags_t *f)
#endif