/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 14:16:34 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/26 10:11:20 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H

# include <string.h>
# define SAVE_AUSTIN_POWERS "Save Austin Powers"

typedef struct	s_perso
{
	char		*name;
	float		life;
	int			age;
	char		*profession;
}				t_perso;

#endif
