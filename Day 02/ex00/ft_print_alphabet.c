/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 10:12:32 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/13 10:24:17 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);

void ft_print_alphabet(void)
{
    char current;

    current = 'a';
    while (current <= 'z')
    {
        ft_putchar(current);
        current++;
    }
}