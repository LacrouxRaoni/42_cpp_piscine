NAME		=	dreamJob

SRC_DIR		=	src
PATH_OBJ	=	obj

HEADERS		=	includes/Account.hpp

CC			=	c++
RM			=	rm -rf
FLAGS		=	-Wall -Wextra -Werror -std=c++98 


SRC_FILES	=	tests.cpp\
				Account.cpp\
				

SRC			=	$(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJ			=	$(SRC:$(SRC_DIR)/%.cpp=$(PATH_OBJ)/%.o)


all:	$(NAME)

$(NAME):	$(OBJ) $(HEADERS)
	@echo done!!
	@$(CC) $(FLAGS) $(OBJ) -g -o $(NAME)

$(PATH_OBJ)/%.o:	$(SRC_DIR)/%.cpp
	@mkdir -p $(PATH_OBJ)
	$(CC) -g $(FLAGS) -c -I includes -o $@ $<

clean:
	$(RM) $(PATH_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

#./dreamJob | awk '{ print $2 }' > b && cat 19920104_091532.log | awk '{ print $2 }' > a && diff a b

.PHONY: all clean fclean re
