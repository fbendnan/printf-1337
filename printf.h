/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbendnan <fbendnan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:25:14 by fbendnan          #+#    #+#             */
/*   Updated: 2025/11/12 08:22:38 by fbendnan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>

int		ft_printf(char *format, ...);
int		ft_putchar(char c, size_t *count);
void	ft_putnbr(int n, size_t *count);
void	ft_putstr(char *s, size_t *count);
void	ft_putptr(void *p, size_t *count);
void	ft_putu(unsigned int nb, size_t *count);
void	ft_puthex(unsigned int hex, char *base, size_t *count);
size_t	ft_strlen(const char *str);
size_t	ft_nblenbase(unsigned long long nb, size_t base_len);
void	*ft_calloc(size_t nmemb, size_t size);

#endif
