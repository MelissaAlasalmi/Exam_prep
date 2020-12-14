#include <unistd.h>

void    ulstr(char c)
{
    if(c >= 'a' && c <= 'z')
    {
        c -= 32;
        write(1, &c, 1);
    }
    else if(c >= 'A' && c <= 'Z')
    {
        c = c + 32;
        write(1, &c, 1);
    }
    else
        write(1, &c, 1);

}

int main(int argc, char **argv)
{
    int i;
    i = 0;
    if (argc != 2)
        write(1, "\n", 1);
    else
        while (argv[1][i] != '\0')
        {
            ulstr(argv[1][i]);
            i++;
        }
        write(1, "\n", 1);
    return(0);
}