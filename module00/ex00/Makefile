NAME	=	megaphone

CC	=	c++

RM	=	rm -rf

FLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC	=	megaphone.cpp

OBJ	=	$(SRC:%.cpp=%.o)


$(NAME):	$(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)


%.o:	%.cpp
	$(CC) $(FLAGS) -c $< -o $@

all:	$(NAME)


clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
