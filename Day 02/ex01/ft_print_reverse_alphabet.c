/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 10:17:16 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/13 10:27:24 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);

void ft_print_reverse_alphabet(void)
{
    char current;

    current = 'z';
    while (current >= 'a')
    {
        ft_putchar(current);
        current--;
    }
}