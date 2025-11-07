#include "printf.h"

void	ft_putptr(void *p)
{
	unsigned long long	adress;

	adress = (unsigned long long)p;
	ft_putstr("0x");
	ft_puthex(adress, "123456789abcdef");
}