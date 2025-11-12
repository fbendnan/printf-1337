/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:25:04 by fbendnan          #+#    #+#             */
/*   Updated: 2025/11/12 08:16:50 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	ft_format(va_list ap, char *str, size_t *count)
{
	if (*str == 'c')
		ft_putchar(va_arg(ap, int), count);
	else if (*str == 's')
		ft_putstr(va_arg(ap, char *), count);
	else if (*str == 'i' || *str == 'd')
		ft_putnbr(va_arg(ap, int), count);
	else if (*str == 'p')
		ft_putptr(va_arg(ap, void *), count);
	else if (*str == 'u')
		ft_putu(va_arg(ap, unsigned int), count);
	else if (*str == 'x' || *str == 'X')
	{
		if (*str == 'x')
			ft_puthex(va_arg(ap, unsigned int),
				"0123456789abcdef", count);
		if (*str == 'X')
			ft_puthex(va_arg(ap, unsigned int),
				"0123456789ABCDEF", count);
	}
	else if (*str == '%')
		ft_putchar(*str, count);
}

int	ft_printf(char *format, ...)
{
	va_list	ap;
	size_t	count;

	count = 0;
	if (!format)
		return (-1);
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			ft_format(ap, format, &count);
		}
		else
			ft_putchar(*format, &count);
		format++;
	}
	va_end(ap);
	return (count);
}
