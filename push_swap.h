/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desa <desa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:06:34 by adeslarz          #+#    #+#             */
/*   Updated: 2022/01/02 20:18:49 by desa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "./include/libft/libft.h"
# include "./include/ft_printf/ft_printf.h"

typedef struct s_stack_a
{
	int	*number;
	int	len;
}				t_stack_a;

typedef struct s_stack
{
	t_stack_a		*stack_a;
	t_stack_a		*stack_b;
}				t_stack;

int		error_msg(char *str, t_stack *stack);
int		check_input(char *str, t_stack	*stack);
void	ft_malloc(t_stack *stack, int i);
void	ft_free(t_stack *stack);
void	ft_clean_exit(t_stack *stack);
int		get_int_min(t_stack *stack);
int		get_int_max(t_stack *stack);
void	swap_a(t_stack *stack);
void	swap_b(t_stack *stack);
void	rotate_a(t_stack *stack);
void	rotate_b(t_stack *stack);
void	rev_rotate_a(t_stack *stack);
void	rev_rotate_b(t_stack *stack);
int		*push_b(t_stack *stack);
int		*push_a(t_stack *stack);
#endif
