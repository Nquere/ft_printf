/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/04 02:39:18 by nquere            #+#    #+#             */
/*   Updated: 2014/05/04 02:39:20 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
char	*ft_strcpy(char *s1, const char *s2);
int		ft_istype(const char *s, int i, va_list ap);
int		ft_istype_d(va_list ap);
int		ft_istype_i(va_list ap);
int		ft_istype_c(va_list ap);
int		ft_istype_s(va_list ap);
int		ft_nbrlen(int n);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(char const *s);
size_t	ft_strlen(const char *s);

#endif
