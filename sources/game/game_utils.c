/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 19:24:22 by hde-oliv          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/07/29 16:28:33 by hde-oliv         ###   ########.fr       */
=======
/*   Updated: 2022/07/28 20:57:14 by snovaes          ###   ########.fr       */
>>>>>>> origin/soraia
/*                                                                            */
/* ************************************************************************** */

#include "cub3D.h"

void	put_pixel(t_img *img, int x, int y, int color)
{
	char	*dst;

<<<<<<< HEAD
	(void)game;
	if (x < 0 || x > WIN_WIDTH || y < 0 || y > WIN_HEIGHT)
		return ;
=======
>>>>>>> origin/soraia
	dst = ((char *) img->addr) + (y * img->l_len + x * (img->bpp / 8));
	*(unsigned int *)dst = color;
}

void	draw_vertical_line(t_img *img, int x, t_vector *start_end, int color)
{
	int	i;

	i = start_end->x;
	while (i < (int)start_end->y)
	{
		put_pixel(img, x, i, color);
		i++;
	}
}
