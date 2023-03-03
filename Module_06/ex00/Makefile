# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbach <jbach@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/08 19:46:35 by jbach             #+#    #+#              #
#    Updated: 2022/11/07 16:13:18 by jbach            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Conversion_Scalaire

FILES =	TypeInt.cpp\
		TypeFloat.cpp\
		TypeDouble.cpp\
		TypeChar.cpp\
		Conversion.cpp\
		main.cpp

CC = c++

INCS_PATH = includes/
OBJS_PATH = objects/
SRCS_PATH = sources/

SRCS = $(SRCS_PATH) $(FILES)
OBJS = ${addprefix $(OBJS_PATH), $(FILES:.cpp=.o)}
INCLUDES = $(addprefix -I , $(INCS_PATH))

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

$(OBJS_PATH)%.o: $(SRCS_PATH)%.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean: 
	${RM} ${OBJS}
	${RM} -r ${OBJS_PATH}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re