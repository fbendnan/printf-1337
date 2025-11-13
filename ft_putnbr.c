/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:25:33 by fbendnan          #+#    #+#             */
/*   Updated: 2025/11/11 21:25:34 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putnbr(int n, size_t *count)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			*count += 11;
			write(1, "-2147483648", 11);
			return ;
		}
		else
		{
			(*count)++;
			write(1, "-", 1);
			n = -n;
		}
	}
	if (n > 9)
		ft_putnbr(n / 10, count);
	ft_putchar((n % 10 + '0'), count);
}
