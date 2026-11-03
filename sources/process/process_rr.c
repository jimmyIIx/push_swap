/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_rr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:11:48 by nippolit          #+#    #+#             */
/*   Updated: 2024/10/12 23:10:16 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	process_rr(t_data *data, bool print, int i)
{
	while (i--)
	{
		process_ra(data, false, 1);
		process_rb(data, false, 1);
		if (print == true)
			ft_write("rr\n");
	}
}
/*La fonction rr (rotate a and rotate b) décale tous les éléments
des piles a et b d'une position vers le haut en même temps.
Le premier élément de chaque pile devient le dernier.*/
