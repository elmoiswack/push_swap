/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pivot_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:04:44 by dhussain          #+#    #+#             */
/*   Updated: 2023/03/14 10:41:19 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	find_pivot(char **numb_arr, int max)
{
	int	pivot;
	int	biggest;
	int	index;
	int	arr_max;

	arr_max = max;
	index = 0;
	while (arr_max > 0)
	{
		biggest = get_biggest_numb(numb_arr, arr_max);
		index = 0;
		while (numb_arr[index])
		{
			if (ft_atoi(numb_arr[index]) == biggest)
			{
				numb_arr = biggest_numb_to_end(numb_arr, arr_max, index);
				break ;
			}
			index++;
		}
		arr_max--;
	}
	pivot = ft_atoi(numb_arr[max / 2]);
	return (pivot);
}

void	pivot_to_b_rra(int count, t_astack *a)
{
	while (count > 0)
	{
		rra(a);
		count--;
	}
	return ;
}

int	pivot_to_b(t_astack *a, t_bstack *b, int pivot, int pushed)
{
	int	count;
	int	push_count;
	int	max;

	count = 0;
	push_count = 0;
	max = a->total;
	if (pushed == 2)
		return (0);
	while (count < pushed)
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
	count = count - push_count;
	pivot_to_b_rra(count, a);
	return (push_count);
}

void	pivot_to_a_rrb(int count, t_bstack *b)
{
	while (count > 0)
	{
		rrb(b);
		count--;
	}
	return ;
}

int	pivot_to_a(t_astack *a, t_bstack *b, int pivot, int pushed)
{
	int	count;
	int	push_count;
	int	max;

	count = 0;
	push_count = 0;
	max = b->total;
	if (pushed == 2)
		return (0);
	while (count < pushed)
	{
		if (b->numb > pivot)
		{
			pa(a, b);
			push_count++;
		}
		else
			rb(b);
		count++;
	}
	count = count - push_count;
	pivot_to_a_rrb(count, b);
	return (push_count);
}
