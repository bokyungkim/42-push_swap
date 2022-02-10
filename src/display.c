/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:54:37 by bokim             #+#    #+#             */
/*   Updated: 2022/02/10 18:54:59 by bokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_node* get_node(t_stack* pList, int position){
	t_node *node;
	
	if (position <= pList->size / 2) {
		node = pList->head;
		for (int i = 0; i < position + 1; i++) {
			node = node->next;
		}
	}
	else {
		node = pList->tail;
		for (int i = 0; i < pList->size - position; i++) {
			node = node->prev;
		}
	}
	return (node);
}

void display_stack(t_stack* pList){
	int i = 0;

	if (pList->size > 0)
	{
		for (i = 0; i < pList->size; i++)
		{
			ft_printf("[%d] : %d\n", i, get_node(pList, i)->value);
		}
		ft_printf("--------\n");
	}
	else
	{
		ft_printf("No elements\n");
	}
}
