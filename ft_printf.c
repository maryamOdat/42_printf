/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 11:12:57 by modat             #+#    #+#             */
/*   Updated: 2024/10/06 15:28:09 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_printf(const char *format, ...)
{
	size_t	i;
	size_t	counter;
	va_list	args;

	counter = 0;
	va_start(args, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			counter += ft_specifiers(format[i], args);
		}
		else
		{
			counter += ft_putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (counter);
}
