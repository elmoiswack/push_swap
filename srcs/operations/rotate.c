/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:54:23 by dhussain          #+#    #+#             */
/*   Updated: 2023/02/09 17:12:19 by dhussain         ###   ########.fr       */
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
	while (count < (max - 2))
	{	
		temp = a->next->numb;
		a->numb = temp;	
		a = a->next;
		count++;
	}
	a->numb = temp_begin;
	return ;
}

void	rb(b_stack *b)
{
	int	temp_begin;
	int	temp;

	temp_begin = b->numb;
	while (b->next != NULL)
	{	
		temp = b->next->numb;
		b->numb = temp;
		if (b->next->next == NULL)
		{
			b->numb = temp_begin;
			break ;
		}		
		b = b->next;
	}
	return ;
}

void	rr(a_stack *a, b_stack *b)
{
	ra(a);
	rb(b);
	return ;
}