#include <stdio.h>

char	*ft_strpbrk(const char *str, const char *c)
{
	int i;
    int j;

	i = 0;
    j = 0;

    while (c[i] != '\0')
    {
        while (str[j] != '\0')
        {
            if (c[i] == str[j])
                return ((char*)str);
            j++;
        }
        i++;
	}
	return (NULL);
}

int main(void)
{
    const char *str;
    const char *c;

    str = "abcdefghijklm";
    c = "monsterrrr";
    printf("\n%s\n", ft_strpbrk(str, c));
    return (0);
}