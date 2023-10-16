#include <stdarg.h>
#include "main.h"

/**
 * controlstr - Handle a single format specifier
 * @format: The format specifier
 * @args: The va_list of arguments
 * @numbers: Pointer to the count of characters printed
 */

void controlstr(const char *format, va_list args, int *numbers)
{
	char buffer[20];

	if (format == NULL)
		return;

	if (*format == 'c')
		(*numbers) += simputchar(va_arg(args, int));
	else if (*format == 's')
	{
		char *s = va_arg(args, char *);

		s = s ? s : "(null)";
		(*numbers) += simputs(s);
	}
	else if (*format == 'i' || *format == 'd')
	{
		snprintf(buffer, sizeof(buffer), "%d", va_arg(args, int));
		(*numbers) += simputs(buffer);
	}
	else if (*format == 'u' || *format == 'o' || *format == 'x' || *format == 'X')
	{
		snprintf(buffer, sizeof(buffer),
		(*format == 'u') ? "%u" :
		((*format == 'o') ? "%o" :
		((*format == 'x') ? "%x" : "%X")),
		va_arg(args, unsigned int));
		(*numbers) += simputs(buffer);
	}
	else if (*format == '%')
		(*numbers) += simputchar('%');
	else
	{
		(*numbers) += simputchar('%');
		(*numbers) += simputchar(*format);
	}
}
