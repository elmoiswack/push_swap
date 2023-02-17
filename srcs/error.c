/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:58:04 by dhussain          #+#    #+#             */
/*   Updated: 2023/02/17 13:49:08 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_a_list(a_stack *a)
{
	while (a->next != NULL)
	{
		free(a);
		a = a->next;
	}
	free(a);
	return ;
}

void	free_b_list(b_stack *b)
{
	while (b->next != NULL)
	{
		free(b);
		b = b->next;
	}
	free(b);
	return ;
}

void	error_exit(char *str)
{
	ft_printf("%s\n", str);
	exit(EXIT_FAILURE);
}