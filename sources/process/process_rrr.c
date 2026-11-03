/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:34:13 by nippolit          #+#    #+#             */
/*   Updated: 2024/10/12 19:41:11 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	process_rrr(t_data *data, bool print, int i)
{
	while (i--)
	{
		process_rra(data, false, 1);
		process_rrb(data, false, 1);
		if (print == true)
			ft_write("rrr\n");
	}
}
/*La fonction rrr (reverse rotate a and reverse rotate b) décale 
tous les éléments des piles a et b d'une position vers le bas en même temps*/
