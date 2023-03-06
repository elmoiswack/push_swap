/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:04:44 by dhussain          #+#    #+#             */
/*   Updated: 2023/03/06 16:54:28 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

char	**copy_array(t_astack *a)
{
	char	**arr;
	int		index;
	int		max;

	max = a->total;
	index = 0;
	arr = malloc(max * sizeof(char *));
	if (!arr)
		return (NULL);
	while (index < max)
	{
		arr[index] = ft_itoa(a->numb);
		a = a->next;
		index++;
	}
	arr[index] = NULL;
	return (arr);
}

int	find_pivot(char **numb_arr, int max)
{
	int	pivot;
	int	biggest;
	int	index;
	int	middle;

	middle = max / 2;
	while (max > middle)
	{
		biggest = get_biggest_numb(numb_arr, max);
		index = 0;
		while (numb_arr[index])
		{
			if (ft_atoi(numb_arr[index]) == biggest)
			{
				numb_arr = biggest_numb_to_end(numb_arr, max, index);
				break ;
			}
			index++;
		}
		max--;
	}
	pivot = get_biggest_numb(numb_arr, max);
	return (pivot);
}

int	pivot_to_b(t_astack *a, t_bstack *b, int pivot)
{
	int	count;
	int	push_count;
	int	max;
	
	count = 0;
	push_count = 0;
	max = a->total;
	while (count < (max - 1))
	{
		if (a->numb < pivot)
		{
			pb(a, b);
			push_count++;
		}
		else
			ra(a);
		count++;
	}
	return (push_count);
}

int	pivot_to_a(t_astack *a, t_bstack *b, int pivot)
{
	int	count;
	int	push_count;
	int	max;
	
	count = 0;
	push_count = 0;
	max = b->total;
	while (count < (max - 1))
	{
		if (b->numb < pivot)
		{
			pa(a, b);
			push_count++;
		}
		else
			rb(b);
		count++;
	}
	return (push_count);
}
