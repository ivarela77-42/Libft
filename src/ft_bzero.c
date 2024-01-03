/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarela77 <ivarela77@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:33:11 by ivarela77         #+#    #+#             */
/*   Updated: 2024/01/02 11:51:30 by ivarela77        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t size)
{
	size_t	index;
	char	*ptr;

	index = 0;
	ptr = str;
	while (index < size)
	{
		ptr[index] = 0;
		index++;
	}
}
