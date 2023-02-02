/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:21:15 by dhussain          #+#    #+#             */
/*   Updated: 2023/02/02 16:24:27 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char *argv[])
{
	a_stack *a;
	b_stack *b;

	a = ft_calloc(1, sizeof(a_stack));
	if (!a)
		error_exit("main\nAllocation of stack a failed!");
	b = ft_calloc(1, sizeof(a_stack));
	if (!b)
		error_exit("main\nAllocation of stack b failed!");
	if (argument_check(argc, argv, a) == -1)
	{
		free_stacks(a, b);
		error_exit("arguments\nArguments passed arent correct!");
	}
	b->total = a->total;
	pa(a, b);
	int i = 0;
	while (i < a->total)
	{
		printf("%i\n", a->array[i]);
		i++;
	}
	exit(EXIT_SUCCESS);
}