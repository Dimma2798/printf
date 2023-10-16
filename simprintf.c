#include "main.h"

int _printf(const char *format, ...);

/**
 * _printf - produces output according to a format
 * @format: Character string that directs the format of the output
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	char buffer[20];
	int numbers = 0, q = 0;

	va_start(args, format);
	while (format[q])
	{
		if (format[q] == '%' && format[q + 1])
		{
			q++;
			if (format[q] == 'c')
				numbers += simputchar(va_arg(args, int));
			else if (format[q] == 's')
			{
				char *s = va_arg(args, char *);

				if (s == NULL)
					s = "(null)";

				numbers += simputs(s);
			}
			else if (format[q] == 'i' || format[q] == 'd')
			{
				snprintf(buffer, sizeof(buffer), "%d", va_arg(args, int));
				numbers += simputs(buffer);
			}
			else if (format[q] == '%')
				numbers += simputchar('%');
			else
			{
				numbers += simputchar('%');
				numbers += simputchar(format[q]);
			}
		}
		else
			numbers += simputchar(format[q]);
		q++;
	}

	va_end(args);
	return (numbers);
}
