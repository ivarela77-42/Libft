/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanrodr <ivanrodr@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 23:22:12 by ivarela77         #+#    #+#             */
/*   Updated: 2024/01/10 11:22:49 by ivanrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list_result;
	t_list	*node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	list_result = NULL;
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{
			del(content);
			ft_lstclear(&list_result, del);
		}
		ft_lstadd_back(&list_result, node);
		lst = lst->next;
	}
	return (list_result);
}
