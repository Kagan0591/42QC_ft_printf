/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_pt2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalifo <tchalifo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:54:27 by tchalifo          #+#    #+#             */
/*   Updated: 2022/01/24 12:00:14 by tchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_putnbr_unsigned(unsigned int n)
{
	int	count;

	count = ft_unsigned_numlen(n);
	if ((n / 10) != 0)
		ft_putnbr_unsigned(n / 10);
	ft_putchar((n % 10) + 48);
	return (count);
}

unsigned int	ft_putnbr_hexa_up(unsigned int n)
{
	unsigned int	count;

	count = ft_hexa_numlen(n);
	if ((n / 16) != 0)
		ft_putnbr_hexa_up(n / 16);
	if ((n % 16) > 9)
		ft_putchar((n % 16) + 55);
	else
		ft_putchar((n % 16) + 48);
	return (count);
}

unsigned int	ft_putnbr_hexa(unsigned int n)
{
	unsigned int	count;

	count = ft_hexa_numlen(n);
	if ((n / 16) != 0)
		ft_putnbr_hexa(n / 16);
	if ((n % 16) > 9)
		ft_putchar((n % 16) + 87);
	else
		ft_putchar((n % 16) + 48);
	return (count);
}

unsigned int	ft_putnbr_long_hexa(unsigned long n)
{
	unsigned int	count;

	count = ft_hexa_long_numlen(n);
	if ((n / 16) != 0)
		ft_putnbr_long_hexa(n / 16);
	if ((n % 16) > 9)
		ft_putchar((n % 16) + 87);
	else
		ft_putchar((n % 16) + 48);
	return (count);
}

unsigned int	ft_putmem(void *mem)
{
	unsigned int	count;

	if (!mem || mem == 0)
		return (write(1, "0x0", 3));
	ft_putstr("0x");
	count = 2;
	count = count + ft_putnbr_long_hexa((unsigned long) mem);
	return (count);
}
