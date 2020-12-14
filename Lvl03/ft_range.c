// Write a function that allocates (with malloc()) an array of integers, fill it with consecutive
// values that begin at start and end at end (Including start and end !), then
// returns a pointer to the first value of the array.

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int				i;
	int				*output;

	i = 0;
	if(min >= max)
		return (0);
	output = (int*)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		output[i] = min;
		printf("range:\n %d \n",output[i]);
		i++;
		min++;
	}
	return (output);
}

int main(void)
{
	int min;
	int max;

	min = 1;
	max = 10;
	ft_range(min, max);
	return (0);
}