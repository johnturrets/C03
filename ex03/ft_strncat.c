// assumes dest has enough size to store src

char *ft_strncat(char *dest, char *src, unsigned int nb) 
{
    char *str = dest;

    while (*dest)
        dest++;
    while (*src && nb--)
        *(dest++) = *(src++);
    
    *dest = '\0';
    return str;
}
