/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smaller_sorting_3_b.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:53:25 by dhussain          #+#    #+#             */
/*   Updated: 2023/03/14 10:41:55 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	big_big3_b(t_bstack *b)
{
	rrb(b);
	if (is_b_sorted(b) == 1)
		return (1);
	sb(b);
	if (is_b_sorted(b) == 1)
		return (1);
	return (0);
}

int	small_big3_b(t_bstack *b)
{
	sb(b);
	if (is_b_sorted(b) == 1)
		return (1);
	rrb(b);
	if (is_b_sorted(b) == 1)
		return (1);
	return (0);
}

int	small_small3_b(t_bstack *b)
{
	if (b->numb > b->next->next->numb)
		sb(b);
	else
		rb(b);
	return (1);
}

int	sort_3numb_b(t_bstack *b)
{
	if (is_b_sorted(b) == 1)
		return (1);
	if (b->next->numb < b->numb && b->next->numb < b->next->next->numb)
	{
		if (big_big3_b(b) == 1)
			return (1);
	}
	if (b->next->numb > b->numb && b->next->numb < b->next->next->numb)
	{
		if (small_big3_b(b) == 1)
			return (1);
	}
	if (b->next->numb > b->numb && b->next->numb > b->next->next->numb)
		small_small3_b(b);
	if (is_b_sorted(b) == 1)
		return (1);
	return (-1);
}
