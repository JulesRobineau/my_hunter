/*
** EPITECH PROJECT, 2017
** sum_stdarg.c
** File description:
** my_printf
*/

#include <stdarg.h>
#include "include/my.h"

int	sum_stdarg(int i, int nb, ...)
{
	int som = 0;
	int k = 0;
	va_list ap;
	va_start(ap, nb);
	int c = 0;

	if (i >= 0 && i <= 1) {
		while (k < nb) {
			if (i == 0)
				c = va_arg(ap, int);
			if (i == 1)
				c = my_strlen(va_arg(ap, char*));
			som += c;
			k++;
		}
		va_end(ap);
		return (som);
	}
	return (84);
}/*
int	main()
{
	my_put_nbr(sum_stdarg(1, 5, "Hello", "a", "toto", "", "plop"));
	my_putchar('\n');
	my_put_nbr(sum_stdarg(0, 3, 1, 2, 3));
	my_putchar('\n');
	return (0);
}*/
