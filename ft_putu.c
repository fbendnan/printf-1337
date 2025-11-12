/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:25:23 by fbendnan          #+#    #+#             */
/*   Updated: 2025/11/12 08:23:48 by fbendnan         ###   ########.fr       */
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

void	ft_putu(unsigned int nb, size_t *count)
{
	char	*str;

	str = ft_convertbase(nb, "0123456789");
	ft_putstr(str, count);
	free(str);
}
