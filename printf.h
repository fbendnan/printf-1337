#ifndef PRINTF_H
# define PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int	ft_printf(char* format, ...);
int	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(char *s);
size_t	ft_strlen(const char *str);


#endif