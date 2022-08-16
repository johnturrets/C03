int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    if (!s1 && !s2)
        return 0;
    if (!s1) 
        return -1;
    if (!s2)
        return 1;
    
// while --n because need to leave loop in "n" char
// that is, if n == 1, leave loop with ptr pointing to 1st char
// also leave if chars are different
    
    while ((--n > 0) && (s1 == s2))
    {
        s1++;
        s2++;
    } //   only increment ps1 n ps2 if all conditions are true

    if (*s1 == *s2)
        return 0;
    if (*s1 > *s2)
        return 1;
    return -1;
}
