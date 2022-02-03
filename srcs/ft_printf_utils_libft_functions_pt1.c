/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalifo <tchalifo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:06:29 by tchalifo          #+#    #+#             */
/*   Updated: 2022/01/24 11:06:29 by tchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (count + 6);
	}
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
	int	count;

	count = ft_numlen(n);
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if ((n / 10) != 0)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + 48);
	return (count);
}
