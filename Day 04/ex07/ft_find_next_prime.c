/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 14:46:31 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/13 14:55:43 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
    int i;

    if (nb <= 1)
        return 0;

    i = 2;
    while (i <= nb / 2)
    {
        if (nb % i == 0)
            return 0;
        i++;
    }
    return 1;
}

int ft_find_next_prime(int nb)
{
    while (!ft_is_prime(nb))
    {
        nb++;
    }
    return nb;
}