/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuphex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshou-xi <wshou-xi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 15:42:55 by wshou-xi          #+#    #+#             */
/*   Updated: 2025/06/14 15:46:15 by wshou-xi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuphex(unsigned int nbr)
{
	char	*uphex;
	
	uphex = malloc(sizeof(char *) * 17);
	uphex = "0123456789ABCDEF";
	if (nbr >= 16)
		ft_putuphex(nbr / 16);
	write(1, &uphex[nbr % 16], 1);
}