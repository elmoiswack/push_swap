/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smaller_sorting_3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:01:29 by dhussain          #+#    #+#             */
/*   Updated: 2023/03/02 11:06:49 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	big_big3(t_astack *a)
{
	rra(a);
	if (is_a_sorted(a) == 1)
		return (1);
	sa(a);
	if (is_a_sorted(a) == 1)
		return (1);
	return (0);
}

int	small_big3(t_astack *a)
{
	sa(a);
	if (is_a_sorted(a) == 1)
		return (1);
	rra(a);
	if (is_a_sorted(a) == 1)
		return (1);
	return (0);
}

int	small_small3(t_astack *a)
{
	if (a->numb < a->next->next->numb)
		sa(a);
	else
		ra(a);
	return (1);
}

int	sort_3numb(t_astack *a)
{
	if (is_a_sorted(a) == 1)
		return (1);
	if (a->next->numb > a->numb && a->next->numb > a->next->next->numb)
	{
		if (big_big3(a) == 1)
			return (1);
	}
	if (a->next->numb < a->numb && a->next->numb > a->next->next->numb)
	{
		if (small_big3(a) == 1)
			return (1);
	}
	if (a->next->numb < a->numb && a->next->numb < a->next->next->numb)
		small_small3(a);
	if (is_a_sorted(a) == 1)
		return (1);
	return (-1);
}
