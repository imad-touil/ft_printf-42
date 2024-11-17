/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 02:35:31 by imatouil          #+#    #+#             */
/*   Updated: 2024/11/17 14:51:17 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	int	res;

	res = 0;
	if (nbr == -2147483648)
		return (write(1, "-2147483648", 11));
	if (nbr < 0)
	{
		res += write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr > 9)
		res += ft_putnbr(nbr / 10);
	res += ft_putchar(nbr % 10 + 48);
	return (res);
}
// int	main()
// {
// 	int	x = ft_putnbr(10);
// 	printf("\n%d", x);
// }