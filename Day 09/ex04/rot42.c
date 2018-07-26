/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot42.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 12:32:33 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/26 09:58:12 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*rot42(char *str)
{
	int		i;
	char	*original;

	original = str;
	while (*str)
	{
		i = 0;
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
			while (i < 16)
			{
				(*str)++;
				if (*str == 'z' + 1)
					*str = 'a';
				else if (*str == 'Z' + 1)
					*str = 'A';
				i++;
			}
		str++;
	}
	return (original);
}
