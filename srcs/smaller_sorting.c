/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smaller_sorting.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:19:37 by dhussain          #+#    #+#             */
/*   Updated: 2023/03/01 14:07:32 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sort_2numb(a_stack *a)
{
	if (a->numb > a->next->numb)
		sa(a);
	return (1);
}

int	sort_3numb(a_stack *a)
{
	if (is_a_sorted(a) == 1)
		return (1);
	if (a->next->numb > a->numb && a->next->numb > a->next->next->numb)
	{
		rra(a);
		if (is_a_sorted(a) == 1)
			return (1);
		sa(a);
		if (is_a_sorted(a) == 1)
			return (1);
	}
	if (a->next->numb < a->numb && a->next->numb > a->next->next->numb)
	{
		sa(a);
		if (is_a_sorted(a) == 1)
			return (1);	
		rra(a);
		if (is_a_sorted(a) == 1)
			return (1);
	}
	if (a->next->numb < a->numb && a->next->numb < a->next->next->numb)
	{
		if (a->numb < a->next->next->numb)
			sa(a);
		else
			ra(a);
	}
	if (is_a_sorted(a) == 1)
		return (1);
	return (-1);
}

int	sort_4numb(a_stack *a, b_stack *b)
{
	int	smallest;
	int	position;

	smallest = get_smallest_numb(a);
	position = get_position(smallest, a);
	if (is_a_sorted(a) == 1)
		return (1);
	if (position == 1)
		ra(a);
	else if (position == 2)
	{
		ra(a);
		ra(a);
	}
	else if (position == 3)
		rra(a);
	if (is_a_sorted(a) == 1)
		return (1);
	pb(a, b);
	sort_3numb(a);
	pa(a, b);
	return (1);		
}

int	sort_5numb(a_stack *a, b_stack *b)
{
	int	smallest;
	int	position;
	
	smallest = get_smallest_numb(a);
	position = get_position(smallest, a);
	if (position == 1)
		ra(a);
	else if (position == 2)
	{
		ra(a);
		ra(a);
	}
	else if (position == 3)
	{
		rra(a);
		rra(a);
	}
	else if (position == 4)
		rra(a);
	if (is_a_sorted(a) == 1)
		return (1);
	pb(a, b);
	sort_4numb(a, b);
	pa(a, b);
	return (1);	
}

int	smaller_sorting(a_stack *a, b_stack *b, int argc)
{
	if (is_a_sorted(a) == 1)
		return (1);
	if (argc == 3)
		return (sort_2numb(a));
	if (argc == 4)
		return (sort_3numb(a));
	if (argc == 5)
		return (sort_4numb(a, b));
	if (argc == 6)
		return (sort_5numb(a, b));
	return (0);
}