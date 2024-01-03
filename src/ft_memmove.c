/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarela77 <ivarela77@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 08:06:10 by ivarela77         #+#    #+#             */
/*   Updated: 2024/01/02 11:52:51 by ivarela77        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t length)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	if (!src && !dest)
		return (NULL);
	ptr_dest = (unsigned char *) dest;
	ptr_src = (unsigned char *) src;
	if (ptr_src < ptr_dest && ptr_dest < ptr_src + length)
		while (length--)
			ptr_dest[length] = ptr_src[length];
	else
		while (length--)
			*(ptr_dest++) = *(ptr_src++);
	return (dest);
}
