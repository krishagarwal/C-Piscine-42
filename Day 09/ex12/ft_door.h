/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 14:53:34 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/25 15:09:13 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

# define OPEN	0
# define CLOSE	1

# define EXIT_SUCCESS 0

typedef enum	e_bool
{
	TRUE = 1,
	FALSE = 0
}				t_bool;

typedef struct	s_door
{
	int			state;
}				t_door;

#endif