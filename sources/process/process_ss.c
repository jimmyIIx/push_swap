/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_ss.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:56:40 by nippolit          #+#    #+#             */
/*   Updated: 2024/10/12 23:11:04 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	process_ss(t_data *data, bool print, int i)
{
	while (i--)
	{
		process_sa(data, false, 1);
		process_sb(data, false, 1);
		if (print == true)
			ft_write("ss\n");
	}
}
/*La fonction ss (swap a and swap b) échange les deux premiers
éléments au sommet des piles a et b en même temps*/
