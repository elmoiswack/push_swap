/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:58:04 by dhussain          #+#    #+#             */
/*   Updated: 2023/03/14 14:22:18 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_a_list(t_astack *a)
{
	t_astack	*temp;

	while (a->next != NULL)
	{
		temp = a;
		a = a->next;
		free(temp);
	}
	free(a);
	return ;
}

void	free_b_list(t_bstack *b)
{
	t_bstack	*temp;

	while (b->next != NULL)
	{
		temp = b;
		b = b->next;
		free(temp);
	}
	free(b);
	return ;
}

void	free_both_lists(t_astack *a, t_bstack *b)
{
	free_a_list(a);
	free_b_list(b);
	return ;
}

void	free_arr(char *arr[], int max)
{
	int	index;

	index = 0;
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
