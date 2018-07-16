/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 10:30:17 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/13 10:35:39 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
    if (nb < 0)
        return 0;
    else if (nb <= 1)
        return 1;
    return nb * ft_recursive_factorial(nb - 1);
}