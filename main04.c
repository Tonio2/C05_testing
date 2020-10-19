#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_fibonacci(int index);

int	main(int argc, char **argv)
{
	int index;
	
	if (argc != 2)
	{
		printf("Usage : ./a.out index");
		return (1);
	}
	index = atoi(argv[1]);
	printf("%d", ft_fibonacci(index));
}
