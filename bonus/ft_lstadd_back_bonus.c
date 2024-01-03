/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanrodr <ivanrodr@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:30:32 by ivanrodr          #+#    #+#             */
/*   Updated: 2024/01/03 17:07:59 by ivanrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_item;

	if (!*lst)
		*lst = new;
	else
	{
		last_item = ft_lstlast(*lst);
		last_item->next = new;
	}
}
