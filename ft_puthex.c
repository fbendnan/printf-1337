#include "printf.h"

void	ft_puthex(unsigned long long hex, char* base)
{
	char*	str;

	str = ft_convertbase(hex, base);
	ft_putstr(str);
	free(str);
}
