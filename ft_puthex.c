#include "printf.h"

void	ft_puthex(unsigned int hex, char* base)
{
	char*	str;

	str = ft_convertbase(hex, base);
	ft_putstr(str);
	free(str);
}