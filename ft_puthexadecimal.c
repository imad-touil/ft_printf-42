/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexadecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:53:28 by imatouil          #+#    #+#             */
/*   Updated: 2024/11/19 12:43:51 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexadecimal(unsigned int nb, char cas)
{
	static int		res;
	char			*lowbase;
	char			*uppbase;

	lowbase = "0123456789abcdef";
	uppbase = "0123456789ABCDEF";
	res = 0;
	if (cas == 'l')
	{
		if (nb >= 16)
			ft_puthexadecimal((nb / 16), 'l');
		res += ft_putchar(lowbase[nb % 16]);
	}
	else if (cas == 'u')
	{
		if (nb >= 16)
			ft_puthexadecimal((nb / 16), 'u');
		res += ft_putchar(uppbase[nb % 16]);
	}
	return (res);
}
