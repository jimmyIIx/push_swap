/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_ra.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:51:25 by nippolit          #+#    #+#             */
/*   Updated: 2024/10/12 22:50:25 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	process_ra(t_data *data, bool print, int i)
{
	t_list	*temp;

	while (i--)
	{
		if (data->stacks.a == NULL || data->stacks.a->next == NULL)
			return ;
		temp = data->stacks.a;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = data->stacks.a;
		data->stacks.a = data->stacks.a->next;
		temp->next->next = NULL;
		if (print == true)
			ft_write("ra\n");
	}
}
/*La fonction ra (rotate a) décale tous les éléments de la pile a
d'une position vers le haut. Le premier élément devient le dernier.*/
