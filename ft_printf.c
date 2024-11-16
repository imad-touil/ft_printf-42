/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:54:07 by imatouil          #+#    #+#             */
/*   Updated: 2024/11/16 10:21:03 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

#include "libftprintf.h"

int ft_printf(const char *format, ...)
{
	int		i;
	va_list list;
	va_start(list, format);

	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			if (format[i] == 'c')
				ft_putchar(va_arg(list, char));
			else if (format[i] == 's')
				ft_putstr(va_arg(list, char *));
			else if (format[i] == 'p')
				ft_putchar(va_arg(list, char));
			else if (format[i] == 'd')
				ft_putchar(va_arg(list, char));
			else if (format[i] == 'i')
				ft_putchar(va_arg(list, char));
			else if (format[i] == 'u')
				ft_putchar(va_arg(list, char));
			else if (format[i] == 'x')
				ft_putchar(va_arg(list, char));
			else if (format[i] == 'X')
				ft_putchar(va_arg(list, char));
			else if (format[i] == '%')
				write(1, '%', 1);
		}
		else
			write(1, &format[i], 1);
		i++;
	}
	va_end(list);
	return (i);
}
int	main()
{
	ft_printf("Hello %cunny World\n", 'F');
}