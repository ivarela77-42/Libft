/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarela77 <ivarela77@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 11:06:59 by ivarela77         #+#    #+#             */
/*   Updated: 2024/01/02 11:53:22 by ivarela77        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_items(char const *str, char c)
{
	int	counter;
	int	index;

	counter = 0;
	index = 0;
	while (str[index])
	{
		if (str[index] != c && (index == 0 || str[index - 1] == c))
			counter++;
		index++;
	}
	return (counter);
}

static char	*ft_push_item(char const *str, char c, int *index)
{
	char	*result;
	size_t	length;

	while (str[*index] && str[*index] == c)
		(*index)++;
	length = 0;
	while (str[*index + length] && str[*index + length] != c)
		length++;
	result = ft_substr(str, *index, length);
	*index += length;
	return (result);
}

static void	ft_free(char **arr)
{
	int	index;

	index = 0;
	while (arr[index])
	{
		free(arr[index]);
		index++;
	}
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		total_items;
	int		index_arr;
	int		index_s;

	if (!s)
		return (NULL);
	total_items = ft_count_items(s, c);
	result = (char **)malloc(sizeof(char *) * (total_items + 1));
	if (!result)
		return (NULL);
	index_arr = 0;
	index_s = 0;
	while (index_arr < total_items)
	{
		result[index_arr] = ft_push_item(s, c, &index_s);
		if (!result[index_arr])
		{
			ft_free(result);
			return (NULL);
		}
		index_arr++;
	}
	result[total_items] = 0;
	return (result);
}
