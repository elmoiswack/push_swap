/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:08:04 by dhussain          #+#    #+#             */
/*   Updated: 2023/03/06 16:51:58 by dhussain         ###   ########.fr       */
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
void	free_arr(char *arr[]);

//other functions
void	writing_operations(int i);

//smaller sorting
int		smaller_sorting(t_astack *a, t_bstack *b, int argc);
int		get_smallest_numb(t_astack *a);
int		get_position(int smallest_numb, t_astack *a);
int		sort_2numb(t_astack *a);
int		sort_3numb(t_astack *a);
int		sort_4numb(t_astack *a, t_bstack *b);
int		sort_5numb(t_astack *a, t_bstack *b);

//sorting
int		sorting(t_astack *a, t_bstack *b, int push_count);
int		sorting_b(t_astack *a, t_bstack *b, int push_count);
int		get_biggest_numb(char **numb_arr, int max);
char	**copy_array(t_astack *a);
void	push_to_a(t_astack *a, t_bstack *b);
int		find_pivot(char **numb_arr, int max);
int		pivot_to_a(t_astack *a, t_bstack *b, int pivot);
int		pivot_to_b(t_astack *a, t_bstack *b, int pivot);
int		is_a_sorted(t_astack *a);
int		is_b_sorted(t_bstack *b);
char	**biggest_numb_to_end(char **numb_arr, int max, int index);

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