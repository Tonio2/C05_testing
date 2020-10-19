#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_is_prime(int nb);

int	main(int argc, char **argv)
{
	int nb;
	
	if (argc != 2)
	{
		printf("Usage : ./prgm06 nb");
		return (1);
	}
	nb = atoi(argv[1]);
	printf("%d", ft_is_prime(nb));
}
