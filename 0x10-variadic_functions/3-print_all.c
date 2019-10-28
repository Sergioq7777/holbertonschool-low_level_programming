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
	char  *strg;

	va_start(argumentos, format);

	while (format[contador] && format)
	{
		switch (format[contador])
		{
		case 'c':
			printf("%c", va_arg(argumentos, int));
			break;
		case 'i':
			printf("%d", va_arg(argumentos, int));
			break;
		case 'f':
			printf("%f", va_arg(argumentos, double));
			break;
		case 's':
			strg = va_arg(argumentos, char *);
			if (strg == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", strg);
			break;
		default:
			contador++;
			continue;
		}
		if (contador < format[contador + 1])
			printf(", ");
		contador++;
	}
	printf("\n");
	va_end(argumentos);
}
