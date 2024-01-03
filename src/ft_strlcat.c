/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarela77 <ivarela77@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:41:58 by ivarela77         #+#    #+#             */
/*   Updated: 2024/01/02 11:53:46 by ivarela77        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	length_dst;
	size_t	length_src;
	size_t	index;

	length_src = ft_strlen(src);
	if (size == 0)
		return (length_src);
	length_dst = ft_strlen(dst);
	if (length_dst < size)
	{
		index = 0;
		while (index < length_src && index < size - length_dst - 1)
		{
			dst[length_dst + index] = src[index];
			index++;
		}
		dst[length_dst + index] = '\0';
	}
	else
		return (size + length_src);
	return (length_dst + length_src);
}
