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

static int	count(int n);

void	ft_putnbr(int nbr)
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
	size = count(nbr);
	dest = (char *)malloc(count(nbr));
	if (!dest)
		return ;
	dest = ft_itoa(nbr);
	while (index < size)
	{
		write(1, &dest[index], 1);
		index++;
	}
}

static int	count(int n)
{
	int	size;

	size = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}