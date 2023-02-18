/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:21:15 by dhussain          #+#    #+#             */
/*   Updated: 2023/02/18 16:14:58 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	printf_stack(a_stack *a, b_stack *b)
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

void	allocate_stack_b(b_stack *b, int max)
{
	int	index;

	index = 0;
	while (index < max)
	{
		b->next = malloc(sizeof(b_stack));
		if (!b->next)
			free_b_list(b);
		b = b->next;
		index++;
	}
	b = NULL;
	return ;
}

int	main(int argc, char *argv[])
{
	a_stack *a;
	b_stack *b;

	argv = argument_check(argc, argv);
	if (!argv)
		error_exit("Error\nWrong argument given!");
	a = ft_calloc(1, sizeof(a_stack));
	if (!a)
		error_exit("Error\nAllocation of list A failed!");
	b = ft_calloc(1, sizeof(b_stack));
	if (!b)
		error_exit("Error\nAllocation of list B failed!");
	into_stack(argv, argc, a);
	allocate_stack_b(b, a->total);
	if (small_sorting(a, b, argc) == 1)
		exit(EXIT_SUCCESS);
	// else if (sorting(a, b) == -1)
	// 	error_exit("Error\n");
	printf_stack(a, b);
	exit(EXIT_SUCCESS);
}