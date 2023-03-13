/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algorithm.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantehussain <dantehussain@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:45:52 by dhussain          #+#    #+#             */
/*   Updated: 2023/03/13 15:11:57 by dantehussai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sorting(t_astack *a, t_bstack *b, int push_count)
{
	char	**numb_arr;
	int		pivot;
	int		old_push;

	old_push = push_count;
	if (extra_sort_a(a, push_count) == 1)
		return ;
	numb_arr = copy_array_a(a);
	// if (!numb_arr)
	// 	return (-1);
	pivot = find_pivot(numb_arr, push_count);
	push_count = pivot_to_b(a, b, pivot, push_count);
	free_arr(numb_arr, a->total);
	sorting(a, b,  old_push - push_count);
	sorting_b(a, b, push_count);
}

void	sorting_b(t_astack *a, t_bstack *b, int push_count)
{
	char	**numb_arr;
	int		pivot;
	int		old_push;

	old_push = push_count;
	if (extra_sort_b(b, push_count))
		return (push_to_a(a, b, push_count));
	numb_arr = copy_array_b(b);
	// if (!numb_arr)
	// 	return (-1);
	pivot = find_pivot(numb_arr, push_count);
	push_count = pivot_to_a(a, b, pivot, push_count);
	free_arr(numb_arr, b->total);
	sorting(a, b, push_count);
	sorting_b(a, b, old_push - push_count);
}