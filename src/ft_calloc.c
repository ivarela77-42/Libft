/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarela77 <ivarela77@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 21:00:09 by ivarela77         #+#    #+#             */
/*   Updated: 2024/01/02 11:51:37 by ivarela77        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t tot_elements, size_t size)
{
	void	*ptr;

	ptr = malloc(tot_elements * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, tot_elements * size);
	return (ptr);
}
