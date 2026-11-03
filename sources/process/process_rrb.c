/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_rrb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:25:12 by nippolit          #+#    #+#             */
/*   Updated: 2024/10/12 23:04:23 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	process_rrb(t_data *data, bool print, int i)
{
	t_list	*temp;
	t_list	*last;

	while (i--)
	{
		if (data->stacks.b == NULL || data->stacks.b->next == NULL)
			return ;
		temp = data->stacks.b;
		while (temp->next->next != NULL)
			temp = temp->next;
		last = temp->next;
		temp->next = NULL;
		last->next = data->stacks.b;
		data->stacks.b = last;
		if (print == true)
			ft_write("rrb\n");
	}
}
/*La fonction rrb (reverse rotate b) décale tous les éléments de la
pile b d'une position vers le bas. Le dernier élément devient le premier.*/
