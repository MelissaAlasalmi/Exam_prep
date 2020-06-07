// Write a function that converts the string argument str to an integer (type int)
// and returns it.

// It works much like the standard atoi(const char *str) function.

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
	int		result;
	int		neg;

    result = 0;
	neg = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v' || *str == '\f' || *str == '\r')
        *str++;
	if (*str == '-')
		neg = -1;
    if (*str == '-' || *str == '+')
        *str++;
	while (*str >= '0' && *str <= '9')
	{
		result = 10 * result + (*str - '0');
		*str++;
	}
	return (result * neg);
}

int main(void)
{
    const char *str = "12345";
    
    printf("atoi = %d\n", atoi(str));
    printf("ft_atoi = %d\n", ft_atoi(str));
    return(0);
}