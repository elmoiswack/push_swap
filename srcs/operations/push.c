/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantehussain <dantehussain@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:18:36 by dhussain          #+#    #+#             */
/*   Updated: 2023/02/21 10:44:56 by dantehussai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	pb_helper(b_stack *b, int temp)
{
	int	temp2;
	int	count;
	int	max;

	max = b->total;
	count = 0;
	if (b->total != 1)
	{	
		while (count < max)
		{
			temp2 = b->numb;
			b->numb = temp;
			temp = temp2;
			b = b->next;
			count++;
		}
	}
	else
		b->numb = temp;
	return ;
}

void	pb(a_stack *a, b_stack *b)
{
	int temp_to_b;
	int	temp;
	int	count;
	int	max;

	if (a->total == 0)
		return ;	
	temp_to_b = a->numb;
	max = a->total;
	a->total -= 1;
	count = 0;
	while (count < (max - 1))
	{	
		temp = a->next->numb;
		a->numb = temp;	
		a = a->next;
		count++;
	}
	b->total += 1;
	pb_helper(b, temp_to_b);
	writing_operations(5);
	return ;
}

void	pa_helper(a_stack *a, int temp)
{
	int	temp2;
	int	count;
	int	max;

	max = a->total;
	count = 0;
	if (a->total != 1)
	{	
		while (count < max)
		{
			temp2 = a->numb;
			a->numb = temp;
			temp = temp2;
			a = a->next;
			count++;
		}
	}
	else
		a->numb = temp;
	return ;
}

void	pa(a_stack *a, b_stack *b)
{
	int temp_to_a;
	int	temp;
	int	count;
	int	max;

	if (b->total == 0)
		return ;
	temp_to_a = b->numb;
	max = b->total;
	b->total -= 1;
	count = 0;
	while (count < (max - 1))
	{	
		temp = b->next->numb;
		b->numb = temp;	
		b = b->next;
		count++;
	}
	a->total += 1;
	pa_helper(a, temp_to_a);
	writing_operations(4);
	return ;
}
