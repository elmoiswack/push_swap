/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:34:44 by dhussain          #+#    #+#             */
/*   Updated: 2023/02/02 15:43:41 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_array(a_stack *a)
{
	int index1;
	int index2;
	int count;

	index2 = 0;
	while(a->array[index2])
	{
		index1 = 0;
		count = 1;
		while (index1 < a->total)
		{
			if (a->array[index1] == a->array[index2])
				count--;
			if (count < 0)
				return (-1);
			index1++;
		}
		index2++;
	}	
	return (1);
}

int	check_integers(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[0] == '-')
			index++;
		if (!(ft_isdigit(str[index])))
			return (-1);
		index++;
	}
	return (1);
}

int	argument_check(int argc, char *argv[], a_stack *a)
{
	int	index_arg;
	int	index_arr;

	index_arg = 1;
	index_arr = 0;
	if (argc < 2)
		exit(EXIT_SUCCESS);
	a->array = ft_calloc(argc, sizeof(int));
	if (!a->array)
		return (-1);
	while (argv[index_arg])
	{	
		if (check_integers(argv[index_arg]) == -1)
			return (-1);
		a->array[index_arr] = ft_atoi(argv[index_arg]);
		index_arg++;
		index_arr++;
	}
	a->total = index_arr;
	if (check_array(a) == -1)
		return (-1);
	return (1);
}