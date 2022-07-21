/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvaz-fe <igvaz-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 00:15:32 by igvaz-fe          #+#    #+#             */
/*   Updated: 2022/07/20 21:58:19 by igvaz-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int main(int argc, char **argv)
{
	t_game	game;
	if (!args_validation(argc, argv))
		exit(1);

	game.mlx = mlx_init();
	game.win = mlx_new_window(game.mlx, 1024, 768, "Test window");
	mlx_loop(game.mlx);
    return (0);
}
