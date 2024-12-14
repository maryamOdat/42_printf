/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:34:36 by modat             #+#    #+#             */
/*   Updated: 2024/10/09 14:35:33 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <unistd.h>

int	ft_putnbr(int n, int *counter)
{
	if (n == INT_MIN)
		*counter += ft_putstr("-2147483648");
	else if (n == 0)
		*counter += ft_putchar((n + '0'));
	else if (n < 0)
	{
		*counter += ft_putchar('-');
		n *= -1;
	}
	if (n > 0)
	{
		if (n >= 10)
		{
			ft_putnbr(n / 10, counter);
			*counter += ft_putchar(n % 10 + 48);
		}
		else
			*counter += ft_putchar(n + '0');
	}
	return (0);
}
