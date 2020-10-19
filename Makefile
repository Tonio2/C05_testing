all: prgm00 prgm01 prgm02 prgm03 prgm04 prgm04 prgm05 prgm06 prgm07 prgm08

prgm00 : ../ex00/ft_iterative_factorial.c main00.c
	gcc -Wall -Wextra -Werror main00.c ../ex00/ft_iterative_factorial.c -o prgm00

prgm01 : ../ex01/ft_recursive_factorial.c main01.c
	gcc -Wall -Wextra -Werror main01.c ../ex01/ft_recursive_factorial.c -o prgm01

prgm02 : ../ex02/ft_iterative_power.c main02.c
	gcc -Wall -Wextra -Werror main02.c ../ex02/ft_iterative_power.c -o prgm02

prgm03 : ../ex03/ft_recursive_power.c main03.c
	gcc -Wall -Wextra -Werror main03.c ../ex03/ft_recursive_power.c -o prgm03

prgm04 : ../ex04/ft_fibonacci.c main04.c
	gcc -Wall -Wextra -Werror main04.c ../ex04/ft_fibonacci.c -o prgm04

prgm05 : ../ex05/ft_sqrt.c main05.c
	gcc -Wall -Wextra -Werror main05.c ../ex05/ft_sqrt.c -o prgm05

prgm06 : ../ex06/ft_is_prime.c main06.c
	gcc -Wall -Wextra -Werror main06.c ../ex06/ft_is_prime.c -o prgm06

prgm07 : ../ex07/ft_find_next_prime.c main07.c
	gcc -g -Wall -Wextra -Werror main07.c ../ex07/ft_find_next_prime.c -o prgm07

prgm08 : ../ex08/ft_ten_queens_puzzle.c main08.c
	gcc -g -Wall -Wextra -Werror main08.c ../ex08/ft_ten_queens_puzzle.c -o prgm08
