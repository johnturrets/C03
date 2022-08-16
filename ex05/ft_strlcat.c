// assumes dest has enough size to store src

// " It will append at most size - strlen(dest) - 1 characters. " 

// which means, i think, size = strlen(dest) + size of str to append(counting with '\0' at end)

// returns size of dest + src;
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    char *old_destend = dest;
    unsigned int length = 0;

    while (*dest)
    {
        length++; 
        size--;
        dest++;
    }   //exit with size = size - nr.chars in dest; and dest pointing to '\0' of dest string;
    old_destend = dest;
    while (*src) 
    {
        length++;
        if (size > 1)
        {
            *(dest) = *(src);
            dest++;
            size--;
        }
        src++;
    }
    // only "apply" concatenation if input size was valid.. if theres still size for '\0' 
    if (size >= 1)
        *dest = '\0';
    else
        *old_destend = '\0';
    
    return length;
}
