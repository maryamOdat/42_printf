/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:10:30 by modat             #+#    #+#             */
/*   Updated: 2024/10/09 16:20:04 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lower_hex(unsigned long n, int *counter)
{
	if (n >= 16)
	{
		ft_lower_hex(n / 16, counter);
	}
	*counter += ft_putchar("0123456789abcdef"[n % 16]);
	return (0);
}
