#include "main.h"

int _printf(const char *format, ...);
int print_character(va_list list);
int print_string(va_list list);
int print_percent(va_list list);
int print_integer(va_list list);

/**
 * _printf - program startup
 * @format: char being evaluated
(*
 * Description: produces output according to a format)?
 * https://www.tutorialspoint.com/register-keyword-in-c
 * Return: printed_values
 */

int _printf(const char *format, ...)
{
	int printed_values;
	const char *x;
	register int string = 0;

	print_t f_list[] = {
		{"c", print_character},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};

	va_list arg_list;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(arg_list, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (x = format; *x; x++)
	{
		if (*x == '%')
		{
			x++;
			if (*x == '%')
			{
				string += _not_putchar('%');
				continue;
			}
			while (print_t(*x, &printed_values))
				x++;
			pfunc = printed_values(*x);
		}
		else 
			string += _not_putchar(*x);
	}
	_not_putchar(-1);
	va_end(arg_list);
	return (printed_values);
}

/**
 * print_character - program startup
 * @list: variable argument being evaluated
(*
 * Description: character output)?
 * Return: return (1) is the required function signature
 */

int print_character(va_list list)
{
	_not_putchar(va_arg(list, int));
	return (1);
}

/**
 * print_string - program startup
 * @list: variable argument being evaluated
(*
 * Description: string output)?
 * Return: x
 */

int print_string(va_list list)
{
	int x;
	char *string;

	string = va_arg(list, char *);

	if (string == NULL)
	{
		string = "(null)";
	}

	for (x = 0; string[x] != '\0'; x++)
	{
		_not_putchar(string[x]);
	}

	return (x);
}

/**
 * print_percent - program startup
 * @list: variable argument being evaluated
(*
 * Description: percent output)?
 * Return: return (1) is the required function signature
 */

int print_percent(__attribute__((unused))va_list list)
{
	_not_putchar('%');
	return (1);
}

/**
 * print_integer - program startup
 * @list: variable argument being evaluated
(*
 * Description: integer output)?
 * Return: return (1) is the required function signature
 */

int print_integer(va_list list)
{
	int number;

	number = /**print_number*/
	return (number);
}
