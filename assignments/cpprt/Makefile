# Makefile for GLFW program

# Compiler
CC = g++

# Compiler flags
CFLAGS = -Wall -std=c++17 -Wno-deprecated -O2

# GLFW libraries and includes
GLFW_LIBS = -lglfw3 -framework OpenGL -framework Cocoa -framework IOKit -framework CoreVideo
GLFW_INCLUDES = -I/usr/local/include/GLFW
GLFW_LIB_PATH = -L/usr/local/lib

# Source files
SOURCES = main.cpp

# Output executable
EXECUTABLE = prog 

all: $(EXECUTABLE)

$(EXECUTABLE): $(SOURCES)
	$(CC) $(CFLAGS) $(GLFW_INCLUDES) $(GLFW_LIB_PATH) $(GLFW_LIBS) $(SOURCES) -o $(EXECUTABLE)

clean:
	rm -f $(EXECUTABLE)
