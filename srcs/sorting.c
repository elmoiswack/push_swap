/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:40:35 by dhussain          #+#    #+#             */
/*   Updated: 2023/02/20 16:15:15 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_smallest_numb(a_stack *a)
{
	int	smallest;
	int max;
	int	count;

	max = a->total;
	count = 0;
	smallest = a->numb;
	while (count < max)
	{
		if (a->numb < smallest)
		{
			smallest = a->numb;
			a = a->next;
			count++;
		}
		else
		{
			a = a->next;
			count++;
		}
	}
	return (smallest);
}

int	get_position(int smallest_numb, a_stack *a)
{
	int	max;
	int	count;

	max = a->total;
	count = 0;
	while (count < (max - 1))
	{
		if (smallest_numb == a->numb)
			break;
		count++;
		a = a->next;	
	}
	return (count);
}

int	sorting(a_stack *a, b_stack *b)
{
	int	smallest_numb;
	int	max;
	int	position;
	int	count_loop;
	int	middle;

	max = a->total;
	middle = max / 2;
	count_loop = 0;
	if (is_a_sorted(a) == 1)
		return (1);
	while (count_loop < max - 1)
	{
		smallest_numb = get_smallest_numb(a);
		position = get_position(smallest_numb, a);
		if (position > middle)
		{
			while (smallest_numb != a->numb)
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
			while (smallest_numb != a->numb)
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
		if (a->total == 2 && a->numb < a->next->numb)
		{
			push_to_a(a, b);
			return (1);
		}
		count_loop++;
	}
	if (is_b_sorted(b) == 1)
	{
		push_to_a(a, b);
		return (1);
	}
	return (-1);
}
