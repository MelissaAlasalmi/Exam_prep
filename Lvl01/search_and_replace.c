#include <unistd.h>

void search_and_replace(char *str, char c1, char c2)
{
    while (*str != '\0')
    {
        if (*str == c1)
        {
            write(1, &c2, 1);
            str++;
        }
        else
        {   
            write(1, *&str, 1);
            str++;
        }
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    if (argc != 4)
        write(1, "\n", 1);
    else
        search_and_replace(argv[1], argv[2][0], argv[3][0]);
    return(0);    
}