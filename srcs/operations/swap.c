/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:50:26 by dhussain          #+#    #+#             */
/*   Updated: 2023/02/17 15:35:45 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sa(a_stack *a)
{
	int	temp;

	if (a == NULL || a->next == NULL)
		return ;
	temp = a->numb;
	a->numb = a->next->numb;
	a = a->next;
	a->numb = temp;
	writing_operations(1);
	return ;
}

void	sb(b_stack *b)
{
	int	temp;

	temp = b->numb;
	b->numb = b->next->numb;
	b = b->next;
	b->numb = temp;
	writing_operations(2);
	return ;
}

void	ss(a_stack *a, b_stack *b)
{
	sa(a);
	sb(b);
	writing_operations(3);
	return ;
}