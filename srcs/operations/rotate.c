/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:54:23 by dhussain          #+#    #+#             */
/*   Updated: 2023/02/17 15:43:54 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ra(a_stack *a)
{
	int	temp_begin;
	int	temp;
	int	count;
	int	max;

	max = a->total;
	count = 0;
	temp_begin = a->numb;
	while (count < (max - 1))
	{	
		temp = a->next->numb;
		a->numb = temp;	
		a = a->next;
		count++;
	}
	a->numb = temp_begin;
	writing_operations(6);
	return ;
}

void	rb(b_stack *b)
{
	int	temp_begin;
	int	temp;
	int	count;
	int	max;

	max = b->total;
	count = 0;
	temp_begin = b->numb;
	while (count < (max - 1))
	{	
		temp = b->next->numb;
		b->numb = temp;	
		b = b->next;
		count++;
	}
	b->numb = temp_begin;
	writing_operations(7);
	return ;
}

void	rr(a_stack *a, b_stack *b)
{
	ra(a);
	rb(b);
	writing_operations(8);
	return ;
}