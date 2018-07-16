/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 11:05:24 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/13 10:31:34 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);

void ft_putstr(char *c)
{
    while (*c != '\0')
    {
        ft_putchar(*c);
        c++;
    }
}

void ft_print_comb2(void)
{
    int i;
    int j;

    i = 0;
    while (i < 99)
    {
        j = i + 1;
        while (j <= 99)
        {
            char put_str1[] = {(i / 10) + '0', (i % 10) + '0', ' ', '\0'};
            ft_putstr(put_str1);
            char put_str2[] = {(j / 10) + '0', (j % 10) + '0', '\0'};
            ft_putstr(put_str2);
            if (i != 98)
            {
                ft_putstr(", ");
            }
            j++;
        }
        i++;
    }
}