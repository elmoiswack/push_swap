/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   into_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:11:47 by dhussain          #+#    #+#             */
/*   Updated: 2023/03/02 11:31:14 by dhussain         ###   ########.fr       */
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

int	into_stack_loop(int index_y, int y_max, char *argv[], t_astack *a)
{
	while (index_y < y_max)
	{
		a->numb = ft_atoi(argv[index_y]);
		if (index_y < (y_max - 1))
		{
			a->next = malloc(sizeof(t_astack));
			if (!a->next)
			{
				a->total = index_y;
				return (-1);
			}
		}
		a = a->next;
		index_y++;
	}
	a = NULL;
	return (1);
}

int	into_stack(char *argv[], int argc, t_astack *a)
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
		if (into_stack_loop(index_y, y_max, argv, a) == -1)
			return (-1);
	}
	else
	{
		a->total = y_max;
		index_y = 0;
		if (into_stack_loop(index_y, y_max, argv, a) == -1)
		{
			free_argv(argv, y_max);
			return (-1);
		}
		free_argv(argv, y_max);
	}
	return (1);
}
