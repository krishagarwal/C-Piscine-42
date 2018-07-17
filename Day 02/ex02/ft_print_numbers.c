/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 10:24:35 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/16 13:35:42 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_numbers(void)
{
	int number;

	number = 0;
	while (number <= 9)
	{
		ft_putchar(number + '0');
		number++;
	}
}
