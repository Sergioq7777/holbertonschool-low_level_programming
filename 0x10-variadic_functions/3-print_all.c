#include "variadic_functions.h"

/**
 * print_all - prints anything.
 *@format: string.
 *
 *
 * Return: Empty .
 */

void print_all(const char * const format, ...)
{

	va_list argumentos;
	int contador = 0;
	char  *strg, *spc;

	va_start(argumentos, format);

	while (format[contador] && format)
	{
		spc = "";
		if (format[contador + 1])
			spc = ", ";

		switch (format[contador])
		{
		case 'c':
			printf("%c%s", (char) va_arg(argumentos, int), spc);
			break;
		case 'i':
			printf("%d%s", va_arg(argumentos, int), spc);
			break;
		case 'f':
			printf("%f%s", va_arg(argumentos, double), spc);
			break;
		case 's':
			strg = va_arg(argumentos, char *);
			if (strg == NULL)
				strg = "(nil)";

			printf("%s%s", strg, spc);
			break;
		default:
			break;
		}
		contador++;
	}
	va_end(argumentos);
	printf("\n");
}
