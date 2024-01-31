#include "main.h"
/**
 *_printf - my own printf
 *@format: specifiers
 *Return: returns
 */
int _printf(const char *format, ...)
{
	int num_args, i;
	char *str;
	va_list args;

	i = 0;
	num_args = _strlen(format);

	va_start(args, format);

	while (i < num_args)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				_putchar(va_arg(args, int));
			}
			if (format[i] == 's')
			{
				str = va_arg(args, char *);
				while (*str != '\0')
				{
					_putchar(*str);
					str++;
				}
			}
			if (format[i] == '%')
				_putchar('%');
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}

	va_end(args);
	return (0);
}
