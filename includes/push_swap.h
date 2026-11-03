/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 21:52:40 by jimmy             #+#    #+#             */
/*   Updated: 2024/10/14 03:20:17 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "_includes.h"
# include "_definitions.h"

// core
void	ft_exit(t_data *data, const int code, const char *msg);
void	ft_exit_failure(t_data *data, const char *msg);
void	ft_exit_success(t_data *data, const char *msg);
void	ft_write(const char *str);

// structures
void	st_data_clear(t_data *data);
void	st_data_initialize(t_data *data);
void	st_stacks_clear(t_stacks *stacks);
void	st_stacks_initialize(t_stacks *stacks);
void	st_pack_clear(t_pack *pack);
void	st_pack_initialize(t_pack *pack);

// init
void	ft_init(t_data *data, const int argc, const char **argv);
bool	init_stack(t_data *data, const char *tmp);

// sorting
void	sort(t_data *data);
void	sort2(t_data *data);
void	sort3(t_data *data);

// process
void	process_pa(t_data *data, bool print, int i);
void	process_pb(t_data *data, bool print, int i);
void	process_ra(t_data *data, bool print, int i);
void	process_rb(t_data *data, bool print, int i);
void	process_rr(t_data *data, bool print, int i);
void	process_sa(t_data *data, bool print, int i);
void	process_sb(t_data *data, bool print, int i);
void	process_ss(t_data *data, bool print, int i);
void	process_rra(t_data *data, bool print, int i);
void	process_rrb(t_data *data, bool print, int i);
void	process_rrr(t_data *data, bool print, int i);

// utils

size_t	ft_abs(int nbr);
bool	stack_verif(t_list *stack);
int		look_max(t_list *stack);
int		look_min(t_list *stack);
int		look_middle(size_t index, size_t size);
int		cont(t_list *stack, size_t index);

// calculate

void	calculate(t_pack *pack, t_data *data);
bool	verif1(t_data *data, const size_t index_a, const int cb);
bool	verif2(t_data *data, const size_t index_a, const int cb);
bool	verif3(t_data *data, const size_t index_a, const int cb);

// commande :
// ./push_swap $(shuf -i 0-1000 -n 50)
// ./push_swap $(shuf -i 0-1000 -n 100) | wc -l

#endif
