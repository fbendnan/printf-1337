/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helpers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:25:09 by fbendnan          #+#    #+#             */
/*   Updated: 2025/11/12 08:10:04 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	if (!s)
		return ;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			totalsize;

	if ((nmemb != 0) && (size > SIZE_MAX / nmemb))
		return (NULL);
	totalsize = nmemb * size;
	ptr = malloc(totalsize);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, totalsize);
	return (ptr);
}

size_t	ft_nblenbase(unsigned long long nb, size_t base_len)
{
	size_t	len;

	len = 1;
	while (nb >= base_len)
	{
		nb = nb / base_len;
		len++;
	}
	return (len);
}
