/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 15:20:50 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/19 09:41:16 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
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

int		ft_check_pos(char *pos)
{
	int		length;
	int		distance;
	int		i;
	char	*end;

	length = ft_strlen(pos);
	i = 0;
	end = pos + length - 1;
	while (end != pos && i < length)
	{
		distance = ((int)end - (int)pos) / sizeof(char);
		if (*pos == *end)
			return (0);
		else if ((*pos - '0') + distance == (*end - '0'))
			return (0);
		else if ((*pos - '0') - distance == (*end - '0'))
			return (0);
		pos++;
	}
	return (1);
}

void	ft_make_string(char *previous_pos, int *count)
{
	int		i;
	int		length;

	length = ft_strlen(previous_pos);
	if (length == 8)
	{
		(*count)++;
		return ;
	}
	i = 1;
	while (i <= 8)
	{
		*(previous_pos + length) = (i + '0');
		*(previous_pos + length + 1) = '\0';
		if (ft_check_pos(previous_pos))
			ft_make_string(previous_pos, count);
		i++;
	}
}

int		ft_eight_queens_puzzle(void)
{
	char	pos[9];
	int		count;

	count = 0;
	ft_make_string(pos, &count);
	return (count);
}
