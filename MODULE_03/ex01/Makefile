NAME 		= 	Serena

SRCS		=	main.cpp ClapTrap.cpp ScavTrap.cpp
OBJS		=	$(SRCS:.cpp=.o)

CC 			=	clang++
CFLAGS		= 	-Wall -Wextra -Werror -std=c++98
OCFLAGS		=	-Wall -Wextra -Werror

all:	 		$(NAME)

$(NAME): $(OBJS)
	$(CC) $(OCFLAGS) $(OBJS) -o $@

%.o: %.cpp
	 $(CC) $(CFLAGS) -c $< -o $@

clean:
				@rm -f $(OBJS)

fclean: 		clean
				@rm -f $(NAME)

re: 			fclean all

.PHONY: 		all clean fclean re