/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 22:12:30 by imatouil          #+#    #+#             */
/*   Updated: 2024/11/19 12:43:14 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putaddress(void *ptr)
{
	unsigned long	nb;
	static int		res;
	char			*base;

	nb = (unsigned long)ptr;
	base = "0123456789abcdef";
	res = 0;
	if (!ptr)
		return (write(1, "0x0", 3));
	if (nb < 16)
		res += write(1, "0x", 2);
	if (nb >= 16)
		ft_putaddress((void *)(nb / 16));
	res += ft_putchar(base[nb % 16]);
	return (res);
}
