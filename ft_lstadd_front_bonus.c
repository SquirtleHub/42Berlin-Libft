/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sazzeddi <sazzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:28:35 by sazzeddi          #+#    #+#             */
/*   Updated: 2022/12/03 21:31:47 by sazzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*old_first_elem;

	if (*lst == NULL)
		*lst = new;
	else
	{
		old_first_elem = *lst;
		*lst = new;
		new->next = old_first_elem;
	}
}
