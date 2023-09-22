/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 21:54:09 by ookamonu          #+#    #+#             */
/*   Updated: 2023/09/22 22:22:23 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	do_sort_100(t_push **a, t_push **b)
{
	int	i;

	i = 0;
	while ((*a) != NULL)
	{
		if (i >= 1 && (*a)->index < i)
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else if ((*a)->index < i + 15)
		{
			pb(a, b);
			i++;
		}
		else if ((*a)->index >= i + 15)
			ra(a);
	}
	do_sort_pa(a, b);
}

void	do_sort_500(t_push **a, t_push **b)
{
	int	i;

	i = 0;
	while ((*a) != NULL)
	{
		if (i >= 1 && (*a)->index < i)
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else if ((*a)->index < i + 30)
		{
			pb(a, b);
			i++;
		}
		else if ((*a)->index >= i + 30)
			ra(a);
	}
	do_sort_pa(a, b);
}
