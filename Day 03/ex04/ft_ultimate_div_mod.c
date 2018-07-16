/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 10:31:11 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/13 10:36:59 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_ultimate_div_mod(int *a, int *b)
{
    int temp;

    temp = *a;
    *a /= *b;
    *b = temp % *b;
}