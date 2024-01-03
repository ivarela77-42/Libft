/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarela77 <ivarela77@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:56:42 by ivarela77         #+#    #+#             */
/*   Updated: 2024/01/02 11:53:52 by ivarela77        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	length;
	size_t	index;

	length = ft_strlen(src);
	if (size > 0)
	{
		index = 0;
		while (src[index] && index < size - 1)
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	return (length);
}
