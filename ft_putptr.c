/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:25:29 by fbendnan          #+#    #+#             */
/*   Updated: 2025/11/12 08:18:45 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static char	*ft_convertbase(unsigned long long nb, char *base)
{
	char	*str;
	size_t	base_len;
	size_t	nb_len;

	base_len = ft_strlen(base);
	nb_len = ft_nblenbase(nb, base_len);
	str = ft_calloc((nb_len + 1), sizeof(char));
	if (!str)
		return (NULL);
	while (nb_len)
	{
		nb_len--;
		str[nb_len] = base[nb % base_len];
		nb /= base_len;
	}
	return (str);
}

static void	ft_puthex_1(unsigned long long hex, char *base, size_t *count)
{
	char	*str;

	str = ft_convertbase(hex, base);
	ft_putstr(str, count);
	free(str);
}

void	ft_putptr(void *p, size_t *count)
{
	unsigned long long	adress;

	adress = (unsigned long long)p;
	if (!p)
	{
		ft_putstr("(nil)", count);
		return ;
	}
	ft_putstr("0x", count);
	ft_puthex_1(adress, "0123456789abcdef", count);
}
