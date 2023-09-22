/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_pp.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:55:01 by ookamonu          #+#    #+#             */
/*   Updated: 2023/09/22 22:22:15 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_push **list_a, t_push **list_b)
{
	t_push	*tmp;

	tmp = *list_b;
	*list_b = tmp->next;
	tmp->next = *list_a;
	*list_a = tmp;
	write(1, "pa\n", 3);
}

void	pb(t_push **list_a, t_push **list_b)
{
	t_push	*tmp;

	tmp = *list_a;
	*list_a = tmp->next;
	tmp->next = *list_b;
	*list_b = tmp;
	write(1, "pb\n", 3);
}
