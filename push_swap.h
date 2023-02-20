/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:08:04 by dhussain          #+#    #+#             */
/*   Updated: 2023/02/20 16:51:28 by dhussain         ###   ########.fr       */
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
	struct stack_a	*next;
}	a_stack;

typedef struct stack_b {
	int				numb;
	int				total;
	struct stack_b	*next;
}	b_stack;

void	printf_stack(a_stack *a, b_stack *b);

//arguments checks
char	**argument_check(int argc, char *argv[]);
int		overflow_check(int argc, char *argv[]);
int		into_stack(char *argv[], int argc, a_stack *a);
int		doubles_checker(a_stack *a);
int		checker_function(a_stack *a, int numb);

void	error_exit(char *str);
void	free_a_list(a_stack *a);
void	free_b_list(b_stack *b);
void	free_both_lists(a_stack *a, b_stack *b);
void	writing_operations(int i);

//sorting functions
int		smaller_sorting(a_stack *a, b_stack *b, int argc);
int		sorting(a_stack *a, b_stack *b);
int		get_smallest_numb(a_stack *a);
int		get_position(int smallest_numb, a_stack *a);
void	push_to_a(a_stack *a, b_stack *b);
int		is_a_sorted(a_stack *a);
int		is_b_sorted(b_stack *b);

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