#include <unistd.h>

void ft_putstr(char *s1)
{
   while (*s1 != '\0')
   {
       write(1, *&s1, 1);
       *s1++;
   }
}

void wdmatch(char *s1, char *s2)
{
    int i;

    i = 0;
    while (*s2 != '\0')
    {
        if (s1[i] == *s2)
        {
            i++;
            *s2++;
        }
        else
            *s2++;
    }
    if (s1[i] == '\0')
        ft_putstr(s1);
}

int main(int argc, char **argv)
{
    if (argc != 3)
        write(1, "\n", 1);
    else
    {
        wdmatch(argv[1], argv[2]);
        write(1, "\n", 1);
    }
    return (0);
}