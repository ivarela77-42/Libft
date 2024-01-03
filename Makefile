# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivanrodr <ivanrodr@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/03 13:33:50 by ivanrodr          #+#    #+#              #
#    Updated: 2024/01/03 13:34:20 by ivanrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#  Nombre de la libreria
NAME            = libft.a

# Carpetas
SRC_DIR         = src
#OBJ_DIR       = obj
OBJ_DIR         = .
BONUS_DIR       = bonus

# Compilador
CC              = gcc
CFLAGS          = -Wall -Wextra -Werror
INCLUDES        = -I.
# INCLUDES = -I./includes
RM              = rm -f

# Archivos fuente
SRC_FILES       = $(shell find $(SRC_DIR) -name '*.c')
OBJ_FILES       = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC_FILES))
BONUS_SRC_FILES = $(shell find $(BONUS_DIR) -name '*.c')
BONUS_OBJ_FILES = $(patsubst $(BONUS_DIR)/%.c, $(OBJ_DIR)/%.o, $(BONUS_SRC_FILES))

# Reglas
all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Para crear la carpeta donde se generan los archivo .o
#$(OBJ_DIR):
#	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(BONUS_DIR)/%.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

bonus: $(OBJ_DIR) $(BONUS_OBJ_FILES)
	ar rcs $(NAME) $(BONUS_OBJ_FILES)

so: $(OBJ_DIR) $(BONUS_OBJ_FILES)
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC_FILES)
	gcc -nostartfiles -shared -o libft.so $(OBJ_FILES) $(BONUS_OBJ_FILES)

clean:
	$(RM) $(OBJ_FILES) $(BONUS_OBJ_FILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re