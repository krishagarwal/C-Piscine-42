void    *malloc(int size);

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

char    *ft_strdup(char *str)
{
    char *duplicate;
    char *original_duplicate;
    
    duplicate = (char *)malloc(ft_strlen(str) * sizeof(char) + 1);
    original_duplicate = duplicate;
    while (*str)
        *(duplicate++) = *(str++);
    *duplicate = '\0';
    return (original_duplicate);
}
