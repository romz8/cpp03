# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 15:35:32 by rjobert           #+#    #+#              #
#    Updated: 2024/01/23 17:42:46 by rjobert          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
Flags = -Wall -Wextra -Werror -std=c++98 -pedantic -MMD -I ./
NAME = serena
HEADER = ClapTrap.hpp ScavTrap.hpp
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp
OBJS = $(SRC:.cpp=.o)
DEPS = $(SRC:.cpp=.d)
RM = rm -rf

all: $(NAME)

-include $(DEPS)
$(NAME): $(OBJS)
	$(CC) $(Flags) $(OBJS) -o $(NAME)

%.o: %.cpp Makefile $(HEADER)
	$(CC) $(Flags) -c $< -o $@

clean:
	$(RM) $(OBJS) $(DEPS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean
