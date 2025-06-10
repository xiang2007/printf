#include "ft_printf.h"

void	ft_putchars(char *c)
{
	write(1, &c[0], 1);
	printf("%c\n",c[0]);
}