/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.us.org       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 10:10:58 by rpenmatc          #+#    #+#             */
/*   Updated: 2018/07/16 10:11:02 by rpenmatc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_putstr(char *str)
{
    while (*str)
    {
        ft_putchar(*str);
        str++;
    }
}