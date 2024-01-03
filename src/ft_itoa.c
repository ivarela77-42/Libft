/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarela77 <ivarela77@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 12:13:00 by ivarela77         #+#    #+#             */
/*   Updated: 2024/01/02 11:51:55 by ivarela77        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_number_length(int n)
{
	size_t	length;

	if (n == 0)
		return (1);
	length = 0;
	if (n < 0)
		length += 1;
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	length;
	size_t	index;

	length = get_number_length(n);
	result = malloc(sizeof(char) * (length + 1));
	if (!result)
		return (NULL);
	if (n < 0)
		result[0] = '-';
	if (n == 0)
		result[0] = '0';
	index = 0;
	while (n != 0)
	{
		if (n < 0)
			result[length - index - 1] = -(n % 10) + '0';
		else
			result[length - index - 1] = (n % 10) + '0';
		n /= 10;
		index++;
	}
	result[length] = '\0';
	return (result);
}
