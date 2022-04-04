/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_pt1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalifo <tchalifo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:53:13 by tchalifo          #+#    #+#             */
/*   Updated: 2022/01/24 13:38:56 by tchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_numlen(int n)
{
	int	count;

	count = 0;
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
	count++;
	return (count);
}

int	ft_unsigned_numlen(unsigned int n)
{
	int	count;

	count = 0;
	while (n > 9)
	{
		n /= 10;
		count++;
	}
	count++;
	return (count);
}

int	ft_hexa_numlen(unsigned int n)
{
	int	count;

	count = 0;
	while (n > 15)
	{
		n /= 16;
		count++;
	}
	count++;
	return (count);
}

int	ft_hexa_long_numlen(unsigned long n)
{
	int	count;

	count = 0;
	while (n > 15)
	{
		n /= 16;
		count++;
	}
	count++;
	return (count);
}
