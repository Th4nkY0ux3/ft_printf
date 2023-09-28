/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:23:18 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/28 18:10:22 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putstr(char const *s)
{
	int		len;
	int		i;
	
	i = 0;
	len = 0;
	if (!s)
		return (write(1, "(null)", 6);
	while (str[i] != '\0')
	{
		len += ft_putchar(str[i]);
		i++;
	}
	return (len);
}
