/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_pack.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 23:33:02 by nippolit          #+#    #+#             */
/*   Updated: 2024/10/12 23:36:44 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	st_pack_clear(t_pack *pack)
{
	(void) pack;
}

void	st_pack_initialize(t_pack *pack)
{
	pack->nbr_ra = 0;
	pack->nbr_rb = 0;
}
