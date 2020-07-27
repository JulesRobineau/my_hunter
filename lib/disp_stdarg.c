/*
** EPITECH PROJECT, 2017
** disp_stdarg.c
** File description:
** my_printf
*/

#include <stdarg.h>
#include "include/my.h"

int	disp_stdarg(char *s, ...)
{
	va_list ap;
	va_start(ap, s);
	int i = 0;
	int j = 0;

	while (i < my_strlen(s)) {
		if (s[j] == 's')
			my_putstr(va_arg(ap, char*));
		if (s[j] == 'i')
			my_put_nbr(va_arg(ap, int));
		if (s[j] == 'c')
			my_putchar(va_arg(ap, int));
		my_putchar('\n');
		i++;
		j++;
	}
	va_end(ap);
	return (0);
}/*
int	main()
{
	disp_stdarg("csiis", 'X', "hi", -3, 10, "plop");
	return (0);
}*/
