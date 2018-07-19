/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 01:30:13 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/18 14:36:27 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_result;
int g_is_positive;
int g_is_first_iteration;

int		ft_atoi(char *str)
{
	g_result = 0;
	g_is_positive = 1;
	g_is_first_iteration = 1;
	while (*str != '\0')
	{
		if (*str == '\n' || *str == '\v' || *str == '\t'
		|| *str == '\r' || *str == '\f')
			;
		else
		{
			if (g_is_first_iteration && *str == '-')
				g_is_positive = 0;
			else if (*str < '0' || *str > '9')
				return (g_result);
			else if (g_is_positive)
				g_result = g_result * 10 + (*str - '0');
			else
				g_result = g_result * 10 - (*str - '0');
			g_is_first_iteration = 0;
		}
		str++;
	}
	return (g_result);
}
