/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_rooms.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 16:42:30 by lgarse            #+#    #+#             */
/*   Updated: 2020/02/15 21:28:32 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void		convert_rooms(t_rooms *r1)
{
	t_rooms	*r;
	t_list	*j;
	int		i;

	r = r1;
	if (!(r->paths = (int **)malloc(sizeof(int **) * r->index_rooms)))
		exit(0);
	if (!(r->room_names = (char **)malloc(sizeof(char **) *
			(1 + r->index_rooms))))
		exit(0);
	i = 0;
	j = r->room_name_list;
	while (i < r->index_rooms)
	{
		r->paths[i] = zero_paths(r->index_rooms);
		r->room_names[i] = ft_strdup((char *)j->content);
		j = j->next;
		i++;
	}
	r->room_names[i] = NULL;
	ft_lstdel(&(r->room_name_list), &delete_content);
	r->room_name_list = NULL;
	r->start = r->index_rooms - (1 + r->start);
	r->end = r->index_rooms - (1 + r->end);
}
