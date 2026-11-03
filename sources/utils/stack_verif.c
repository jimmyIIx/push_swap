/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_verif.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 22:37:06 by nippolit          #+#    #+#             */
/*   Updated: 2024/10/12 22:49:52 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	stack_verif(t_list *stack)
{
	while (stack->next)
	{
		if (*(int *)stack->content > *(int *)stack->next->content)
			return (false);
		stack = stack->next;
	}
	return (true);
}
