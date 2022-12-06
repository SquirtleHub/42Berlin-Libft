/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sazzeddi <sazzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:29:07 by sazzeddi          #+#    #+#             */
/*   Updated: 2022/12/03 21:46:07 by sazzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	- source and destination are allowed to overlap
	- doesn't check for '\0' in src, always copies len amount of bytes to dst
	here: if src > dst, start copying from the end back to the start
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*p_src;
	unsigned char		*p_dest;

	p_dest = dst;
	p_src = src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (p_dest > p_src)
	{
		while (len-- > 0)
		{
			p_dest[len] = p_src[len];
		}
	}
	else
		ft_memcpy(p_dest, p_src, len);
	return (dst);
}
