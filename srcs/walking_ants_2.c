/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   walking_ants_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 15:13:17 by avenonat          #+#    #+#             */
/*   Updated: 2020/02/14 16:58:06 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int		walking_ants_2(t_rooms *r, int ants, int **walk, int *nant_path)
{
	int i;
	int ant_end;
	int n;
	int n1;

	n = 1;
	n1 = 0;
	ant_end = 0;
	while (ant_end < ants)
	{
		i = 0;
		while (i < r->count_vihod)
		{
			ant_end = still_walking_2(r, ant_end, walk, i);
			if (r->ant_path[i] && nant_path[i]++ <= r->ant_path[i]
			&& ++n1 <= ants)
				walk[i][0] = n1;
			steps_ants(r, i++, walk);
		}
		n++;
		write(1, "\n", 1);
		r->count_lines++;
	}
	free(nant_path);
	return (ant_end);
}
