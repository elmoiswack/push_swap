/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:55:38 by dhussain          #+#    #+#             */
/*   Updated: 2023/02/09 17:08:35 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	rra(a_stack *a)
{
	int	temp;
	int	temp2;
	a_stack	*head;
	int	max;
	int	count;

	temp = a->numb;
	head = a;
	max = a->total;
	count = 0;
	while (count < (max - 2))
	{
		temp2 = a->next->numb;
		a->next->numb = temp;
		temp = temp2;
		a = a->next;
		count++;
	}
	a = head;
	a->numb = temp;
	return ;
}