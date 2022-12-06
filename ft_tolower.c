/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sazzeddi <sazzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:30:09 by sazzeddi          #+#    #+#             */
/*   Updated: 2022/12/03 21:48:39 by sazzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	- converts upper- to lowercase (ASCII)
	- if not an uppercase letter or no lowercase defined (ie: ß) c is returned
*/
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 'a' - 'A';
	return (c);
}
