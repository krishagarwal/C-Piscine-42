/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 10:35:24 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/16 14:19:46 by kagarwal         ###   ########.fr       */
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

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = -1;
	while (++i <= 9)
	{
		j = i;
		while (++j <= 9)
		{
			k = j;
			while (++k <= 9)
			{
				ft_putchar(i + '0');
				ft_putchar(j + '0');
				ft_putchar(k + '0');
				ft_putstr(", ");
			}
		}
	}
	ft_putstr("\b \b\b \b");
}
