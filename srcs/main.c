/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:21:15 by dhussain          #+#    #+#             */
/*   Updated: 2023/03/14 14:34:03 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	allocate_stack_b(t_bstack *b, int max)
{
	int	index;

	index = 0;
	while (index < max)
	{
		b->next = ft_calloc(1, sizeof(t_bstack));
		if (!b->next)
			return (index);
		b = b->next;
		index++;
	}
	b = NULL;
	return (-1);
}

int	second_arguments(int argc, char *argv[], t_astack *a, t_bstack *b)
{
	if (into_stack(argv, argc, a) == -1)
	{
		free_a_list(a);
		free(b);
		return (-1);
	}
	if (doubles_checker(a) == -1)
	{
		free_a_list(a);
		free(b);
		return (-1);
	}
	b->total = allocate_stack_b(b, a->total);
	if (b->total != -1)
	{
		free_a_list(a);
		free_b_list(b);
		return (-1);
	}
	b->total = 0;
	return (1);
}

int	arguments(int argc, char *argv[], t_astack *a, t_bstack *b)
{
	argv = argument_check(argc, argv);
	if (!argv)
	{
		free(a);
		free(b);
		return (-1);
	}
	if (argv[0][0] == 'a')
	{
		free(a);
		free(b);
		free(argv[0]);
		free(argv);
		exit(EXIT_SUCCESS);
	}
	if (overflow_check(argc, argv) == -1)
	{
		free(a);
		free(b);
		return (-1);
	}
	return (second_arguments(argc, argv, a, b));
}

void	which_sorting(t_astack *a, t_bstack *b, int argc)
{
	if (smaller_sorting(a, b, argc) == 1)
	{
		free_both_lists(a, b);
		exit(EXIT_SUCCESS);
	}
	if (sorting(a, b, a->total) == -1)
	{
		free_both_lists(a, b);
		error_exit("Error\nSorting failed");
	}
	return ;
}

int	main(int argc, char *argv[])
{
	t_astack	*a;
	t_bstack	*b;

	if (argc < 2)
		exit(EXIT_SUCCESS);
	a = ft_calloc(1, sizeof(t_astack));
	if (!a)
		error_exit("Error\nAllocation failed");
	b = ft_calloc(1, sizeof(t_bstack));
	if (!b)
	{
		free(a);
		error_exit("Error\nAllocation failed");
	}
	if (arguments(argc, argv, a, b) == -1)
		error_exit("Error\nArguments wrong");
	if (argc == 2)
		argc = a->total + 1;
	which_sorting(a, b, argc);
	free_both_lists(a, b);
	exit(EXIT_SUCCESS);
}
