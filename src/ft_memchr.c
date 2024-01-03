/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarela77 <ivarela77@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 20:43:36 by ivarela77         #+#    #+#             */
/*   Updated: 2024/01/02 11:52:33 by ivarela77        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t size)
{
	const unsigned char	*ptr;
	size_t				index;

	ptr = (unsigned char *) str;
	index = 0;
	while (size > index)
	{
		if (ptr[index] == (unsigned char) c)
			return ((void *) &ptr[index]);
		index++;
	}
	return (NULL);
}
