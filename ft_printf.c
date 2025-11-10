#include "printf.h"

static void ft_format(va_list ap, char* str)
{
	if (*str == 'c')
		ft_putchar(va_arg(ap, int));
	else if (*str == 's')
		ft_putstr(va_arg(ap, char*));
	else if (*str == 'i' || *str == 'd')
		ft_putnbr(va_arg(ap, int));
	else if (*str == 'p')
		ft_putptr(va_arg(ap, void*));
   else if (*str == 'u')
		ft_putu(va_arg(ap, unsigned int));
	else if (*str == 'x' || *str == 'X')
	{
		if (*str == 'x')
			ft_puthex(va_arg(ap, unsigned long long), "0123456789abcdef");
		if (*str == 'X')
			ft_puthex(va_arg(ap, unsigned long long), "0123456789ABCDEF"); 
	}
	else if (*str == '%')
		ft_putchar(*str);
		
}

int	ft_printf(char* format, ...)
{
	va_list	ap;
	size_t	count;

	count = 0;
	va_start(ap, format);
	while (*format)
	{
		if(*format == '%')
		{
			format++;
			ft_format(ap, format);
		}
		else
			ft_putchar(*format);
		format++;
		count++;
	}
	va_end(ap);
	return count;
}

#include <stdio.h>
int main()
{
	int d = 23;
	int g = ft_printf("%p\n", &d);
    printf("%d\n", g);
}
