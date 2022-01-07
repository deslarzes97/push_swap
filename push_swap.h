/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desa <desa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:06:34 by adeslarz          #+#    #+#             */
/*   Updated: 2022/01/07 23:10:11 by desa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "./include/libft/libft.h"
# include <stdio.h>
# include <stdbool.h>

typedef struct s_stack_a
{
	int	*number;
	int	len;
}				t_stack;

typedef struct s_stack
{
	t_stack		*stack_a;
	t_stack		*stack_b;
}				t_stacks;

void	error_msg(char *str);
void	check_input_string(char **argv, t_stack *stack);
void	check_input_args(char **argv, t_stack *stack, int check);
void	ft_malloc(t_stacks *stacks);
void	ft_free(t_stacks *stack, int *copy);
void	ft_algo(t_stacks *stack);
void	preliminary_check(t_stacks *stack);
void	swap_a(t_stacks *stack);
void	swap_b(t_stacks *stack);
void	rotate_a(t_stacks *stack);
void	rotate_b(t_stacks *stack);
void	rev_rotate_a(t_stacks *stack);
void	rev_rotate_b(t_stacks *stack);
int		get_int_min(t_stacks *stack);
int		get_int_max(t_stacks *stack);
int		*push_b(t_stacks *stack);
int		*push_a(t_stacks *stack);
int		*to_radix(t_stacks *stack, int *copy);
int		*get_ordered_array(t_stacks *stack, int *copy);
int		check_order(t_stack *stack);
int		check_args_is_int_2(char *argv);
void	ft_free_split(char **temp);
#endif
