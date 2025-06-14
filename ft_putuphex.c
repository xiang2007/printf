/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuphex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshou-xi <wshou-xi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 15:42:55 by wshou-xi          #+#    #+#             */
/*   Updated: 2025/06/14 18:28:32 by wshou-xi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuphex(unsigned int nbr)
{
	char	*uphex;
	int		index;

	index = 0;
	uphex = malloc(sizeof(char *) * 17);
	uphex = "0123456789ABCDEF";
	if (nbr >= 16)
	{
		ft_putuphex(nbr / 16);
		index++;
	}
	write(1, &uphex[nbr % 16], 1);
	return (index);
}