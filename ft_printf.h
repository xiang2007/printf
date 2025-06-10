#ifndef FT_PRINTF_H
# define FT_PRINTF_H


#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

size_t	ft_strlen(const char *str);
int	ft_signs(char sign, char *str);
void	ft_putchars(char c);

#endif