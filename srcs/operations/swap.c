/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:50:26 by dhussain          #+#    #+#             */
/*   Updated: 2023/03/02 10:51:27 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sa(t_astack *a)
{
	int	temp;

	if (a->total == 0 || a->total == 1)
		return ;
	temp = a->numb;
	a->numb = a->next->numb;
	a = a->next;
	a->numb = temp;
	writing_operations(1);
	return ;
}

void	sb(t_bstack *b)
{
	int	temp;

	if (b->total == 0 || b->total == 1)
		return ;
	temp = b->numb;
	b->numb = b->next->numb;
	b = b->next;
	b->numb = temp;
	writing_operations(2);
	return ;
}

void	ss(t_astack *a, t_bstack *b)
{
	sa(a);
	sb(b);
	writing_operations(3);
	return ;
}
