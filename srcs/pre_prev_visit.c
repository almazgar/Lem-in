/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_prev_visit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 10:43:55 by lgarse            #+#    #+#             */
/*   Updated: 2020/02/12 13:10:54 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void		pre_prev_visit(t_rooms *r1)
{
	t_rooms	*r;

	r = r1;
	if (r1->vhod < r1->vihod)
		r1->vihod = r1->vhod;
	else
		r1->vhod = r1->vihod;
	if (!(r->prev = (int **)malloc(sizeof(int *) * (r->vhod))))
		exit(0);
	if (!(r->visited = (int **)malloc(sizeof(int *) * (r->vhod))))
		exit(0);
	if (!(r->next = (int **)malloc(sizeof(int *) * (r->vhod))))
		exit(0);
}
