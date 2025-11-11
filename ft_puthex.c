/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:25:36 by fbendnan          #+#    #+#             */
/*   Updated: 2025/11/11 22:51:22 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static  char	*ft_convertbase(unsigned int nb, char *base)
{
	char	*str;
	size_t	base_len;
	size_t	nb_len;

	base_len = ft_strlen(base);
	nb_len = ft_nblenbase(nb, base_len);
	str = ft_calloc((nb_len + 1), sizeof(char));
	if(!str)
		return(NULL);
	while (nb_len)
	{
		nb_len--;
		str[nb_len] = base[nb % base_len];
		nb /= base_len;
	}
	return (str);
}

void	ft_puthex(unsigned int hex, char* base, size_t *count)
{
	char*	str;

	str = ft_convertbase(hex, base);
	ft_putstr(str, count);
	free(str);
}
