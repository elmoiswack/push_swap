/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:08:04 by dhussain          #+#    #+#             */
/*   Updated: 2023/02/02 16:25:39 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft/libft.h"

typedef struct stack_a {
	char			*array;
	int				total;
}	a_stack;

typedef struct stack_b {
	char			*array;
	int				total;
}	b_stack;

//functions
int	argument_check(int argc, char *argv[], a_stack *a);

//helpers
void	get_total_a(a_stack *a);
void	get_total_b(b_stack *b);

//operations
void	sa(a_stack *a);
void	sb(b_stack *b);
void	ss(a_stack *a, b_stack *b);
void	ra(a_stack *a);
void	rb(b_stack *b);
void	rr(a_stack *a, b_stack *b);
void	rra(a_stack *a);
void	rrb(b_stack *b);
void	rrr(a_stack *a, b_stack *b);
void	pa(a_stack *a, b_stack *b);

//errors
void	error_exit(char *str);
void	free_stacks(a_stack *a, b_stack *b);

#endif