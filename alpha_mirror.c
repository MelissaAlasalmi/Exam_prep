// Write a program called alpha_mirror that takes a string and displays this string
// after replacing each alphabetical character by the opposite alphabetical
// character, followed by a newline. Case is not changed. If the number of arguments 
// is not 1, display only a newline.

// a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z
// z  y  x  w  v  u  t  s  r  q  p  o  n  m  l  k  j  I  h  g  f  e  d  c  b  a

// hello = svool

#include <unistd.h>

void alpha_mirror(char *str)
{
    int i;
    char new;

    i = 0;
    new = str[i];
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            new = 'a' - str[i] + 'z';
            write(1, &new, 1);
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            new = 'A' - str[i] + 'Z';
            write(1, &new, 1);
        }
        else
            write(1, &str, 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc != 2)
        write(1, "\n", 1);
    else
        alpha_mirror(argv[1]);
    return (0);
}