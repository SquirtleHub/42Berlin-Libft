/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sazzeddi <sazzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:30:00 by sazzeddi          #+#    #+#             */
/*   Updated: 2022/12/03 21:48:19 by sazzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	- same as strchr but returns pointer to LAST OCCURENCE of c
	- locate char (ASCII) in string
	- return pointer to char, otherwise NULL
	- if c is \0 the functions returns its position, since it is part of the string
*/
char	*ft_strrchr(const char *s, int c)
{
	char	*last_occ;

	last_occ = NULL;
	while (*s != '\0')
	{
		if (*s == (unsigned char)c)
			last_occ = (char *)s;
		s++;
	}
	if (*s == (unsigned char)c)
		last_occ = (char *)s;
	return (last_occ);
}
