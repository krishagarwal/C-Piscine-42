/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 11:16:35 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/13 11:27:32 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
    int i;

    i = 0;
    while (i <= nb)
    {
        if (i * i == nb)
            return i;
        else if (i * i > nb)
            break;
        i++;
    }
    return 0;
}