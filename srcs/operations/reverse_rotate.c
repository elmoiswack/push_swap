/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:55:38 by dhussain          #+#    #+#             */
/*   Updated: 2023/02/17 15:43:20 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	rra(a_stack *a)
{
	a_stack	*head;
	int	temp;
	int	temp2;
	int	max;
	int	count;

	temp = a->numb;
	head = a;
	max = a->total;
	count = 0;
	while (count < (max - 1))
	{
		temp2 = a->next->numb;
		a->next->numb = temp;
		temp = temp2;
		a = a->next;
		count++;
	}
	a = head;
	a->numb = temp;
	writing_operations(9);
	return ;
}

void	rrb(b_stack *b)
{
	b_stack	*head;
	int	temp;
	int	temp2;
	int	max;
	int	count;

	temp = b->numb;
	head = b;
	max = b->total;
	count = 0;
	while (count < (max - 1))
	{
		temp2 = b->next->numb;
		b->next->numb = temp;
		temp = temp2;
		b = b->next;
		count++;
	}
	b = head;
	b->numb = temp;
	writing_operations(10);
	return ;
}

void	rrr(a_stack *a, b_stack *b)
{
	rra(a);
	rrb(b);
	writing_operations(11);
	return ;
}
