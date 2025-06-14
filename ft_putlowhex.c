/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlowhex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshou-xi <wshou-xi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 11:23:30 by wshou-xi          #+#    #+#             */
/*   Updated: 2025/06/14 15:40:09 by wshou-xi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putlowhex(unsigned int nbr)
{
	char	*lowhex;
	
	lowhex = malloc(sizeof(char *) * 17);
	lowhex = "0123456789abcdef";
	if (nbr >= 16)
		ft_putlowhex(nbr / 16);
	write(1, &lowhex[nbr % 16], 1);
}