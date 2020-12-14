#include <unistd.h>

int ft_parser(char c, char *str)
{
  int i;
  
  i = 0;
  while (str[i])
  {
    if (c != str[i])
        i++;
    else if (c == str[i])
        return (1);
    }
  return (0);
}

void ft_backtracker(char *str, int i, int j)
{
    while (j >= 0)
    {
        if (str[i] == str[j])
            break ;
        else
            j--;
    }
    if (j <= 0)
        write(1, &str[i], 1);
}

void ft_union(char *s1, char *s2)
{
    int i;
    int j;

    i = 0;
    j = -1;
    while (s1[i] != '\0')
    {
        if (s1[i] != s1[j])
        {
            ft_backtracker(s1, i, j);
            i++;
            j = i - 1;
        }
        else
          i++;
    }
    i = 0;
    while (s2[i] != '\0')
    {
        if ((ft_parser(s2[i], s1)) == 1)
            i++;
        else
        {
            j = i - 1;
            if (s2[i] != s2[j])
            {
                ft_backtracker(s2, i, j);
                i++;
            }
            else
                i++;
        }
    }
}

int main(int argc, char **argv)
{
    if (argc != 3)
        write(1, "\n", 1);
    else
    {
        ft_union(argv[1], argv[2]);
        write(1, "\n", 1);
    }
    return (0);
}