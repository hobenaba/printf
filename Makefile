CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

MANDOTARY = ft_adress_printf.c	ft_char_printf.c	ft_hexa_printf.c	ft_nb_printf.c	ft_printf.c	ft_str_printf.c	ft_unb_printf.c

OBJ =$(MANDOTARY:.c=.o)

.o : .c

all : $(NAME)

$(NAME) : $(OBJ) 
	ar -rcs $(NAME) $(OBJ)

clean : $(OBJ)
	rm -rf *.o

fclean : clean
	rm -rf all

re : clean	all
