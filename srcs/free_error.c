/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:58:04 by dhussain          #+#    #+#             */
/*   Updated: 2023/02/20 15:45:03 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_a_list(a_stack *a)
{
	int		count;
	int		max;
	a_stack *temp;

	max = a->total;
	count = 0;
	while (count < max)
	{
		temp = a;
		a = a->next;
		free(temp);
		count++;
	}
	return ;
}

void	free_b_list(b_stack *b)
{
	int		count;
	int		max;
	b_stack	*temp;

	max = b->total;
	count = 0;
	while (count < max)
	{
		temp = b;
		b = b->next;
		free(temp);
		count++;
	}
	return ;
}

void	free_both_lists(a_stack *a, b_stack *b)
{
	int		count;
	int		max;
	a_stack *a_temp;
	b_stack	*b_temp;

	max = a->total;
	count = 0;
	while (count < max)
	{
		a_temp = a;
		a = a->next;
		free(a_temp);
		count++;
	}	
	count = 0;
	while (count < (max + 1))
	{
		b_temp = b;
		b = b->next;
		free(b_temp);
		count++;
	}
	return ;
}

void	error_exit(char *str)
{
	ft_printf("%s\n", str);
	exit(EXIT_FAILURE);
}