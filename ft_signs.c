/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_signs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshou-xi <wshou-xi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:32:43 by wshou-xi          #+#    #+#             */
/*   Updated: 2025/06/14 18:39:01 by wshou-xi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_signs(char signs, char *strings)
{
	if (!signs)
		return (0);
	if (signs == 'c')
		return (ft_putstr(strings));
	if (signs == 'd' || signs == 'i')
		return (ft_putint(strings));
	if (signs == 'u')
		return (ft_putdec(strings));
	if (signs == 'x')
		return (ft_putlowhex(strings));
	if (signs == 'X')
		return (ft_putuphex(strings));
	if (signs == '%')
		return (ft_printpercent());
}