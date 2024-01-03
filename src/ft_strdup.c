/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarela77 <ivarela77@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:54:41 by ivarela77         #+#    #+#             */
/*   Updated: 2024/01/02 11:53:33 by ivarela77        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*clone;

	clone = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!clone)
		return (NULL);
	ft_memcpy(clone, str, ft_strlen(str) + 1);
	return (clone);
}
