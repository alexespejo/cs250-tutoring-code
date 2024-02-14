# the compiler to use
CC = g++

# compiler flags:
# -g    adds debugging information to the executable file
# -Wall turns on most, but not all, compiler warnings
CFLAGS = -g -Wall

# the name of the file to produce as output
TARGET = main

all: $(TARGET)

$(TARGET): $(TARGET).cpp
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp Test.cpp

clean:
	$(RM) $(TARGET)

run: $(TARGET)
	./$(TARGET)

build: $(TARGET)
	@echo "Build successful."