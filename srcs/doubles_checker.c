/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubles_checker.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:10:38 by dhussain          #+#    #+#             */
/*   Updated: 2023/03/02 11:00:03 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	checker_function(t_astack *a, int numb)
{
	int	count_loop;
	int	count;
	int	max;

	count_loop = 0;
	count = 1;
	max = a->total;
	while (count_loop < max)
	{
		if (numb == a->numb)
			count--;
		if (count < 0)
			return (-1);
		a = a->next;
		count_loop++;
	}
	return (1);
}

int	doubles_checker(t_astack *a)
{
	int			count;
	int			max;
	t_astack	*head;

	count = 0;
	max = a->total;
	head = a;
	while (count < (max - 1))
	{
		if (checker_function(head, a->numb) == -1)
			return (-1);
		a = a->next;
		count++;
	}
	return (1);
}
