# Compiler and flags
CC = cc
FLAGS = -Wextra -Wall -Werror

# Targets
CLIENT = client
SERVER = server

# Sources
CLISRC = client.c
SERSRC = server.c
UTILS = minitalk_utils.c

# Default rule
all: $(CLIENT) $(SERVER)

# Rules for client and server
$(CLIENT): $(CLISRC) $(UTILS)
	$(CC) $(FLAGS) $(CLISRC) $(UTILS) -o $(CLIENT)

$(SERVER): $(SERSRC) $(UTILS)
	$(CC) $(FLAGS) $(SERSRC) $(UTILS) -o $(SERVER)

# Clean rule
clean:
	rm -rf $(SERVER) $(CLIENT)

# Full clean rule
fclean: clean

# Rebuild all
re: fclean all
