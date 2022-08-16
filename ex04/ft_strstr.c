// assumes dest has enough size to store src
char *ft_strstr(char *str, char *to_find)
{   
    char *pto_find = to_find;
    char *pstr = str;


    while (*str)
    {
        if (*str == *to_find)
        {   // set pstr to curr str char, ptofind to first char of to_find
            pstr = str; 
            pto_find = to_find;
            while (*pstr == *pto_find) 
            {
                pstr++;
                pto_find++;
                if (*pto_find == '\0')
                    return str;
            }
         }
         str++;
    }
    return 0;
}
