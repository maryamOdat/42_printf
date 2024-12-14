/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifiers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:37:56 by modat             #+#    #+#             */
/*   Updated: 2024/10/12 15:31:03 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_hex(va_list args, int *counter, char specifier)
{
	unsigned int	value;

	value = va_arg(args, unsigned int);
	if (specifier == 'x')
		ft_lower_hex(value, counter);
	else
		ft_upper_hex(value, counter);
}

static void	handle_other_types(char specifier, va_list args, int *counter)
{
	unsigned int	value;
	void			*value_ptr;
	char			*value_str;

	if (specifier == 'u')
	{
		value = va_arg(args, unsigned int);
		ft_put_unint(value, counter);
	}
	else if (specifier == 'p')
	{
		value_ptr = va_arg(args, void *);
		ft_putptr(value_ptr, counter);
	}
	else if (specifier == 's')
	{
		value_str = va_arg(args, char *);
		*counter += ft_putstr(value_str);
	}
}

int	ft_specifiers(char specifier, va_list args)
{
	int		counter;
	int		value_int;

	counter = 0;
	if (specifier == 'd' || specifier == 'i')
	{
		value_int = va_arg(args, int);
		ft_putnbr(value_int, &counter);
	}
	else if (specifier == 'c')
	{
		value_int = va_arg(args, int);
		counter += ft_putchar(value_int);
	}
	else if (specifier == 'u' || specifier == 'p' || specifier == 's')
		handle_other_types(specifier, args, &counter);
	else if (specifier == 'x' || specifier == 'X')
		handle_hex(args, &counter, specifier);
	else if (specifier == '%')
		counter += ft_putchar('%');
	return (counter);
}
//Simplier but more than 25 lines 

/*#include "ft_printf.h"

int	ft_specifiers(char specifier, va_list args)
{
	int	counter;
	counter = 0;
	if (specifier == 'd' || specifier == 'i')
	{
		int value = va_arg(args, int);
		ft_putnbr(value, &counter);
	}
	else if (specifier == 'c')
	{
		int value = va_arg(args, int);
		counter += ft_putchar(value);
	}
	else if (specifier == 's')
	{
		char *value = va_arg(args, char *);
		counter += ft_putstr(value);
	}
	else if (specifier == 'p')
	{
		void* value = va_arg(args, void *);
		ft_putptr(value, &counter);
	}
	else if (specifier == 'u')
	{
		unsigned int value = va_arg(args, unsigned int);
		ft_put_unint(value, &counter);
	}
	else if (specifier == 'x')
	{
		unsigned int value = va_arg(args, unsigned int);
		ft_lower_hex(value, &counter);
	}
	else if (specifier == 'X')
	{
		unsigned int value = va_arg(args, unsigned int);
		ft_upper_hex(value, &counter);
	}
	else if (specifier == '%')
		counter += ft_putchar('%');
	return (counter);
}*/
