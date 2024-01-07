/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsign_fd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 22:38:07 by mounali           #+#    #+#             */
/*   Updated: 2023/02/28 12:08:50 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putnbr_unsign_fd(unsigned int n, int fd, int *len)
{
	char	nb;

	if (n >= 10)
	{
		ft_putnbr_unsign_fd(n / 10, fd, len);
		ft_putnbr_unsign_fd(n % 10, fd, len);
	}
	else
	{
		nb = n + '0';
		ft_putchar_fd(nb, fd, len);
	}
}
