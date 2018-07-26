/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 12:23:05 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/19 10:11:18 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int		i;
	int		dest_len;
	int		src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	dest += dest_len;
	i = 0;
	while (*src && i++ + dest_len < (int)size - 1)
	{
		*dest = *src;
		src++;
		dest++;
	}
	if ((int)size < dest_len)
		return (size + src_len);
	return (dest_len + src_len);
}
