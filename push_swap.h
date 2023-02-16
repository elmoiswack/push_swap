/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:08:04 by dhussain          #+#    #+#             */
/*   Updated: 2023/02/09 18:23:18 by dhussain         ###   ########.fr       */
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

//operations
void	sa(a_stack *a);
void	ra(a_stack *a);
void	rra(a_stack *a);
void	pb(a_stack *a, b_stack *b);
void	pa(a_stack *a, b_stack *b);

#endif