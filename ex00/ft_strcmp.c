int ft_strcmp(char *s1, char *s2) 
{

    if (!s1 && !s2)
        return 0;
    if (!s1)
        return -1;
    if (!s2)
        return 1;
    
    while (*s1 == *s2)
    {
        s1++;
        s2++;
    } //   only increment ps1 n ps2 if they are equal; 

    if (*s1 == *s2)
        return 0;
    if (*s1 > *s2)
        return 1;
    return -1;
}


