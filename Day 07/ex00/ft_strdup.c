/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 11:12:47 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/24 11:20:53 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strdup(char *str)
{
	char *duplicate;
	char *original_duplicate;

	duplicate = (char *)malloc(ft_strlen(str) * sizeof(char) + 1);
	original_duplicate = duplicate;
	while (*str)
		*(duplicate++) = *(str++);
	*duplicate = '\0';
	return (original_duplicate);
}
