/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_rb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:58:57 by nippolit          #+#    #+#             */
/*   Updated: 2024/10/12 23:09:46 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	process_rb(t_data *data, bool print, int i)
{
	t_list	*temp;

	while (i--)
	{
		if (data->stacks.b == NULL || data->stacks.b->next == NULL)
			return ;
		temp = data->stacks.b;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = data->stacks.b;
		data->stacks.b = data->stacks.b->next;
		temp->next->next = NULL;
		if (print == true)
			ft_write("rb\n");
	}
}
/*La fonction rb (rotate b) décale tous les éléments de la pile b
d'une position vers le haut. Le premier élément devient le dernier.*/
