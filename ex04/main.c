#include <stdio.h>


char *ft_strstr(char *str, char *to_find); 

int main(void)
{
    char s1[50] = "helloamanamemaloamana";
    char *s2 = "amana";
    char *s3 = ft_strstr(s1, s2);

    printf("%s\n", s3);
    return 0;
}
