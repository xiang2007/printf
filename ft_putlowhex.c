/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlowhex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshou-xi <wshou-xi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 11:23:30 by wshou-xi          #+#    #+#             */
/*   Updated: 2025/06/14 18:30:18 by wshou-xi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putlowhex(unsigned int nbr)
{
	char	*lowhex;
	int		index;

	index = 0;	
	lowhex = malloc(sizeof(char *) * 17);
	lowhex = "0123456789abcdef";
	if (nbr >= 16)
	{
		ft_putlowhex(nbr / 16);
		index++;
	}
	write(1, &lowhex[nbr % 16], 1);
	return (index);
}