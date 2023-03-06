/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_helpers_small.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:06:47 by dhussain          #+#    #+#             */
/*   Updated: 2023/03/06 10:07:59 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	get_smallest_numb(t_astack *a)
{
	int	smallest;
	int	max;
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

int	get_position(int numb_to_find, t_astack *a)
{
	int	max;
	int	count;

	max = a->total;
	count = 0;
	while (count < (max - 1))
	{
		if (numb_to_find == a->numb)
			break ;
		count++;
		a = a->next;
	}
	return (count);
}
