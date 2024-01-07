/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:01:27 by mounali           #+#    #+#             */
/*   Updated: 2023/02/28 12:07:13 by mounali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_toupper(int c)
{
	if (ft_isalpha(c) && c >= 97)
		return (c - 32);
	return (c);
}
