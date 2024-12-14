/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 10:39:34 by modat             #+#    #+#             */
/*   Updated: 2024/10/06 11:12:33 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putstr(char const *s);
int		ft_putnbr(int n, int *counter);
int		ft_lower_hex(unsigned long n, int *counter);
int		ft_specifiers(char specifier, va_list args);
int		ft_upper_hex(unsigned long n, int *counter);
void	ft_putptr(void *ptr, int *counter);
int		ft_put_unint(unsigned int n, int *counter);

#endif
