# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbach <jbach@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/05 18:05:46 by jbach             #+#    #+#              #
#    Updated: 2022/09/05 18:56:21 by jbach            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

FILES =	Megaphone.cpp

CC = c++

OBJS_PATH = objects/
SRCS_PATH = sources/

SRCS = $(SRCS_PATH) $(FILES)
OBJS = ${addprefix $(OBJS_PATH), $(FILES:.cpp=.o)}

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

$(OBJS_PATH)%.o: $(SRCS_PATH)%.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

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