int     *ft_range(int min, int max)
{
    int *array;
    int *original_array;

    array = (char *)malloc((max - min) * sizeof(int));
    original_array = array;
    while (min < max)
        *(array++) = min++;
    return original_array;
}