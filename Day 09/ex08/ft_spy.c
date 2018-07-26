/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 13:05:51 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/25 15:09:14 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_is_whitespace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	else if (c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int		ft_strcmp_modified(char *s1, char *s2)
{
	char s1_current;
	char s2_current;

	while (*s1 || *s2)
	{
		if (ft_is_whitespace(*s1))
			s1++;
		else if (ft_is_whitespace(*s2))
			s2++;
		else
		{
			s1_current = *s1;
			s2_current = *s2;
			if (s1_current >= 97 && s1_current <= 122)
				s1_current -= 32;
			if (s2_current >= 97 && s2_current <= 122)
				s2_current -= 32;
			if (s1_current != s2_current)
				return (0);
			s1++;
			s2++;
		}
	}
	return (1);
}

int		main(int argc, char *argv[])
{
	int i;
	int is_alert;

	i = 0;
	is_alert = 0;
	while (i < argc)
	{
		if (ft_strcmp_modified(argv[i], "president"))
			is_alert = 1;
		else if (ft_strcmp_modified(argv[i], "attack"))
			is_alert = 1;
		else if (ft_strcmp_modified(argv[i], "powers"))
			is_alert = 1;
		i++;
	}
	if (is_alert)
		write(1, "Alert!!!\n", 10);
}
