#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *fmt = format;
	char c, *s;
	int i;
	float f;

	va_start(args, format);
	while (*fmt)
	{
		switch (*fmt)
		{
			case 'c':
				c = (char) va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float) va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s != NULL)
				{
					printf("%s", s);
				}
				else
				{
					printf("(nil)");
				}
				break;
		}
		fmt++;
		if (*fmt && (*fmt == 'c' || *fmt == 'i' || *fmt == 'f' || *fmt == 's'))
		{
			printf(", ");
		}
	}
	va_end(args);
	printf("\n");
}
