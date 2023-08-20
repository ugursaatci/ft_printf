/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbru.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisaatci <uisaatci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 10:10:28 by uisaatci          #+#    #+#             */
/*   Updated: 2023/08/20 10:10:28 by uisaatci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_writes(unsigned int a, unsigned int sayac)
{
	char	b;

	b = a + '0';
	sayac += write(1, &b, 1);
	return (sayac);
}

unsigned int	nbru(unsigned int nbr)
{
	unsigned int	sayac;

	sayac = 0;
	if (nbr < 10)
	{
		sayac += ft_writes(nbr, sayac);
		return (sayac);
	}
	else if (nbr > 9)
	{
		sayac += nbru(nbr / 10);
		sayac += nbru(nbr % 10);
	}
	return (sayac);
}
