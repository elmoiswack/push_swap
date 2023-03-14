/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algorithm.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:45:52 by dhussain          #+#    #+#             */
/*   Updated: 2023/03/14 14:24:46 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	sorting(t_astack *a, t_bstack *b, int push_count)
{
	char	**numb_arr;
	int		pivot;
	int		old_push;
	int		max;

	old_push = push_count;
	max = a->total;
	if (extra_sort_a(a, push_count) == 1)
		return (1);
	numb_arr = copy_array_a(a);
	if (!numb_arr)
		return (-1);
	pivot = find_pivot(numb_arr, push_count);
	push_count = pivot_to_b(a, b, pivot, push_count);
	free_arr(numb_arr, max);
	if (sorting(a, b, old_push - push_count) == -1)
		return (-1);
	if (sorting_b(a, b, push_count) == -1)
		return (-1);
	return (1);
}

int	sorting_b(t_astack *a, t_bstack *b, int push_count)
{
	char	**numb_arr;
	int		pivot;
	int		old_push;
	int		max;

	old_push = push_count;
	max = b->total;
	if (extra_sort_b(b, push_count))
		return (push_to_a(a, b, push_count));
	numb_arr = copy_array_b(b);
	if (!numb_arr)
		return (-1);
	pivot = find_pivot(numb_arr, push_count);
	push_count = pivot_to_a(a, b, pivot, push_count);
	free_arr(numb_arr, max);
	if (sorting(a, b, push_count) == -1)
		return (-1);
	if (sorting_b(a, b, old_push - push_count) == -1)
		return (-1);
	return (1);
}
