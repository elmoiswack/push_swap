/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:08:04 by dhussain          #+#    #+#             */
/*   Updated: 2023/03/14 10:58:56 by dhussain         ###   ########.fr       */
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
}	t_astack;

typedef struct stack_b {
	int				numb;
	int				total;
	struct stack_b	*next;
}	t_bstack;

void	printf_stack(t_astack *a, t_bstack *b);

//arguments checks
char	**argument_check(int argc, char *argv[]);
int		overflow_check(int argc, char *argv[]);
int		into_stack(char *argv[], int argc, t_astack *a);
int		doubles_checker(t_astack *a);
int		checker_function(t_astack *a, int numb);

//free and error functions
void	error_exit(char *str);
void	free_a_list(t_astack *a);
void	free_b_list(t_bstack *b);
void	free_both_lists(t_astack *a, t_bstack *b);
void	free_arr(char *arr[], int max);

//other functions
void	writing_operations(int i);

//SORTING FUNCTIONS
//smaller_sorting.c
int		smaller_sorting(t_astack *a, t_bstack *b, int argc);
int		sort_2numb(t_astack *a);
int		sort_4numb(t_astack *a, t_bstack *b);
int		sort_5numb(t_astack *a, t_bstack *b);
//sorting_helpers_small.c
int		get_smallest_numb(t_astack *a);
int		get_position(int smallest_numb, t_astack *a);
//smaller_sorting_3.c
int		sort_3numb(t_astack *a);
//sorting_algorithm.c
int		sorting(t_astack *a, t_bstack *b, int push_count);
int		sorting_b(t_astack *a, t_bstack *b, int push_count);
//sorting_helpers.c
char	**biggest_numb_to_end(char **numb_arr, int max, int index);
int		get_biggest_numb(char **numb_arr, int max);
int		push_to_a(t_astack *a, t_bstack *b, int push_count);
//pivot_functions.c
int		find_pivot(char **numb_arr, int max);
int		pivot_to_a(t_astack *a, t_bstack *b, int pivot, int pushed);
int		pivot_to_b(t_astack *a, t_bstack *b, int pivot, int pushed);
//pivot_functions_helpers.c
char	**copy_array_a(t_astack *a);
char	**copy_array_b(t_bstack *b);
//sorting_algorithm_small.c
int		is_a_sorted(t_astack *a);
int		is_b_sorted(t_bstack *b);
int		extra_sort_a(t_astack *a, int push);
int		extra_sort_b(t_bstack *b, int push);
//smaller_sorting_3_b.c
int		sort_3numb_b(t_bstack *b);

//operations
void	sa(t_astack *a);
void	sb(t_bstack *b);
void	ss(t_astack *a, t_bstack *b);
void	ra(t_astack *a);
void	rb(t_bstack *b);
void	rr(t_astack *a, t_bstack *b);
void	rra(t_astack *a);
void	rrb(t_bstack *b);
void	rrr(t_astack *a, t_bstack *b);
void	pb(t_astack *a, t_bstack *b);
void	pa(t_astack *a, t_bstack *b);

#endif