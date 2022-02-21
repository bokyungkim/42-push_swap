/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:33:01 by bokim             #+#    #+#             */
/*   Updated: 2022/02/22 03:12:00 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"

# define SUCCESS	1
# define FAIL	0
# define TRUE	1
# define FALSE	0

typedef struct s_node {
	int				value;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_stack {
	int		size;
	t_node	*head;
	t_node	*tail;
	t_node	*cursor;
}	t_stack;

typedef struct s_op {
	int		size;
	t_node	*head;
}	t_op;

void	error_exit(char *msg);
t_stack	*init_stack(void);
t_op	*init_op(void);
void	fill_stack_a(t_stack *stack, char **split);
void	parse(t_stack *stack, char **argv);
void	init_node(t_node *node, int value, t_node *prev, t_node *next);
void	add_node(t_stack *stack, int value);
void	check_wrong_input(char *input);
void	check_repeat(t_stack *stack);
t_node	*get_node(t_stack *pList, int position);
void	display_stack(t_stack *pList);

#endif
