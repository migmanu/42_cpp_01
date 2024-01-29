#OBJS specifies which files to compile as part of the project
OBJS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

#CC specifies which compiler we're using
CC = g++

#COMPILER_FLAGS specifies the additional compilation options we're using
# -w suppresses all warnings
COMPILER_FLAGS = -Werror -Wextra -Wall -g

#LINKER_FLAGS specifies the libraries we're linking against
LINKER_FLAGS = 

#OBJ_NAME specifies the name of our exectuable
OBJ_NAME = zombies

#This is the target that compiles our executable
all : $(OBJS)
	@$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)

clean : 
	@rm $(OBJ_NAME)

re : clean all
