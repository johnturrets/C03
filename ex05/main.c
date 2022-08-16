#include <stdio.h>


unsigned int ft_strlcat(char *dst, char *src, unsigned int size); 


int main(void)
{
    char s1[50] = "hello";
    char *s2 = "amana";
    unsigned int tried = ft_strlcat(s1, s2, 222);

    printf("%d\n", tried);
    printf("%s\n", s1);
    return 0;
}
