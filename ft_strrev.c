#include <stdio.h>

char    *ft_strrev(char *str)
{
    int i;
    int len;
    char c;

    i = 0;
    len = 0;
    while (str[len] != '\0')
        len++;
    len = len - 1;
    printf("\n%d", len);
    while (i < len)
    {
        c = str[i];
        str[i] = str[len];
        str[len] = c;
        i++;
        len--;
    }
    return (str);
}

int main(void)
{
    char *str = "Hello";

    printf("\n%s\n", ft_strrev(str));
    return (0);
}