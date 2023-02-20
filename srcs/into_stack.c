/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   into_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:11:47 by dhussain          #+#    #+#             */
/*   Updated: 2023/02/20 15:07:44 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_argv(char *argv[], int y)
{
	y--;
	while (y != -1)
	{
		free(argv[y]);
		y--;
	}
	free(argv);
	return ;
}

int	into_stack(char *argv[], int argc, a_stack *a)
{
	int	index_y;
	int	y_max;
	int	check;

	y_max = 0;
	while (argv[y_max])
		y_max++;
	if (argc != 2)
	{
		a->total = y_max - 1;
		index_y = 1;
		check = 0;
	}
	else
	{
		a->total = y_max;
		index_y = 0;
		check = 1;
	}
	while (index_y < y_max)
	{
		a->numb = ft_atoi(argv[index_y]);
		if (index_y < (y_max - 1))
		{
			a->next = malloc(sizeof(a_stack));
			if (!a->next)
			{
				if (check == 1)
					free_argv(argv, y_max);
				a->total = index_y;
				return (-1);
			}
		}
		a = a->next;
		index_y++;
	}
	a = NULL;
	if (check == 1)
		free_argv(argv, y_max);
	return (1);
}

