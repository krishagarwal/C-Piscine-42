/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 13:50:44 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/25 15:09:11 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int temp_a;
	int temp_b;
	int temp_c;
	int temp_d;

	temp_a = ***a;
	temp_b = *b;
	temp_c = *******c;
	temp_d = ****d;
	*******c = temp_a;
	****d = temp_c;
	*b = temp_d;
	***a = temp_b;
}
