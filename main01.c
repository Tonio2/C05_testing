#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb);

int	main(int argc, char **argv)
{
	int nb;
	
	if (argc != 2)
	{
		printf("Usage : ./a.out n");
		return (1);
	}
	nb = atoi(argv[1]);
	printf("%d", ft_recursive_factorial(nb));
}
