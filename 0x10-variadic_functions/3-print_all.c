#include "variadic_functions.h"

/**
 * print_all - prints anything.
 *@format: const.
 *
 *If the string is NULL, print (nil)
 * 2 while loops.
 * 2 if.
 * Just maximum 9 variables.
 * Print new line  at the end of the function.
 *
 * Return: none .
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
		{
			spc = ", ";
		}

		switch (format[contador])
		{

		case 's':/**char* */
			strg = va_arg(argumentos, char*);
			if (!strg)
				strg = "(nil)";

				printf("%s%s", strg, spc);
				break;

		case 'c':/**char */
			printf("%c%s", va_arg(argumentos, int), spc);
			break;
		case 'i':/**integer */
			printf("%d%s", va_arg(argumentos, int), spc);
			break;
		case 'f':/**float */
			printf("%f%s", va_arg(argumentos, double), spc);
			break;
		}
		contador++;
	}
	va_end(argumentos);
	printf("\n");
}
