/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 10:35:24 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/13 10:30:48 by kagarwal         ###   ########.fr       */
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

void ft_print_comb(void)
{
    int i;
    int j;
    int k;

    i = 0;
    while (i <= 9)
    {
        j = i + 1;
        while (j <= 9)
        {
            k = j + 1;
            while (k <= 9)
            {
                char a[] = {i + '0', j + '0', k + '0', '\0'};
                ft_putstr(a);
                k++;
            }
            j++;
        }
        i++;
    }
    ft_putstr('\b \b\b \b');
}