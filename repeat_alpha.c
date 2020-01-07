#include <unistd.h>

void repeat_alpha(char *str)
{
    int letter;
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        letter = 0;
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            letter = str[i] - 64;
            while (letter > 0)
                {
                   write(1, &str[i], 1);
                   letter--;
                }
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            letter = str[i] - 96;
            while (letter > 0)
                {
                   write(1, &str[i], 1);
                   letter--;
                }
        }
        else
            write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        repeat_alpha(argv[1]);
    write(1, "\n", 1);
    return (0);
}