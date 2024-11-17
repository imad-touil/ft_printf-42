/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 20:39:44 by imatouil          #+#    #+#             */
/*   Updated: 2024/11/17 14:30:59 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		res;

	i = 0;
	res = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			if (format[i] == 'c')
				res += ft_putchar(va_arg(args, int));
			else if (format[i] == 's')
				res += ft_putstr(va_arg(args, char *));
			else if (format[i] == 'p')
				res += ft_putaddress(va_arg(args, void *));
			else if (format[i] == 'd' || format[i] == 'i')
				res += ft_putnbr(va_arg(args, int));
		}
		else
			res += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (res);
}
// #include <stdio.h>

// int	main()
// {
// 	// char *s1 = "Funny";
// 	// char *s2 = "World";
// 	// int	x = printf("Hello %s %s\n", s1, s2);
// 	// int	y = ft_printf("Hello %s %s\n", s1, s2);
// 	// int	y = ft_printf("Hello %cunny %corld\n", 'f', 'W');
// 	// printf("%d |-| %d\n", x, y);
// 	int x = ft_printf("tets%p\n", 1337);
// 	printf("%d\n", x);
// 	int y = printf("tets%p\n", 1337);
// 	printf("%d\n", y);
// }