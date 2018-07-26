/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 10:25:27 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/25 10:28:01 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int(*f)(int))
{
	int *return_values;
	int i;

	if ((return_values = (int *)malloc(length * sizeof(int))) == NULL)
		return (NULL);
	i = 0;
	while (i < length)
		return_values[i] = f(tab[i++]);
	return (return_values);
}