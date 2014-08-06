/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istype.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 20:51:36 by nquere            #+#    #+#             */
/*   Updated: 2014/05/04 02:46:41 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_istype(const char *s, int i, va_list ap)
{
	if (s[i] == 'd')
		return (ft_istype_d(ap));
	if (s[i] == 'i')
		return (ft_istype_i(ap));
	if (s[i] == 'c')
		return (ft_istype_c(ap));
	if (s[i] == 's')
		return (ft_istype_s(ap));
	if (s[i] == '%')
	{
		ft_putchar('%');
		return (1);
	}
	if (s[i] == 'Z')
	{
		ft_putchar('Z');
		return (1);
	}
	return (0);
}
