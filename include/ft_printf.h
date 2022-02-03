/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalifo <tchalifo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:11:59 by tchalifo          #+#    #+#             */
/*   Updated: 2021/12/15 13:55:50 by tchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_print
{
	va_list	valist;
	int		count;
	int		i;
}t_print;

int				ft_printf(const char *str, ...);
int				type_selector(const char *str, t_print *p_data);
int				ft_putchar(char c);
int				ft_putstr(char *str);
int				ft_putnbr(int n);
unsigned int	ft_putnbr_unsigned(unsigned int n);
unsigned int	ft_putnbr_hexa_up(unsigned int n);
unsigned int	ft_putnbr_hexa(unsigned int n);
unsigned int	ft_putmem(void *mem);
int				ft_numlen(int n);
int				ft_unsigned_numlen(unsigned int n);
int				ft_hexa_numlen(unsigned int n);
int				ft_hexa_long_numlen(unsigned long n);

#endif
