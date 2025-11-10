#include "printf.h"

void ft_putu(unsigned int nb)
{
    char*   str;

    str = ft_convertbase(nb, "012456789");
    ft_putstr(str);
    free(str);
}
