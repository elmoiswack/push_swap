/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:21:15 by dhussain          #+#    #+#             */
/*   Updated: 2023/03/02 13:49:57 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	printf_stack(t_astack *a, t_bstack *b)
{
	int	count;
	int	max;
	
	max = a->total;
	count = 0;
	while (count < max)
	{
		printf("a numb = %i\n", a->numb);
		a = a->next;
		count++;
	}
	int	b_max;
	int	b_count;
	b_count = 0;
	b_max = b->total;
	if (b_max == 0)
		return ;
	printf("\n");
	while (b_count < b_max)
	{
		printf("b numb = %i\n", b->numb);
		b_count++;
		b = b->next;
	}
	return ;
}

int	allocate_stack_b(t_bstack *b, int max)
{
	int	index;

	index = 0;
	while (index < max)
	{
		b->next = malloc(sizeof(t_bstack));
		if (!b->next)
			return (index);
		b = b->next;
		index++;
	}
	b = NULL;
	return (-1);
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
	if (overflow_check(argc, argv) == -1)
	{
		free(a);
		free(b);
		return (-1);
	}
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
	if (smaller_sorting(a, b, argc) == 1)
	{
		printf_stack(a, b);
		free_both_lists(a, b);
		exit(EXIT_SUCCESS);
	}
	if (sorting(a, b) == -1)
	{
		printf_stack(a, b);
		free_both_lists(a, b);
		error_exit("Error\nFailed sorting");
	}
	printf_stack(a, b);
	free_both_lists(a, b);
	exit(EXIT_SUCCESS);
}
