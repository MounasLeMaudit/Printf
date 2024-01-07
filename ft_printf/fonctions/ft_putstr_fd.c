/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:00:57 by mounali           #+#    #+#             */
/*   Updated: 2023/02/28 12:09:26 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putstr_fd(char *s, int fd, int *len)
{
	if (!s)
	{
		ft_putstr_fd("(null)", 1, len);
		return ;
	}
	while (*s)
	{
		ft_putchar_fd(*s, fd, len);
		s++;
	}
}
