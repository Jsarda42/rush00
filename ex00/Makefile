
NAME = rush00
SRCS = ft_putchar.c main.c rush00.c rush002.c rush003.c rush004.c
OBJS = $(SRCS:.c=.o)
CC = cc
FLAGS = -Werror -Wextra -Wall

all : ${NAME}

${NAME} : ${OBJS}
	${CC} ${FLAGS} ${OBJS} -o $@

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(NAME) $(OBJS)
