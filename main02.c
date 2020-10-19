#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power);

int	main(int argc, char **argv)
{
	int nb;
	int power;

	if (argc != 3)
	{
		printf("Usage : ./a.out nb power");
		return (1);
	}
	nb = atoi(argv[1]);
	power = atoi(argv[2]);
	printf("%d", ft_iterative_power(nb, power));
}
