/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:29:32 by dhussain          #+#    #+#             */
/*   Updated: 2023/02/17 15:34:06 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	writing_operations(int i)
{
	if (i == 1)
		write(1, "sa\n", 4);
	if (i == 2)
		write(1, "sb\n", 4);
	if (i == 3)
		write(1, "ss\n", 4);
	if (i == 4)
		write(1, "pa\n", 4);
	if (i == 5)
		write(1, "pb\n", 4);
	if (i == 6)
		write(1, "ra\n", 4);
	if (i == 7)
		write(1, "rb\n", 4);
	if (i == 8)
		write(1, "rr\n", 4);
	if (i == 9)
		write(1, "rra\n", 5);
	if (i == 10)
		write(1, "rrb\n", 5);
	if (i == 11)
		write(1, "rrr\n", 5);
	return ;
}