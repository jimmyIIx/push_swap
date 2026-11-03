/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_rra.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:30:02 by nippolit          #+#    #+#             */
/*   Updated: 2024/10/12 22:50:27 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	process_rra(t_data *data, bool print, int i)
{
	t_list	*temp;
	t_list	*last;

	while (i--)
	{
		if (data->stacks.a == NULL || data->stacks.a->next == NULL)
			return ;
		temp = data->stacks.a;
		while (temp->next->next != NULL)
			temp = temp->next;
		last = temp->next;
		temp->next = NULL;
		last->next = data->stacks.a;
		data->stacks.a = last;
		if (print == true)
			ft_write("rra\n");
	}
}
/*La fonction rra (reverse rotate a) décale tous les éléments de la pile
a d'une position vers le bas. Le dernier élément devient le premier. */
