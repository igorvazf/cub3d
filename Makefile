LIBFT_PATH		=	./libraries/libft
LIBFT			=	$(LIBFT_PATH)/libft.a

MINILIBX_PATH	=	./libraries/minilibx
MINILIBX		=	$(MINILIBX_PATH)/libmlx.a

SOURCES_FILES	=	cub3d.c

SOURCES_DIR		=	sources

HEADERS_FILES	=	cub3d.h

SOURCES			=	$(addprefix $(SOURCES_DIR)/, $(SOURCES_FILES))

HEADERS			=	$(addprefix $(SOURCES_DIR)/, $(HEADERS_FILES))

OBJECTS			= 	$(SOURCES:.c=.o)

NAME			=	cub3D

CC				=	gcc
RM				=	rm -rf

CFLAGS			=	-Wall -Wextra -Werror
MLXFLAGS		=	-lXext -lX11 -lm

.c.o:
				$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:			$(NAME)

$(NAME):		$(LIBFT) $(MINILIBX) $(OBJECTS) $(HEADERS)
				$(CC) $(CFLAGS) $(OBJECTS) $(LIBFT) $(MINILIBX) $(MLXFLAGS) -o $(NAME)

$(LIBFT):
				$(MAKE) -C $(LIBFT_PATH)

$(MINILIBX):
				$(MAKE) -C $(MINILIBX_PATH)

clean:
				$(MAKE) -C $(LIBFT_PATH) clean
				$(MAKE) -C $(MINILIBX_PATH) clean
				$(RM) $(OBJECTS)

fclean:			clean
				$(MAKE) -C $(LIBFT_PATH) fclean
				$(RM) $(NAME) $(NAME_BONUS)

re:				fclean all

.PHONY:			all clean fclean re libft minilibx