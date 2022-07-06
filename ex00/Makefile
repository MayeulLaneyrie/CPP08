SRC			=	main.cpp

NAME		=	test

CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98
CDEP		=	-MMD

RM        =    rm -rf

OBJ        =    $(SRC:%.cpp=obj/%.o)
DEP        =    $(SRC:%.cpp=obj/%.d)

all		:	obj $(NAME)

-include $(DEP)

$(NAME)	:	$(OBJ)
			$(CC) $(CFLAGS) -o $(NAME) $(SRC)

obj		:
				@ if [ ! -d "./obj" ]; then \
					mkdir -p obj; \
				fi

obj/%.o	:	%.cpp
			$(CC) -o $@ -c $< $(CFLAGS) $(CDEP)

clean	:
			$(RM) $(OBJ)
			$(RM) obj

fclean	:	clean
			$(RM) $(NAME)


re		:	fclean all

.PHONY	:	all obj clean fclean re
