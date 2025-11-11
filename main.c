#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "printf.h"
int main()
{
// int len1 = 0,len2 = 0;
// len1 = printf("%p\n", NULL);
// len2 = ft_printf("%p\n", NULL);
// printf("Return values -> printf: %d | ft_printf: %d\n", len1, len2);
int c1 = ft_printf("%s\n", NULL);
int c2 = printf("%s\n", NULL);

printf("Return values -> printf: %d | ft_printf: %d\n", c2, c1);
return 0;

}
