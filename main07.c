#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_find_next_prime(int nb);

int	main(int argc, char **argv)
{
	int n;
	
	if (argc != 2)
	{
		printf("Usage : ./prgm07 nb");
		return (1);
	}
	n = atoi(argv[1]);
	printf("%d", ft_find_next_prime(n));
}
