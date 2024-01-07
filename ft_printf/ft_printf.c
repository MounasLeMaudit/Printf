/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:26:29 by mounali           #+#    #+#             */
/*   Updated: 2023/02/28 21:22:31 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_search_arg(char c, va_list arg, int *len)
{
	if (c == 'c')
		ft_putchar_fd(va_arg(arg, int), 1, len);
	else if (c == 's')
		ft_putstr_fd(va_arg(arg, char *), 1, len);
	else if (c == 'p')
		ft_hex_adress(va_arg(arg, long long int), len);
	else if (c == 'd')
		ft_putnbr_fdd(va_arg(arg, int), 1, len);
	else if (c == 'i')
		ft_putnbr_fdd(va_arg(arg, int), 1, len);
	else if (c == 'u')
		ft_putnbr_unsign_fd(va_arg(arg, unsigned int), 1, len);
	else if (c == 'x')
		ft_putnbr_base(va_arg(arg, unsigned int), 0, len);
	else if (c == 'X')
		ft_putnbr_base(va_arg(arg, unsigned int), 1, len);
	else if (c == '%')
		ft_putchar_fd('%', 1, len);
}

int	ft_printf(const char *str, ...)
{
	va_list		arg;
	size_t		i;
	int			len;

	i = 0;
	len = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] != '%')
			ft_putchar_fd(str[i], 1, &len);
		else
		{
			ft_search_arg(str[i + 1], arg, &len);
			i++;
		}
		i++;
	}
	va_end(arg);
	return (len);
}
