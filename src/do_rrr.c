/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 21:55:18 by ookamonu          #+#    #+#             */
/*   Updated: 2023/09/22 22:22:12 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_push **list_a)
{
	t_push	*last;
	t_push	*tmp;

	last = *list_a;
	tmp = *list_a;
	while (last->next != NULL)
	{
		tmp = last;
		last = last->next;
	}
	last->next = *list_a;
	*list_a = last;
	tmp->next = NULL;
	write(1, "rra\n", 4);
}

void	rrb(t_push **list_b)
{
	t_push	*last;
	t_push	*tmp;

	last = *list_b;
	tmp = *list_b;
	while (last->next != NULL)
	{
		tmp = last;
		last = last->next;
	}
	last->next = *list_b;
	*list_b = last;
	tmp->next = NULL;
	write(1, "rrb\n", 4);
}

void	rrr(t_push **list_a, t_push **list_b)
{
	rra(list_a);
	rrb(list_b);
	write(1, "rrr\n", 4);
}
