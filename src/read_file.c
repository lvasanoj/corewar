/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkyttala <rkyttala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 22:33:29 by rkyttala          #+#    #+#             */
/*   Updated: 2021/07/23 17:15:18 by rkyttala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

t_champs	*read_cor(const char *filepath, t_core *core)
{
	int	fd;
	t_champs	*champ;

	fd = open(filepath, O_RDONLY);
	if (fd == -1)
		print_error("Unable to read file", filepath);
	champ = (t_champs *)malloc(sizeof(t_champs));
	parse_champ(fd, core);
	core->champ_count++;
	close(fd);
	return (NULL);
}
