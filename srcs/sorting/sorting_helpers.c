/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_helpers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:52:06 by dhussain          #+#    #+#             */
/*   Updated: 2023/03/14 11:42:31 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	push_to_a(t_astack *a, t_bstack *b, int push_count)
{
	int	count;

	count = 0;
	while (count < push_count)
	{
		pa(a, b);
		count++;
	}
	return (1);
}

int	get_biggest_numb(char **numb_arr, int max)
{
	int	biggest;
	int	new_numb;
	int	count;
	int	index;

	index = 0;
	count = 0;
	biggest = ft_atoi(numb_arr[index]);
	while (count < max)
	{
		new_numb = ft_atoi(numb_arr[index]);
		if (new_numb > biggest)
		{
			biggest = new_numb;
			index++;
			count++;
		}
		else
		{
			index++;
			count++;
		}
	}
	return (biggest);
}

char	**biggest_numb_to_end(char **numb_arr, int max, int index)
{
	char	*temp;
	char	*temp_2;

	while (index < (max - 1))
	{
		temp = numb_arr[index + 1];
		temp_2 = numb_arr[index];
		numb_arr[index] = temp;
		numb_arr[index + 1] = temp_2;
		index++;
	}
	return (numb_arr);
}
