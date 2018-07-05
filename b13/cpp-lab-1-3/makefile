CC=g++
CFLAGS=-c -Wall -g
LDFLAGS=-std=c++11 -g
SOURCES=task2.cpp task3.cpp main3.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=main3

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f *.o a.out