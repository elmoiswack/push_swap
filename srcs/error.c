/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:58:04 by dhussain          #+#    #+#             */
/*   Updated: 2023/02/09 18:14:44 by dhussain         ###   ########.fr       */
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
	error_exit("stack a failed and freed!");
}

void	free_b_list(b_stack *b)
{
	while (b->next != NULL)
	{
		free(b);
		b = b->next;
	}
	free(b);
	error_exit("stack b failed and freed!");
}

void	error_exit(char *str)
{
	ft_printf("%s\n", str);
	exit(EXIT_FAILURE);
}