/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:58:04 by dhussain          #+#    #+#             */
/*   Updated: 2023/03/06 15:29:07 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_a_list(t_astack *a)
{
	int			count;
	int			max;
	t_astack	*temp;

	max = a->total;
	count = 0;
	while (count < max)
	{
		temp = a;
		a = a->next;
		free(temp);
		count++;
	}
	return ;
}

void	free_b_list(t_bstack *b)
{
	int			count;
	int			max;
	t_bstack	*temp;

	max = b->total;
	count = 0;
	while (count < max)
	{
		temp = b;
		b = b->next;
		free(temp);
		count++;
	}
	return ;
}

void	free_both_lists(t_astack *a, t_bstack *b)
{
	int			count;
	int			max;
	t_astack	*a_temp;
	t_bstack	*b_temp;

	max = a->total;
	count = 0;
	while (count < max)
	{
		a_temp = a;
		a = a->next;
		free(a_temp);
		count++;
	}	
	count = 0;
	while (count < (max + 1))
	{
		b_temp = b;
		b = b->next;
		free(b_temp);
		count++;
	}
	return ;
}

void	free_arr(char *arr[])
{
	int	index;
	int	max;

	max = 0;
	index = 0;
	while (arr[max] != NULL)
		max++;
	while (index < max)
	{
		free(arr[index]);
		index++;
	}
	free(arr);
	return ;
}

void	error_exit(char *str)
{
	ft_printf("%s\n", str);
	exit(EXIT_FAILURE);
}
