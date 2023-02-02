/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   total_function.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:50:32 by dhussain          #+#    #+#             */
/*   Updated: 2023/02/02 15:51:46 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	get_total_a(a_stack *a)
{
	while (a->array[a->total])
		a->total++;
	return;
}

void	get_total_b(b_stack *b)
{
	while (b->array[b->total])
		b->total++;
	return;
}