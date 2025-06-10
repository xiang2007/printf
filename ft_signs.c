#include "ft_printf.h"

int	ft_signs(char sign, char *str)
{
	if (!sign)
		return (0);
	if (sign == 'c')
		ft_putchars(*str += 2);
	if (sign == 's')
		return (2);
	if (sign == 'p')
		return (3);
	if (sign == 'd')
		return (4);
	if (sign == 'i')
		return (5);
	if (sign == 'u')
		return (6);
	if (sign == 'x')
		return (7);
	if (sign == 'X')
		return (8);
	if (sign == 'X')
		return (9);
	else
	{
		return (0);
	}
}