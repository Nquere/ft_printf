/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/04 02:38:55 by nquere            #+#    #+#             */
/*   Updated: 2014/05/04 02:39:00 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char const *s)
{
	int	index;

	index = 0;
	if (s == NULL)
		ft_putstr("NULL");
	else
	{
		while (s[index] != '\0')
		{
			write(1, &s[index], 1);
			index++;
		}
	}
}
