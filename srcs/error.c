/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:28:34 by dhussain          #+#    #+#             */
/*   Updated: 2023/02/02 11:49:15 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_stacks(a_stack *a, b_stack *b)
{
	free(a);
	free(b);
	return ;
}

void	error_exit(char *str)
{
	ft_printf("Error in %s\n", str);
	exit(EXIT_FAILURE);
}