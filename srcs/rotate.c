/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:49:16 by dhussain          #+#    #+#             */
/*   Updated: 2023/02/02 15:52:36 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(a_stack *a)
{
	int index;
	int temp;
	int	temp2;
	int temp_end;

	get_total_a(a);
	index = a->total - 1;
	temp_end = a->array[0];
	temp = a->array[index];
	while (index >= 0)
	{
		index--;
		temp2 = a->array[index];
		a->array[index] = temp;
		temp = temp2;
	}
	a->array[a->total - 1] = temp_end;
	return ;
}

void	rb(b_stack *b)
{
	int index;
	int temp;
	int	temp2;
	int temp_end;

	get_total_b(b);
	index = b->total - 1;
	temp_end = b->array[0];
	temp = b->array[index];
	while (index >= 0)
	{
		index--;
		temp2 = b->array[index];
		b->array[index] = temp;
		temp = temp2;
	}
	b->array[b->total - 1] = temp_end;
	return ;
}

void	rr(a_stack *a, b_stack *b)
{
	ra(a);
	rb(b);
	return ;
}
