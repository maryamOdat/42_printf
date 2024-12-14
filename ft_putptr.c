/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:36:14 by modat             #+#    #+#             */
/*   Updated: 2024/10/12 14:20:15 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

void	ft_putptr(void *ptr, int *counter)
{
	unsigned long	convert;

	if (ptr == NULL)
	{
		*counter = ft_putstr("(nil)");
		return ;
	}
	convert = (unsigned long)ptr;
	*counter += ft_putstr("0x");
	ft_lower_hex(convert, counter);
}
