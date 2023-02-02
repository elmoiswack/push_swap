/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:47:10 by dhussain          #+#    #+#             */
/*   Updated: 2023/02/02 15:45:11 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(a_stack *a)
{
	int temp;

	if ((a->array[0] == '\0') || (a->array[1] == '\0'))
		return ;
	temp = a->array[0];
	a->array[0] = a->array[1];
	a->array[1] = temp;
	return ;
}

void	sb(b_stack *b)
{
	int temp;

	if ((b->array[0] == '\0') || (b->array[1] == '\0'))
		return ;
	temp = b->array[0];
	b->array[0] = b->array[1];
	b->array[1] = temp;
	return ;
}

void	ss(a_stack *a, b_stack *b)
{
	sa(a);
	sb(b);
	return ;
}