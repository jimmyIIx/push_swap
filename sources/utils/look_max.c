/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   look_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 02:51:32 by nippolit          #+#    #+#             */
/*   Updated: 2024/10/13 03:03:48 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	look_max(t_list *stack)
{
	int	max;

	max = *(int *)stack->content;
	stack = stack->next;
	while (stack)
	{
		if (max < *(int *)stack->content)
		{
			max = *(int *)stack->content;
		}
		stack = stack->next;
	}
	return (max);
}
