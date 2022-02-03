/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalifo <tchalifo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:11:28 by tchalifo          #+#    #+#             */
/*   Updated: 2021/12/10 17:04:37 by tchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	type_selector(const char *str, t_print *p_data)
{
	if (str[p_data->i] == 'd' || str[p_data->i] == 'i')
		p_data->count = p_data->count + ft_putnbr(va_arg(p_data->valist, int));
		//ft_putstr(ft_itoa(va_arg(p_data->valist, int)));
	else if(str[p_data->i] == 'u')
		p_data->count = p_data->count + ft_putnbr_unsigned(va_arg(p_data->valist, int));
	else if (str[p_data->i] == 'X')
		p_data->count = p_data->count + ft_putnbr_Hexa(va_arg(p_data->valist, long));
	else if (str[p_data->i] == 'x')
		p_data->count = p_data->count + ft_putnbr_hexa(va_arg(p_data->valist, long));
	else if (str[p_data->i] == 'c')
		p_data->count = p_data->count + write(1, va_arg(p_data->valist, char *), 1);
	else if (str[p_data->i] == 's')
		p_data->count = p_data->count + ft_putstr(va_arg(p_data->valist, char *));
	else if (str[p_data->i] == 'p')
		p_data->count = p_data->count + ft_putmem(va_arg(p_data->valist, char *));
	else
		return (0);
	p_data->i++;
	return (1);
}


int	ft_printf(const char *str, ...)
{
	t_print	*data;

	data = (t_print *) malloc(sizeof(t_print));
	if (!data)
		return (-1);
	va_start(data->valist, str);
	data->i = 0;
	data->count = 0;
	while (str[data->i] != '\0')
	{
		if (str[data->i] == '%')
		{
			data->i++;
			type_selector(str, data);
		}
		else
		{
			ft_putchar(str[data->i]);
			data->i++;
			data->count++;
		}
	}

	return (data->count);
}
#include <stdio.h>
int	main(void)
{
	//int a;
	//a = 125;

	printf("Bonjour%d\n", 12);
	//printf("%p\n", a);
}
