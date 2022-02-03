#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclenght;

	i = 0;
	srclenght = ft_strlen(src);
	if (dstsize == 0)
		return (srclenght);
	while (src[i] != '\0' && dstsize-- > 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclenght);
}

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	s1_length;

	s1_length = ft_strlen(s1) + 1;
	s2 = malloc(sizeof(*s2) * s1_length);
	if (!s2)
		return (0);
	ft_strlcpy(s2, s1, s1_length);
	free((void*)s1);
	return (s2);
}


static int	numlen(int n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n > 9)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i_str;

	i_str = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = malloc(numlen(n) + 1);
	if (!str)
		return (0);
	i_str = (numlen(n));
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	str[i_str--] = '\0';
	while (n > 9)
	{
		str[i_str--] = (n % 10) + 48;
		n = n / 10;
	}
	str[i_str] = n + 48;
	return (str);
}


int	ft_putstr(char *str)
{
	size_t	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
		count++;
	}
	return (count);
}

int	ft_putnbr(int n)
{
	long	nbr;

	static int count;

	count++;
	nbr = n;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
		count++;
	}
	if ((nbr / 10) != 0)
		ft_putnbr(nbr / 10);
	ft_putchar((nbr % 10) + 48);
	return (count);
}

unsigned int	ft_putnbr_unsigned(unsigned int n)
{
	unsigned int	nbr;
	static unsigned int count;

	count++;
	nbr = n;
	if ((nbr / 10) != 0)
		ft_putnbr_unsigned(nbr / 10);
	ft_putchar((nbr % 10) + 48);
	return (count);
}

unsigned int	ft_putnbr_Hexa(unsigned long n)
{
	static unsigned int	count;

	count++;
	if ((n / 16) != 0)
		ft_putnbr_Hexa(n / 16);
	if ((n % 16) > 9)
		ft_putchar((n % 16) + 55);
	else
		ft_putchar((n % 16) + 48);
	return (count);
}

unsigned int	ft_putnbr_hexa(unsigned long n)
{
	static unsigned int	count;

	count++;
	if ((n / 16) != 0)
		ft_putnbr_hexa(n / 16);
	if ((n % 16) > 9)
		ft_putchar((n % 16) + 87);
	else
		ft_putchar((n % 16) + 48);
	return (count);
}

unsigned int	ft_putmem(void *mem)
{
	unsigned int	count;

	count = 2;
	ft_putstr("0x");
	count = count + ft_putnbr_hexa((unsigned long) mem);
	return count;
}
