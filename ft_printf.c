#include "printf.h"

static void ft_format(va_list ap, char* str)
{
    if (*str == 'c')
        ft_putchar(va_arg(ap, int));
    else if (*str == 's')
        ft_putstr(va_arg(ap, char*));
	else if (*str == 'i')
		ft_putnbr(va_arg(ap, int));
	else if (*str == 'd')
		ft_putnbr(va_arg(ap, int));
}

int	ft_printf(char* format, ...)
{
	va_list	ap;
	size_t	count;
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
    }
    va_end(ap);
	return 0;
}

int main()
{
    ft_printf("hello %i", -90);
}