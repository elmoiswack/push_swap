/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:40:35 by dhussain          #+#    #+#             */
/*   Updated: 2023/02/18 16:08:44 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../push_swap.h"

// int	is_sorted(a_stack *a)
// {
// 	int	max;
// 	int	count;

// 	max = a->total;
// 	count = 0;
// 	while (count < (max - 1))
// 	{
// 		if (a->numb < a->next->numb)
// 		{
// 			count++;
// 			a = a->next;
// 		}
// 		else
// 			return (-1);
// 	}
// 	return (1);
// }

// int	get_biggest_numb(a_stack *a, int max)
// {
// 	int	count;
// 	int	biggest_numb;
	
// 	count = 0;
// 	biggest_numb = a->numb;
// 	while (count < max)
// 	{
// 		if (a->numb > biggest_numb)
// 		{
// 			biggest_numb = a->numb;
// 			a = a->next;
// 			count++;
// 		}
// 		else
// 		{
// 			a = a->next;
// 			count++;
// 		}
// 	}
// 	return (biggest_numb);
// }

// int	count_sorting(a_stack *a, b_stack *b, int max, int modulate_numb)
// {
// 	int	index;
// }

// int	sorting(a_stack *a, b_stack *b)
// {
// 	a_stack *head;
// 	int	count;
// 	int	max;
// 	int	biggest_numb;
// 	int	modulate_numb;

// 	max = a->total;
// 	biggest_numb = get_biggest_numb(a, max);
// 	count = 0;
// 	head = a;
// 	modulate_numb = 1;
// 	while (count < max)
// 	{
// 		if (is_sorted(a) == 1)
// 			return (1);
// 		while ((biggest_numb / modulate_numb) > 0)
// 			count_sorting(a, b, max, modulate_numb);
// 		modulate_numb *= 10;
// 		count++;
// 	}
// 	return (-1);
// }
