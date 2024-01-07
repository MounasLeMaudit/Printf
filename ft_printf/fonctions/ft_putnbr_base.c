/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 21:34:08 by mounali           #+#    #+#             */
/*   Updated: 2023/02/28 11:54:51 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	ft_hexa(unsigned int nbr, char *base, int c, int *len)
{
	if (nbr >= 16)
	{
		ft_hexa(nbr / 16, base, c, len);
		ft_hexa(nbr % 16, base, c, len);
	}
	else
	{
		if (c == 0)
			ft_putchar_fd(ft_tolower(base[nbr]), 1, len);
		else if (c == 1)
			ft_putchar_fd(ft_toupper(base[nbr]), 1, len);
		else
			ft_putchar_fd(base[nbr], 1, len);
	}
}

void	ft_putnbr_base(unsigned int nbr, int c, int *len)
{
	unsigned int	nbrl;

	nbrl = nbr;
	ft_hexa(nbrl, "0123456789ABCDEF", c, len);
}
