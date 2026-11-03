/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_stacks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 21:56:45 by jimmy             #+#    #+#             */
/*   Updated: 2024/10/12 21:16:18 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	st_stacks_clear(t_stacks *stacks)
{
	ft_lstclear(&stacks->a, ft_free);
	ft_lstclear(&stacks->b, ft_free);
}

void	st_stacks_initialize(t_stacks *stacks)
{
	stacks->a = NULL;
	stacks->b = NULL;
	stacks->t = NULL;
}
