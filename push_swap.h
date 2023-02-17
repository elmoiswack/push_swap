/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:08:04 by dhussain          #+#    #+#             */
/*   Updated: 2023/02/17 15:40:12 by dhussain         ###   ########.fr       */
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
	int				numb;
	int				total;
	struct stack_a	*head;
	struct stack_a	*next;
}	a_stack;

typedef struct stack_b {
	int				numb;
	int				total;
	struct stack_b	*next;
}	b_stack;

int		argument_check(int argc, char *argv[]);
void	error_exit(char *str);
void	into_stack(char *argv[], int argc, a_stack *a);
void	free_a_list(a_stack *a);
void	free_b_list(b_stack *b);
void	writing_operations(int i);

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
void	pb(a_stack *a, b_stack *b);
void	pa(a_stack *a, b_stack *b);

#endif