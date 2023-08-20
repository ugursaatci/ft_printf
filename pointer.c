/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisaatci <uisaatci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 10:10:31 by uisaatci          #+#    #+#             */
/*   Updated: 2023/08/20 10:10:31 by uisaatci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pointer(unsigned long int n)
{
	int	sayac;

	sayac = 0;
	if (n <= 15)
	{
		sayac += write(1, &"0123456789abcdef"[n], 1);
		return (sayac);
	}
	else
	{
		sayac += pointer(n / 16);
		sayac += pointer(n % 16);
	}
	return (sayac);
}

int	pointerx(unsigned int n)
{
	int	sayac;

	sayac = 0;
	if (n <= 15)
	{
		sayac += write(1, &"0123456789abcdef"[n], 1);
		return (sayac);
	}
	else
	{
		sayac += pointerx(n / 16);
		sayac += pointerx(n % 16);
	}
	return (sayac);
}

int	upper_pointerx(unsigned int n)
{
	int	sayac;

	sayac = 0;
	if (n <= 15)
	{
		sayac += write(1, &"0123456789ABCDEF"[n], 1);
		return (sayac);
	}
	else
	{
		sayac += upper_pointerx(n / 16);
		sayac += upper_pointerx(n % 16);
	}
	return (sayac);
}
