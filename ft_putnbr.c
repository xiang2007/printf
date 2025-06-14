/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 19:12:11 by marvin            #+#    #+#             */
/*   Updated: 2025/06/10 19:12:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putint(int nbr)
{
	char 	*dest;
	int		index;
	int		size;

	index = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		write(1, "-", 1);
	}
	if (nbr == -2147483648)
		write(1, "-2147483648", 12);
	size = ft_count(nbr);
	dest = (char *)malloc(ft_count(nbr));
	if (!dest)
		return (0);
	dest = ft_itoa(nbr);
	while (index < size)
	{
		write(1, &dest[index], 1);
		index++;
	}
	return (size);
}