/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:25:26 by fbendnan          #+#    #+#             */
/*   Updated: 2025/11/12 08:20:01 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putstr(char *s, size_t *count)
{
	if (!s)
	{
		ft_putstr("(null)", count);
		return ;
	}
	*count = *count + ft_strlen(s);
	write(1, s, ft_strlen(s));
}
