/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uisaatci <uisaatci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 10:10:18 by uisaatci          #+#    #+#             */
/*   Updated: 2023/08/20 10:10:18 by uisaatci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int				ft_printf(const char *str, ...);
int				nbra(int nbr);
int				pointer(unsigned long int n);
int				putchara(int a);
int				str(char *str);
int				pointerx(unsigned int n);
int				upper_pointerx(unsigned int n);
unsigned int	nbru(unsigned int nbr);

#endif