/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pivot_functions_helpers.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 10:36:59 by dhussain          #+#    #+#             */
/*   Updated: 2023/03/14 14:23:49 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

char	**copy_array_a(t_astack *a)
{
	char	**arr;
	int		index;
	int		max;

	max = a->total;
	index = 0;
	arr = ft_calloc(max, sizeof(char *));
	if (!arr)
		return (NULL);
	while (index < max)
	{
		arr[index] = ft_itoa(a->numb);
		if (!arr[index])
		{
			free_arr(arr, index);
			return (NULL);
		}
		a = a->next;
		index++;
	}
	return (arr);
}

char	**copy_array_b(t_bstack *b)
{
	char	**arr;
	int		index;
	int		max;

	max = b->total;
	index = 0;
	arr = ft_calloc(max, sizeof(char *));
	if (!arr)
		return (NULL);
	while (index < max)
	{
		arr[index] = ft_itoa(b->numb);
		if (!arr[index])
		{
			free_arr(arr, index);
			return (NULL);
		}
		b = b->next;
		index++;
	}
	return (arr);
}
