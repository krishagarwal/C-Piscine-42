/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 12:59:20 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/25 15:08:56 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	else if (base % 2)
		return (ft_collatz_conjecture(3 * base + 1) + 1);
	return (ft_collatz_conjecture(base / 2) + 1);
}
