/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagarwal <kagarwal@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 15:59:03 by kagarwal          #+#    #+#             */
/*   Updated: 2018/07/19 09:42:46 by kagarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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

void	ft_make_string(char *previous_pos)
{
	int		i;
	int		length;

	length = ft_strlen(previous_pos);
	if (length == 8)
	{
		while (*previous_pos != '\0')
		{
			ft_putchar(*previous_pos);
			previous_pos++;
		}
		ft_putchar('\n');
		return ;
	}
	i = 1;
	while (i <= 8)
	{
		*(previous_pos + length) = (i + '0');
		*(previous_pos + length + 1) = '\0';
		if (ft_check_pos(previous_pos))
			ft_make_string(previous_pos);
		i++;
	}
}

void	ft_eight_queens_puzzle_2(void)
{
	char pos[9];

	ft_make_string(pos);
}
