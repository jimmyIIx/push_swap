/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_pa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:18:50 by nippolit          #+#    #+#             */
/*   Updated: 2024/10/12 19:40:58 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	process_pa(t_data *data, bool print, int i)
{
	t_list	*temp;

	while (i--)
	{
		if (data->stacks.b == NULL)
			return ;
		temp = data->stacks.b;
		data->stacks.b = data->stacks.b->next;
		temp->next = data->stacks.a;
		data->stacks.a = temp;
		if (print == true)
			ft_write("pa\n");
		++data->size_a;
		--data->size_b;
	}
}
/*La fonction pa (push a) prend le premier élément au sommet de 
la pile b et le met sur la pile a.*/
