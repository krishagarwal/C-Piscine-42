void    *malloc(int size);

int     *ft_range(int min, int max)
{
    int *array;
    int *original_array;

    if (min >= max)
        return 0;
    array = (int *)malloc((max - min) * sizeof(int));
    original_array = array;
    while (min < max)
        *(array++) = min++;
    return (original_array);
}
