/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 11:15:30 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/24 14:30:06 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *array;
	int *original_array;

	if (min >= max)
		return (0);
	array = (int *)malloc((max - min) * sizeof(int));
	original_array = array;
	while (min < max)
		*(array++) = min++;
	return (original_array);
}
