/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 10:48:28 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/13 10:39:45 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (*str != '\0')
    {
        i++;
        str++;
    }
    return i;
}

char *ft_strrev(char *str)
{
    char *start;
    char *end;

    start = str;
    end = str + ft_strlen(str) - 1;
    while (end > start)
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    return str;
}