/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:55:10 by ookamonu          #+#    #+#             */
/*   Updated: 2023/09/22 22:22:14 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_push **list_a)
{
	t_push	*last;
	t_push	*first;

	last = *list_a;
	first = *list_a;
	while (last->next != NULL)
		last = last->next;
	*list_a = first->next;
	first->next = NULL;
	last->next = first;
	write(1, "ra\n", 3);
	return ;
}

void	rb(t_push **list_b)
{
	t_push	*last;
	t_push	*first;

	last = *list_b;
	first = *list_b;
	while (last->next != NULL)
		last = last->next;
	*list_b = first->next;
	first->next = NULL;
	last->next = first;
	write(1, "rb\n", 3);
	return ;
}

void	rr(t_push **list_a, t_push **list_b)
{
	ra(list_a);
	rb(list_b);
	write(1, "rrr\n", 4);
}
