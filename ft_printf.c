/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/04 02:38:35 by nquere            #+#    #+#             */
/*   Updated: 2014/05/04 02:38:38 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	va_list		ap;
	int			i;
	int			cmp;
	char		*str;

	i = 0;
	cmp = 0;
	va_start(ap, format);
	str = (char *)malloc(sizeof(char) * (ft_strlen(format)) + 1);
	str = ft_strcpy(str, format);
	while (str[i] != '\0')
	{
		while ((str[i] != '%') && (str[i] != '\0'))
		{
			ft_putchar(str[i++]);
			cmp++;
		}
		if (str[i] == '%')
			cmp += ft_istype(str, ++i, ap);
		i++;
	}
	va_end(ap);
	return (cmp);
}
