/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarela77 <ivarela77@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 12:59:03 by ivarela77         #+#    #+#             */
/*   Updated: 2024/01/02 11:53:41 by ivarela77        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	length_s1;
	size_t	length_s2;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	length_s1 = ft_strlen(s1);
	length_s2 = ft_strlen(s2);
	result = malloc(sizeof(char) * (length_s1 + length_s2 + 1));
	if (!result)
		return (NULL);
	ft_memcpy(result, s1, length_s1);
	ft_memcpy(result + length_s1, s2, length_s2);
	result[length_s1 + length_s2] = '\0';
	return (result);
}
