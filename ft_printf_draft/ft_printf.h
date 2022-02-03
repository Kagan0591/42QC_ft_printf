/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalifo <tchalifo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:11:59 by tchalifo          #+#    #+#             */
/*   Updated: 2021/12/10 17:02:31 by tchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

typedef	struct s_print
{
	va_list	valist; // Les arguments a imprimer
	int	count; // La valeur de retour de ft_printf
	int	i;
}t_print;


int				ft_printf(const char *, ...);
int				type_selector(const char *str, t_print *p_data);
size_t			ft_strlen(const char *s);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
char			*ft_strdup(const char *s1);
char			*ft_itoa(int n);
void			ft_putchar(char c);
int				ft_putstr(char *str);
int				ft_putnbr(int n);
unsigned int	ft_putnbr_unsigned(unsigned int n);
unsigned int	ft_putnbr_Hexa(unsigned long n);
unsigned int	ft_putnbr_hexa(unsigned long n);
unsigned int	ft_putmem(void *mem);

#endif
