NAME = rush.exe
SRC = src/ft_lib.c src/main.c src/rush.c
INC = includes

rush:
	gcc -I $(INC) $(SRC) -o $(NAME)
clean:
	del $(NAME)
re: clean rush