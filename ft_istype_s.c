/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istype_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/04 02:38:21 by nquere            #+#    #+#             */
/*   Updated: 2014/05/04 02:38:23 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_istype_s(va_list ap)
{
	char	*s;

	s = va_arg(ap, char *);
	if (s == NULL)
	{
		ft_putstr("(null)");
		return (0);
	}
	else if (!s)
		return (0);
	else
		ft_putstr(s);
	return (ft_strlen(s));
}
