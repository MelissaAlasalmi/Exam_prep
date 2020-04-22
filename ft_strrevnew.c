#include <stdio.h>

char    *ft_strrev(char *str)
{
    int i;
    int j;
    char temp;

    i = 0;
    j = 0;
    while (str[i] != '\0')
        i++;
    i--;
    while (j <= i)
    {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        j++;
        i--;
    }
    return (str);
}


int main(void)
{
    char str[5] = "hello";
    printf("ft_strrev: %s\n",ft_strrev(str));
    return (0);
}