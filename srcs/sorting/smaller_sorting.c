/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smaller_sorting.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:19:37 by dhussain          #+#    #+#             */
/*   Updated: 2023/03/07 16:56:31 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	sort_2numb(t_astack *a)
{
	if (a->numb > a->next->numb)
		sa(a);
	return (1);
}

int	sort_4numb(t_astack *a, t_bstack *b)
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

int	sort_5numb(t_astack *a, t_bstack *b)
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

int	smaller_sorting(t_astack *a, t_bstack *b, int argc)
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
