/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 11:05:24 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/16 14:26:10 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *c)
{
	while (*c != '\0')
	{
		ft_putchar(*c);
		c++;
	}
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = -1;
	while (++i < 99)
	{
		j = i;
		while (++j <= 99)
		{
			ft_putchar((i / 10) + '0');
			ft_putchar((i % 10) + '0');
			ft_putchar(' ');
			ft_putchar((j / 10) + '0');
			ft_putchar((j % 10) + '0');
			if (i != 98)
				ft_putstr(", ");
		}
	}
}
