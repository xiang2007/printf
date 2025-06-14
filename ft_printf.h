/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 18:37:31 by marvin            #+#    #+#             */
/*   Updated: 2025/06/10 18:37:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H


#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c);
size_t	ft_strlen(const char *str);
void	ft_putstr(const char *c);
int		ft_isprint(int c);
char	*ft_itoa(int n);
void	ft_putdec(float nbr);
void	ft_putint(int nbr);
int		ft_count(int n);
void	ft_putlowhex(unsigned int nbr);
void	ft_putuphex(unsigned int nbr);
void	ft_printpercent();

#endif