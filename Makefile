# Nom de la bibliothèque
NAME = libft.a

# Fichiers sources
SRCS = ft_putnbr_fd.c ft_strtrim.c ft_strmapi.c ft_strnstr.c ft_itoa.c ft_putchar_fd.c  ft_strncmp.c ft_lstadd_front.c  ft_putendl_fd.c  ft_strrchr.c ft_atoi.c ft_lstlast.c ft_putstr_fd.c ft_substr.c ft_bzero.c ft_lstnew.c ft_strchr.c ft_tolower.c ft_calloc.c ft_lstsize.c ft_strdup.c ft_toupper.c ft_isalnum.c ft_memchr.c ft_striteri.c ft_isalpha.c ft_memcmp.c ft_strjoin.c ft_isascii.c ft_memcpy.c ft_strlcat.c ft_isdigit.c ft_memmove.c ft_strlcpy.c ft_isprint.c ft_memset.c ft_strlen.c
OBJS = $(SRCS:.c=.o)

# Fichiers sources pour les bonus
BONUS_SRCS = ft_lstnew.c ft_lstadd_back.c ft_lstadd_front.c ft_lstlast.c
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# Compilateur et options de compilation
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Commandes de Makefile
all: $(NAME)

# Compilation de la bibliothèque statique
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Compilation des fichiers objets
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Compilation des fichiers objets bonus
bonus: $(BONUS_OBJS)
	ar rcs $(NAME) $(BONUS_OBJS)

# Nettoyage des objets
clean:
	rm -f $(OBJS) $(BONUS_OBJS)

# Nettoyage complet
fclean: clean
	rm -f $(NAME)

# Recompilation complète
re: fclean all

.PHONY: all clean fclean re
