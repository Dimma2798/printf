#include "main.h"
/**
 * simprintf - Formats and prints data to a string
 * @str: The string buffer to write to
 * @format: The format string
 *
 * Return: The number of characters written to the buffer, excluding the null
 * byte, or -1 if an unsupported conversion specifier was encountered
 */
int simprintf(char *str, const char *format, ...)
{
	va_list args;
	int num, written = 0, q = 0;
	char *s;

	if (str == NULL)
		return (-1);
	if (format == NULL)
	{
		str[0] = '\0';
		return (0);
	}
	va_start(args, format);
	while (format[q])
	{
		if (format[q] == '%')
		{
			q++;
			switch (format[q])
			{
				case 'd':
				case 'i':
					num = va_arg(args, int);
					written += simpprintf(str + written, 128, "%d", num);

				break;
				case 's':
					s = va_arg(args, char *);
					written += simpprintf(str + written, 128, "%s", s);
				break;
				default:

				return (-1);
			}
		}
else
			str[written++] = format[q];
		q++;	}
	str[written] = '\0';
	va_end(args);
	return (written);
}
