#ifndef PRINTF_H
# define PRINTF_H

#include <unistd.h>
#include <stdarg.h>
// #include <stddef.h>
// # include <stdlib.h>
#include <stdint.h>

int	ft_printf(char* format, ...);
int	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(char *s);
size_t	ft_strlen(const char *str);
void ft_putptr(void *p);void ft_putptr(void *p);
void ft_putu(unsigned int);
void	ft_puthex(unsigned int hex, char* base);


char	*ft_convertbase(unsigned int nb, char *base);


#endif