#include "ft_printf.h"

#include <stdio.h>
#include <stddef.h>

int	ft_printf(const char *fmt, ...)
{
	va_list args;
	int		i;
	int		size;
	char	*str;

	va_start(args,fmt);
	i = 0;
	size = ft_strlen(fmt);
	str = va_arg(args, char *);
	while (i < size)
	{
		while (fmt[i] != '%')
		{
			write(1, &fmt[i], 1);
			i++;
		}
		if (fmt[i] == '%')
			printf("%d\n",ft_signs(fmt[i + 1],str));
		return (0);
	}
	return (0);
}

int	main()
{
	printf("%d",ft_printf("%c","c"));
}