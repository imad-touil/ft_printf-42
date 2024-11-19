/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 20:40:06 by imatouil          #+#    #+#             */
/*   Updated: 2024/11/19 15:57:54 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putaddress(void *ptr);
int		ft_putnbr(int nbr);
int		ft_putunbr(unsigned int nbr);
int		ft_puthexadecimal(unsigned int nb, char cas);
void	*ft_memchr(const void *s, int c, size_t n);

#endif