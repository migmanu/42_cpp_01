OBJS = main.cpp Harl.cpp

CC = c++

COMPILER_FLAGS = -Werror -Wextra -Wall -std=c++98 -g

OBJ_NAME = harlFilter

$(OBJ_NAME) : $(OBJS)
	@$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)

clean : 
	@rm $(OBJ_NAME)
