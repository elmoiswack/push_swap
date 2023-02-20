/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_helpers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:52:06 by dhussain          #+#    #+#             */
/*   Updated: 2023/02/20 17:12:01 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_a_sorted(a_stack *a)
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

int	is_b_sorted(b_stack *b)
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

void	push_to_a(a_stack *a, b_stack *b)
{
	int	max;
	int	count;
	
	max = b->total;
	count = 0;
	while (count < max)
	{
		pa(a, b);
		count++;
	}
	return ;
}