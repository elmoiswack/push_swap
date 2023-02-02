/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:30:34 by dhussain          #+#    #+#             */
/*   Updated: 2023/02/02 15:53:04 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(a_stack *a)
{
	int index;
	int temp;
	int temp2;
	int temp_begin;

	get_total_a(a);
	index = 0;
	temp_begin = a->array[a->total - 1];
	temp = a->array[index];
	while (index < a->total)
	{
		index++;
		temp2 = a->array[index];
		a->array[index] = temp;
		temp = temp2;
	}
	a->array[0] = temp_begin;
	return ;
}

void	rrb(b_stack *b)
{
	int index;
	int temp;
	int temp2;
	int temp_begin;

	get_total_b(b);
	index = 0;
	temp_begin = b->array[b->total - 1];
	temp = b->array[index];
	while (index < b->total)
	{
		index++;
		temp2 = b->array[index];
		b->array[index] = temp;
		temp = temp2;
	}
	b->array[0] = temp_begin;
	return ;
}

void	rrr(a_stack *a, b_stack *b)
{
	rra(a);
	rrb(b);
	return ;
}