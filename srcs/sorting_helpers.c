/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_helpers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:52:06 by dhussain          #+#    #+#             */
/*   Updated: 2023/03/01 11:23:33 by dhussain         ###   ########.fr       */
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

int	get_biggest_numb(a_stack *a)
{
	int	biggest;
	int max;
	int	count;

	max = a->total;
	count = 0;
	biggest = a->numb;
	while (count < max)
	{
		if (a->numb > biggest)
		{
			biggest = a->numb;
			a = a->next;
			count++;
		}
		else
		{
			a = a->next;
			count++;
		}
	}
	return (biggest);
}

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

int	get_position(int numb_to_find, a_stack *a)
{
	int	max;
	int	count;

	max = a->total;
	count = 0;
	while (count < (max - 1))
	{
		if (numb_to_find == a->numb)
			break;
		count++;
		a = a->next;	
	}
	return (count);
}