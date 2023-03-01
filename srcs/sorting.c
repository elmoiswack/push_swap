/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:40:35 by dhussain          #+#    #+#             */
/*   Updated: 2023/03/01 14:21:45 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	algorithm(a_stack *a, b_stack *b)
{
	int	max;
	int	smallest;
	int	position;
	int	middle;

	max = a->total;
	middle = max / 2;
	if (is_a_sorted(a) == 1)
		return (1);
	while (max > 5)
	{
		smallest = get_smallest_numb(a);
		position = get_position(smallest, a);
		if (position > middle)
		{
			while (smallest != a->numb)
				rra(a);
			if (is_a_sorted(a) == 1 && b->total == 0)
				return (1);
			if (is_a_sorted(a) == 1 && b->total != 0)
			{
				push_to_a(a, b);
				return (1);
			}
		}
		else
		{
			while (smallest != a->numb)
				ra(a);
			if (is_a_sorted(a) == 1 && b->total == 0)
				return (1);
			if (is_a_sorted(a) == 1 && b->total != 0)
			{
				push_to_a(a, b);
				return (1);
			}	
		}
		pb(a, b);
		max--;
	}
	if (a->total == 5)
		sort_5numb(a, b);
	if (is_a_sorted(a) == 1)
	{
		push_to_a(a, b);
		return (1);
	}
	return (0);
}

int	sorting(a_stack *a, b_stack *b)
{
	algorithm(a, b);
	if (is_a_sorted(a) == 1)
		return (1);
	return (0);
}
