/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvaz-fe <igvaz-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 20:58:54 by igvaz-fe          #+#    #+#             */
/*   Updated: 2022/07/20 22:18:20 by igvaz-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static int	print_errors(char *error)
{
	printf("Error\n%s\n", error);
	return (0);
}

static int	argv_checker(char *argv)
{
	int	i;

	if (!argv)
		return (0);
	i = 0;
	while (argv[i])
		i++;
	i -= 1;
	if (argv[i] == 'b' && argv[i - 1] == 'u' && argv[i - 2] == 'c'
		&& argv [i - 3] == '.')
		return (1);
	return (0);
}

// static int	is_map_valid(char **map)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	while (map[i])
// 	{
// 		j = 0;
// 		while (map[i][j])
// 		{
// 			if (map[i][j] != 'N' && map[i][j] != 'S' && map[i][j] != 'E'
// 				&& map[i][j] != 'W' && map[i][j] != '0' && map[i][j] != '1')
// 				return (0);
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (1);
// }

int	args_validation(int argc, char **argv)
{
	if (argc != 2)
		return(print_errors("Invalid number of arguments."));
	if(!argv_checker(argv[1]))
		return(print_errors("Invalid map extension."));
	return (1);
}
