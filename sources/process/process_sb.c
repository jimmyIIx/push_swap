/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_sb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:45:07 by nippolit          #+#    #+#             */
/*   Updated: 2024/10/12 23:10:51 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	process_sb(t_data *data, bool print, int i)
{
	t_list	*temp;

	while (i--)
	{
		if (data->stacks.b == NULL || data->stacks.b->next == NULL)
			return ;
		temp = data->stacks.b;
		data->stacks.b = data->stacks.b->next;
		temp->next = data->stacks.b->next;
		data->stacks.b->next = temp;
		if (print == true)
			ft_write("sb\n");
	}
}
/*Certainement! La fonction sb (swap b) échange les deux premiers
éléments au sommet de la pile b. */
