#include "printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	if (!s)
		return ;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			totalsize;

	if ((nmemb != 0) && (size > SIZE_MAX / nmemb))
		return (NULL);
	totalsize = nmemb * size;
	ptr = malloc(totalsize);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, totalsize);
	return (ptr);
}

static size_t ft_nblenbase(unsigned int nb, size_t base_len)
{
	size_t	len;

	len = 0;
	while (nb > base_len)
	{
		nb = nb / base_len;
		len++;
	}
	return	(len);
}

char	*ft_convertbase(unsigned int nb, char *base)
{
	char	*str;
	size_t	base_len;
	size_t	nb_len;

	base_len = ft_strlen(base);
	nb_len = ft_nblenbase(nb, base_len);
	str = ft_calloc((nb_len + 1), sizeof(char));
	if(!str)
		return(NULL);
	while (nb_len)
	{
		str[--nb_len] = base[nb % base_len];
		nb /= base_len;
	}
	return (str);
}