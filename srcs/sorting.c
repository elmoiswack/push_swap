/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:04:44 by dhussain          #+#    #+#             */
/*   Updated: 2023/03/02 17:30:39 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	**copy_array(t_astack *a)
{
	char	**arr;
	int		index;
	int		max;

	max = a->total;
	index = 0;
	arr = malloc(max * sizeof(char *));
	if (!arr)
		return (NULL);
	while (index < max)
	{
		arr[index] = ft_itoa(a->numb);
		a = a->next;
		index++;
	}
	return (arr);
}

int	find_pivot(char **numb_arr, int max)
{
	int	pivot;
	int	biggest;
	int	index;
	int	middle;
	char	*temp;
	
	middle = max / 2;
	while (max > middle)
	{
		biggest = get_biggest_numb(numb_arr, max);
		index = 0;
		while (numb_arr[index])
		{
			if (ft_atoi(numb_arr[index]) == biggest)
			{
				while (index < (max - 1))
				{
					temp = numb_arr[index + 1];
					numb_arr[index] = temp;
					index++;
				}
				break ;
			}
			index++;
		}
		max--;
	}
	index = 0;
	while (index < max)
	{
		printf("aa %s\n", numb_arr[index]);
		index++;
	}
	pivot = get_biggest_numb(numb_arr, max);
	return (pivot);
}

void	pivot_to_b(t_astack *a, t_bstack *b, int pivot)
{
	int	count;
	int	max;
	
	count = 0;
	max = a->total;
	while (count < (max - 1))
	{
		if (a->numb < pivot)
			pb(a, b);
		else
			ra(a);
		count++;
	}
	return ;
}

int	sorting(t_astack *a, t_bstack *b)
{
	char	**numb_arr;
	int		pivot;

	if (is_a_sorted(a) == 1)
		return (1);
	numb_arr = copy_array(a);
	if (!numb_arr)
		return (-1);
	pivot = find_pivot(numb_arr, a->total);
	printf("pivot = %i\n", pivot);
	//pivot_to_b(a, b, pivot);
	printf_stack(a, b);
	exit(1);
}