/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:05:28 by dhussain          #+#    #+#             */
/*   Updated: 2023/02/18 16:17:25 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sorting_2numb(a_stack *a)
{
	if (a->numb > a->next->numb)
		ra(a);
	return (1);
}

int	sorting_3numb(a_stack *a, b_stack *b)
{
	pb(a, b);
}

int	sorting_4numb(a_stack *a, b_stack *b)
{
	
}

int	sorting_5numb(a_stack *a, b_stack *b)
{
	
}

int	small_sorting(a_stack *a, b_stack *b, int argc)
{
	if (argc == 3)
		return (sorting_2numb(a));
	if (argc == 4)
		return (sorting_3numb(a, b));
	if (argc == 5)
		return (sorting_4numb(a, b));
	if (argc == 6)
		return (sorting_5numb(a, b));
	return (-1);
}