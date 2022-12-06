/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sazzeddi <sazzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:30:11 by sazzeddi          #+#    #+#             */
/*   Updated: 2022/12/03 21:48:42 by sazzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	- converts lowercase to uppercase (ASCII)
	- if not a lowercase letter or no uppercase defined (ie: ß) c is returned
*/
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 'a' - 'A';
	return (c);
}
