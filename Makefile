NAME = libft.a

all:
	cc -c ft_*.c
	ar crs $(NAME) *.o

fclean:
	rm ft_*.o
	rm $(NAME)
