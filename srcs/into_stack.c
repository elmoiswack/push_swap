/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   into_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:11:47 by dhussain          #+#    #+#             */
/*   Updated: 2023/02/18 13:44:08 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	into_stack(char *argv[], int argc, a_stack *a)
{
	int	index_y;
	int	y_max;

	y_max = 0;
	while (argv[y_max])
		y_max++;
	if (argc != 2)
	{
		a->total = y_max - 1;
		index_y = 1;
	}
	else
	{
		a->total = y_max;
		index_y = 0;
	}
	while (index_y < y_max)
	{
		a->numb = ft_atoi(argv[index_y]);
		if (index_y < (y_max - 1))
		{
			a->next = malloc(sizeof(a_stack));
			if (!a->next)
				free_a_list(a);
		}
		a = a->next;
		index_y++;
	}
	a = NULL;
	return ;
}

