/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:58:04 by dhussain          #+#    #+#             */
/*   Updated: 2023/02/17 17:02:42 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_a_list(a_stack *a)
{
	int	count;
	int	max;

	max = a->total;
	count = 0;
	while (count < max)
	{
		free(a);
		a = a->next;
		count++;
	}
	return ;
}

void	free_b_list(b_stack *b)
{
	int	count;
	int	max;

	max = b->total;
	count = 0;
	while (count < max)
	{
		free(b);
		b = b->next;
		count++;
	}
	free(b);
	return ;
}

void	error_exit(char *str)
{
	ft_printf("%s\n", str);
	exit(EXIT_FAILURE);
}