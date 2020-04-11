#include <unistd.h>

void rot_13(char *str)
{
    while (*str != '\0')
    {
        if ((*str >= 'a' && *str <= 'm') || (*str >= 'A' && *str <= 'M'))
            {
            *str += 13;
            write(1, *&str, 1);
            }
        else if ((*str >= 'n' && *str <= 'z') || (*str >= 'N' && *str <= 'Z'))
            {
            *str -=  13;
            write(1, *&str, 1);
            }
        else
            write(1, *&str, 1);
        *str++;
    }
}

int main(int argc, char **argv)
{
    if (argc != 2)
        write(1, "\n", 1);
    else
        rot_13(argv[1]);
    return (0);
}