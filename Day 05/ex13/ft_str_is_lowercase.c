/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 14:58:19 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/13 15:56:07 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_lowercase(char *str)
{
    while (*str)
    {
        if (!(*str >= 'a' && *str <= 'z'))
            return 0;
        str++;
    }
    return 1;
}