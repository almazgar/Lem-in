/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepare_div.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 14:06:43 by avenonat          #+#    #+#             */
/*   Updated: 2020/02/20 15:29:05 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void	prepare_div(t_rooms *r)
{
	int i;

	if (!(r->length = (int *)malloc(sizeof(int) * r->count_vihod)))
		exit(0);
	if (!(r->ant_path = (int *)malloc(sizeof(int) * r->count_vihod)))
		exit(0);
	if (!(r->count_distance = (int *)malloc(sizeof(int) * r->count_vihod)))
		exit(0);
	i = -1;
	while (++i < r->count_vihod)
	{
		r->ant_path[i] = 0;
		r->length[i] = count_distance(r, i);
		r->count_distance[i] = count_distance(r, i);
	}
}
