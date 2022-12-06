/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sazzeddi <sazzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:29:40 by sazzeddi          #+#    #+#             */
/*   Updated: 2022/12/03 21:31:47 by sazzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	destlen;
	size_t	srclen;
	size_t	start;

	i = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (destsize <= destlen)
		start = destsize;
	else
	{
		start = destlen;
		while (src[i] != '\0' && (start + i) < (destsize - 1))
		{
			dest[start + i] = src[i];
			i++;
		}
		dest[start + i] = '\0';
	}
	return (start + srclen);
}
