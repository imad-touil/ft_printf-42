/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 20:39:44 by imatouil          #+#    #+#             */
/*   Updated: 2024/11/19 15:56:39 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	helper(const char *format, int i, va_list args)
{
	int	res;

	res = 0;
	if (ft_memchr("cspdiuxX%", format[i], sizeof("cspdiuxX%")))
	{
		if (format[i] == 'c')
			res += ft_putchar(va_arg(args, int));
		else if (format[i] == 's')
			res += ft_putstr(va_arg(args, char *));
		else if (format[i] == 'p')
			res += ft_putaddress(va_arg(args, void *));
		else if (format[i] == 'd' || format[i] == 'i')
			res += ft_putnbr(va_arg(args, int));
		else if (format[i] == 'u')
			res += ft_putunbr(va_arg(args, unsigned int));
		else if (format[i] == 'X')
			res += ft_puthexadecimal(va_arg(args, unsigned int), 'u');
		else if (format[i] == 'x')
			res += ft_puthexadecimal(va_arg(args, unsigned int), 'l');
		else if (format[i] == '%')
			res += write(1, "%", 1);
	}
	else
		return (write(1, &format[i], 1));
	return (res);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		res;

	i = 0;
	res = 0;
	if ((write(1, "Hi", 0) == -1))
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			res += helper(format, i, args);
		}
		else if (format[i] != '%')
			res += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (res);
}
