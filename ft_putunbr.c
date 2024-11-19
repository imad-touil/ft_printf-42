/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:54:47 by imatouil          #+#    #+#             */
/*   Updated: 2024/11/19 12:44:18 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int nbr)
{
	int	res;

	res = 0;
	if (nbr > 9)
		res += ft_putnbr(nbr / 10);
	res += ft_putchar(nbr % 10 + 48);
	return (res);
}
