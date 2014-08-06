/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istype_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/04 02:38:15 by nquere            #+#    #+#             */
/*   Updated: 2014/05/04 02:38:18 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_istype_i(va_list ap)
{
	int		j;

	j = va_arg(ap, int);
	ft_putnbr(j);
	return (ft_nbrlen(j));
}
