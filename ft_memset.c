/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sazzeddi <sazzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:29:10 by sazzeddi          #+#    #+#             */
/*   Updated: 2022/12/03 21:46:09 by sazzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	- len is the amount of bytes
	- c is converted to unsigned char
	- len amount of chars are written to string b
*/
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned long	i;
	char			*str;

	i = 0;
	str = (char *)b;
	while (i < len)
	{
		str[i] = (char)c;
		i++;
	}
	return (b);
}
