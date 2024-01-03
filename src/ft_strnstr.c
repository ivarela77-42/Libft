/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarela77 <ivarela77@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 22:04:13 by ivarela77         #+#    #+#             */
/*   Updated: 2024/01/02 11:54:13 by ivarela77        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t size)
{
	size_t	length_h;
	size_t	length_n;

	if (!*needle)
		return ((char *) haystack);
	if (size == 0)
		return (NULL);
	length_h = ft_strlen(haystack);
	length_n = ft_strlen(needle);
	if (size > length_h)
		size = length_h;
	while (size >= length_n)
	{
		if (ft_strncmp(haystack, needle, length_n) == 0)
			return ((char *) haystack);
		haystack++;
		size--;
	}
	return (NULL);
}
