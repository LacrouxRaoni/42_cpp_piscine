NAME		=	myAwesomePhoneBook

SRC_DIR		=	src
PATH_OBJ	=	obj

ENTITIES	=	entities/
SERVICES	=	services/
SYSTEM		=	system/

HEADERS		=	includes/


CC			=	c++
RM			=	rm -rf
FLAGS		=	-Wall -Wextra -Werror -std=c++98


SRC_FILES	=	$(SYSTEM)Application.cpp\
				$(ENTITIES)ContactEntity.cpp\
				$(ENTITIES)PhoneBookEntity.cpp\
				$(SERVICES)ContactService.cpp\
				$(SERVICES)PhoneBookService.cpp

SRC			=	$(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJ			=	$(SRC:$(SRC_DIR)/%.cpp=$(PATH_OBJ)/%.o)


all:	$(NAME)

$(NAME):	$(OBJ)
	@echo done!!
	@$(CC) $(FLAGS) $(OBJ) -g -o $(NAME)

$(PATH_OBJ)/%.o:	$(SRC_DIR)/%.cpp
	@mkdir -p $(PATH_OBJ)
	@mkdir -p $(PATH_OBJ)/$(ENTITIES)
	@mkdir -p $(PATH_OBJ)/$(SERVICES)
	@mkdir -p $(PATH_OBJ)/$(SYSTEM)
	$(CC) -g $(FLAGS) -c -I includes -o $@ $<

clean:
	$(RM) $(PATH_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
