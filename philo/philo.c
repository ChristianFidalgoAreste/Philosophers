/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfidalgo <cfidalgo@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:46:44 by cfidalgo          #+#    #+#             */
/*   Updated: 2024/04/24 19:02:07 by cfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char **argv)
{
	t_table	table;

	if (argc < 5 || argc > 6)
		return (handle_error("Incorrect number of arguments\n"), 1);
	if (!check_args_validity(&argv[1]))
		return (handle_error("Invalid arguments\n"), 1);
	if (!init_simulation(&table, &argv[1]))
		return (free_simulation_memory(&table), 1);
	clear_simulation(&table);
	return (0);
}
