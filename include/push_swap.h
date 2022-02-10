/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:33:01 by bokim             #+#    #+#             */
/*   Updated: 2022/02/10 18:55:16 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"

# define SUCCESS	1
# define FAIL	0

typedef struct s_node {
	int	value;
	struct s_node *prev;
	struct s_node *next;
} t_node;

typedef struct s_stack {
	int	size;
	t_node *head;
	t_node *tail;
	t_node *cursor;
} t_stack;

void	error_exit(char *msg);
t_stack	*init_stack(void);
void	init_node(t_node *node, int value, t_node *prev, t_node *next);
void	add_node(t_stack* stack, int value);
t_node* get_node(t_stack* pList, int position);
void display_stack(t_stack* pList);

#endif
