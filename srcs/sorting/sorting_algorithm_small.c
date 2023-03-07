/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algorithm_small.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:48:17 by dhussain          #+#    #+#             */
/*   Updated: 2023/03/07 16:56:00 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	is_a_sorted(t_astack *a)
{
	int	max;
	int	count;

	max = a->total;
	count = 0;
	while (count < (max - 1))
	{
		if (a->numb < a->next->numb)
		{
			count++;
			a = a->next;
		}
		else
			return (-1);
	}
	return (1);
}

int	is_b_sorted(t_bstack *b)
{
	int	max;
	int	count;

	max = b->total;
	count = 0;
	while (count < (max - 1))
	{
		if (b->numb > b->next->numb)
		{
			count++;
			b = b->next;
		}
		else
			return (-1);		
	}
	return (1);
}

int	sort_2numb_b(t_bstack *b)
{
	if (b->numb < b->next->numb)
		sb(b);
	return (1);
}

int	extra_sort_b(t_bstack *b, int push)
{
	if (push == 1)
		return (1);
	if (push == 2)
	{
		if (sort_2numb_b(b) == 1)	
			return (1);		
	}
	if (is_b_sorted(b) == 1)
		return (1);
	if (b->total > 3)
		return (0);
	sort_3numb_b(b);
	return (1);
}

int	extra_sort_a(t_astack *a, int push)
{
	if (push == 1)
		return (1);
	if (push == 2)
	{
		if (sort_2numb(a) == 1)
			return (1);
	}
	if (is_a_sorted(a) == 1)
		return (1);
	if (a->total > 3)
		return (0);
	sort_3numb(a);
	return (1);
}