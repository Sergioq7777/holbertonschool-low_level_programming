#include "variadic_functions.h"

/**
 * print_all - prints anything.
 *@char: const.
 *@format: const.
 *
 *If the string is NULL, print (nil)
 * 2 while loops.
 * 2 if.
 * Just maximum 9 variables.
 * Print new line  at the end of the function.
 *
 * Return: nule .
 */

void print_all(const char * const format, ...)


void
foo(char *fmt, ...)
{
    va_list ap;
    int d;
    char c, *s;

   va_start(ap, fmt);
    while (*fmt)
        switch (*fmt++) {
        case 's':              /* string */
            s = va_arg(ap, char *);
            printf("string %s\n", s);
            break;
        case 'd':              /* int */
            d = va_arg(ap, int);
            printf("int %d\n", d);
            break;
        case 'c':              /* char */
            /* need a cast here since va_arg only
               takes fully promoted types */
            c = (char) va_arg(ap, int);
            printf("char %c\n", c);
            break;
        }
    va_end(ap);
}
