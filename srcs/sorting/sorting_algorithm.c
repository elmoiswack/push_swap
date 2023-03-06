/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algorithm.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:45:52 by dhussain          #+#    #+#             */
/*   Updated: 2023/03/06 16:55:36 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	sorting(t_astack *a, t_bstack *b, int push_count)
{
	char	**numb_arr;
	int		pivot;
	int		old_push;

	old_push = push_count;
	if (a->total == 3)
		sort_3numb(a);
	if (is_b_sorted(b) == 1 && is_a_sorted(a) == 1)
		push_to_a(a, b);
	if (is_a_sorted(a) == 1)
		return (1);
	numb_arr = copy_array(a);
	if (!numb_arr)
		return (-1);
	pivot = find_pivot(numb_arr, push_count);
	push_count = pivot_to_b(a, b, pivot);
	free_arr(numb_arr);
	sorting(a, b, old_push - push_count);
	sorting_b(a, b, push_count);	
	return (1);
}

int	sorting_b(t_astack *a, t_bstack *b, int push_count)
{
	char	**numb_arr;
	int		pivot;
	int		old_push;

	old_push = push_count;
	if (a->total == 3)
		sort_3numb(a);
	if (is_b_sorted(b) == 1 && is_a_sorted(a) == 1)
	{
		push_to_a(a, b);
		return (1);
	}
	numb_arr = copy_array(a);
	if (!numb_arr)
		return (-1);
	pivot = find_pivot(numb_arr, push_count);
	push_count = pivot_to_a(a, b, pivot);
	free_arr(numb_arr);
	sorting(a, b, push_count);
	sorting_b(a, b, old_push - push_count);
	return (1);
}